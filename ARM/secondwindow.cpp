#include "secondwindow.h"
#include "ui_secondwindow.h"
#include "secondwindow.h"
#include "filework.h"
#include <QFileDialog>
#include <QMessageBox>

extern bool adminMode;

fileWork::fileWork()
{

}

secondwindow::secondwindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::secondwindow)
{
    ui->setupUi(this);
    if (!::adminMode){
        this->ui->centralwidget->setFixedWidth(650);
    }
    fileWork::loadUserData(this->ui->UserTable);
    fileWork::restoreTableFromBinaryFile(this->ui->ClientTable);
}

secondwindow::~secondwindow()
{
    delete ui;
}

void secondwindow::on_SaveCustomer_clicked()
{
    fileWork qwerty;
    qwerty.saveTableToBinaryFile(ui->ClientTable);
}

void secondwindow::on_SaveCustomer_2_clicked()
{
    fileWork qwerty;
    qwerty.restoreTableFromBinaryFile(ui->ClientTable);
}


void secondwindow::on_SaveCustomer_3_clicked()
{
    int rowCount = ui->ClientTable->rowCount();
    ui->ClientTable->insertRow(rowCount);
}


void secondwindow::on_restoreTableButton_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                    "clientdat.bin",
                                                    tr("Binary Files (*.bin);;All Files (*)"));
    if (fileName.isEmpty()) {
        // пользователь отменил выбор файла
        return;
    }

    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly)) {
        QMessageBox::warning(this, tr("Error"), tr("Failed to open file for reading."));
        return;
    }

    QDataStream in(&file);
    in.setVersion(QDataStream::Qt_5_12);

    quint32 rows, cols;
    in >> rows >> cols;
    ui->ClientTable->setRowCount(rows);
    ui->ClientTable->setColumnCount(cols);

    for (quint32 i = 0; i < rows; ++i) {
        for (quint32 j = 0; j < cols; ++j) {
            QString value;
            in >> value;
            QTableWidgetItem *item = new QTableWidgetItem(value);
            ui->ClientTable->setItem(i, j, item);
        }
    }

    file.close();
}

void secondwindow::on_SaveCustomer8_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("clientdat.bin"),
                                                    "",
                                                    tr("Binary Files (*.bin);;All Files (*)"));
    if (fileName.isEmpty()) {
        // пользователь отменил сохранение файла
        return;
    }

    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly)) {
        QMessageBox::warning(this, tr("Error"), tr("Failed to open file for writing."));
        return;
    }

    QDataStream out(&file);
    out.setVersion(QDataStream::Qt_5_12);

    out << ui->ClientTable->rowCount() << ui->ClientTable->columnCount();

    for (int i = 0; i < ui->ClientTable->rowCount(); ++i) {
        for (int j = 0; j < ui->ClientTable->columnCount(); ++j) {
            QTableWidgetItem *item = ui->ClientTable->item(i, j);
            if (item) {
                out << item->text();
            } else {
                out << QString();
            }
        }
    }

    file.close();
}



void secondwindow::on_SaveCustomer_4_clicked()
{
    int rowCount = ui->UserTable->rowCount();
    ui->UserTable->insertRow(rowCount);
}


void secondwindow::on_restoreTableButton_2_clicked()
{
    fileWork::loadUserData(this->ui->UserTable);
}


void secondwindow::on_SaveCustomer8_2_clicked()
{
    fileWork::saveUserData(this->ui->UserTable);
}


void secondwindow::on_ExportCSV_clicked()
{
    fileWork qwerty;
    qwerty.exportToCSV(this->ui->ClientTable);
}

void secondwindow::on_SaveCustomer_5_clicked()
{
    int rowCount = ui->ClientTable->rowCount();
    ui->ClientTable->removeRow(rowCount-1);
}

