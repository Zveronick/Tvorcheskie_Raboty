#ifndef FILEWORK_H
#define FILEWORK_H
#include <iostream>
#include <QFile>
#include <QDataStream>
#include <QTableWidget>
#include <QDebug>
#include <QMessageBox>
#include <QFileDialog>
#include <QTextStream>
#include <QCoreApplication>
#include <QStandardPaths>

QString appDataPath11 = QStandardPaths::writableLocation(QStandardPaths::AppDataLocation);

class fileWork
{
public:
    fileWork();

public:
    void saveTableToBinaryFile(QTableWidget *table)
    {
        QFile file(appDataPath11+"/qtData/clientdat.bin");

        // Если файл не существует, создаем его
        if (!file.exists()) {
            if (!file.open(QIODevice::WriteOnly)) {
                qDebug() << "Failed to create and open file for writing: 1" << file.errorString();
                return;
            }
        } else {
            // Если файл существует, пытаемся открыть его для записи
            if (!file.open(QIODevice::WriteOnly)) {
                qDebug() << "Failed to open existing file for writing: " << file.errorString();
                // Пытаемся удалить файл и создать его заново
                if (!file.remove()) {
                    qDebug() << "Failed to remove existing file: " << file.errorString();
                    return;
                }
                if (!file.open(QIODevice::WriteOnly)) {
                    qDebug() << "Failed to create and open file for writing: " << file.errorString();
                    return;
                }
            }
        }

        QDataStream out(&file);
        out.setVersion(QDataStream::Qt_5_12);

        out << table->rowCount();
        out << table->columnCount();

        for (int row = 0; row < table->rowCount(); ++row) {
            for (int col = 0; col < table->columnCount(); ++col) {
                QTableWidgetItem *item = table->item(row, col);
                if (item) {
                    out << item->text();
                } else {
                    out << QString();
                }
            }
        }

        file.close();
    }


    static void restoreTableFromBinaryFile(QTableWidget *table)
    {
        QFile file(appDataPath11+"/qtData/clientdat.bin");
        if (!file.open(QIODevice::ReadWrite)) {
            qDebug() << "Failed to open file for reading: " << file.errorString();
            return;
        }

        QDataStream in(&file);
        in.setVersion(QDataStream::Qt_5_12);

        quint32 rows, cols;
        in >> rows >> cols;
        table->setRowCount(rows);
        table->setColumnCount(cols);

        for (quint32 row = 0; row < rows; ++row) {
            for (quint32 col = 0; col < cols; ++col) {
                QString value;
                in >> value;
                QTableWidgetItem *item = new QTableWidgetItem(value);
                table->setItem(row, col, item);
            }
        }

        file.close();
    }

static void loadUserData(QTableWidget *table)
{
    QFile file(appDataPath11+"/qtData/userdat.bin");
    if (!file.open(QIODevice::ReadWrite)) {
        qDebug() << "Failed to open file for reading: " << file.errorString();
        QMessageBox::warning(nullptr, "Error", "Failed to open file for reading.");
        return;
    }

    QDataStream in(&file);
    in.setVersion(QDataStream::Qt_5_12);

    quint32 rows, cols;
    in >> rows >> cols;

    table->setRowCount(rows);
    table->setColumnCount(cols);

    for (quint32 i = 0; i < rows; ++i) {
        QString login_i, pass_i, access_i;
        in >> login_i >> pass_i >> access_i;

        QTableWidgetItem *loginItem = new QTableWidgetItem(login_i);
        QTableWidgetItem *passItem = new QTableWidgetItem(pass_i);
        QTableWidgetItem *accessItem = new QTableWidgetItem(access_i);

        table->setItem(i, 0, loginItem);
        table->setItem(i, 1, passItem);
        table->setItem(i, 2, accessItem);
    }

    file.close();
}

static void saveUserData(QTableWidget *table)
{
    QFile file(appDataPath11+"/qtData/userdat.bin");
    if (!file.open(QIODevice::WriteOnly)) {
        qDebug() << "Failed to open file for writing: " << file.errorString();
        QMessageBox::warning(nullptr, "Error", "Failed to open file for writing.");
        return;
    }

    QDataStream out(&file);
    out.setVersion(QDataStream::Qt_5_12);

    int rows = table->rowCount();
    int cols = table->columnCount();

    out << rows << cols;

    for (int i = 0; i < rows; ++i) {
        QString login_i = table->item(i, 0)->text();
        QString pass_i = table->item(i, 1)->text();
        QString access_i = table->item(i, 2)->text();

        out << login_i << pass_i << access_i;
    }

    file.close();
}


void exportToCSV(QTableWidget *table)
{
    QString fileName = QFileDialog::getSaveFileName(nullptr, "Export to CSV", "clientdat.csv", "CSV Files (*.csv)");

    QFile file(fileName);
    file.open(QIODevice::ReadWrite);
    if (!file.exists()) {
        QMessageBox::warning(nullptr, "Error", "Cannot open file for writing:" + file.errorString());
        return;
    }

    QTextStream out(&file);

    // Записываем данные из таблицы в файл
    for (int row = 0; row < table->rowCount(); ++row) {
        for (int col = 0; col < table->columnCount(); ++col) {
            if (col > 0) {
                out << ",";
            }
            out << table->item(row, col)->text();
        }
        out << "\n";
    }

    file.close();
    QMessageBox::information(nullptr, "Success", "Data exported to " + fileName);
}





};
#endif // FILEWORK_H
