#include "firstwindow.h"
#include "ui_firstwindow.h"
#include <QMessageBox>
#include "secondwindow.h"
#include <QDebug>
#include <QFile>
#include "hash.h"
#include <QStandardPaths>

QString appDataPath1 = QStandardPaths::writableLocation(QStandardPaths::AppDataLocation);

bool adminMode;

FirstWindow *w = nullptr;
secondwindow *q = nullptr;

void checkUserData(const QString &login, unsigned int hashpass);

FirstWindow::FirstWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FirstWindow)
{
    ui->setupUi(this);
}

FirstWindow::~FirstWindow()
{
    delete ui;
}


void FirstWindow::on_ShowPassword_toggled(bool checked)
{
    if (checked){
        ui->PasswordEdit->setEchoMode(QLineEdit::Normal);
    }
    else{
        ui->PasswordEdit->setEchoMode(QLineEdit::Password);
    }
}


void FirstWindow::on_LoginButton_clicked()
{
    QString login = ui->LoginEdit->text();
    QString password = ui->PasswordEdit->text();
    unsigned int hashpass = hash(password);
    if ((login == "admin") and (hashpass == 118750313)){
        QMessageBox::information(nullptr, "Успешно", "Вы успешно авторизировались, как Администратор!");
        ::adminMode = true;
        q = new secondwindow();
        q->show();
        this->hide();
    } else{
    QFile file(appDataPath1+"/qtData/userdat.bin");
    if (!file.open(QIODevice::ReadOnly)) {
        qDebug() << "Failed to open file for reading: " << file.errorString();
        QMessageBox::warning(nullptr, "Error", "Failed to open file for reading.");
        return;
    }

    QDataStream in(&file);
    in.setVersion(QDataStream::Qt_5_12);

    quint32 rows, cols;
    in >> rows >> cols;

    for (quint32 i = 0; i < rows; ++i) {
        QString login_i, pass_i, access_i;
        in >> login_i >> pass_i >> access_i;

        // сравниваем логины и хэши паролей
        if (login_i == login && hash(pass_i) == hashpass) {
            if (access_i == "admin") {
                QMessageBox::information(nullptr, "Успешно", "Вы успешно авторизовались как администратор.");
                ::adminMode = true;
                q = new secondwindow();
                q->show();
                this->hide();
            }
            else if (access_i == "user" || access_i.isEmpty()) {
                QMessageBox::information(nullptr, "Успешно", "Вы успешно авторизовались.");
                ::adminMode = false;
                q = new secondwindow();
                q->setFixedWidth(650);
                q->show();
                this->hide();
            } else {
                QMessageBox::warning(nullptr, "Ошибка", "Неправильный уровень доступа. Попросите администратора исправить.");
            }
            return;
        }
    }

    // если логин и пароль не совпали ни с одной записью в таблице, выводим сообщение об ошибке
    QMessageBox::warning(nullptr, "Ошибка", "Неправильный логин или пароль.");
}

}
