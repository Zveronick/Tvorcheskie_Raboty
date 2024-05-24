#include "firstwindow.h"
#include <QApplication>
#include <QFile>
#include <QDir>
#include <QStandardPaths>
#include <QIODevice>
#include <QDebug>
#include <QDataStream>

QString appDataPath2 = QStandardPaths::writableLocation(QStandardPaths::AppDataLocation);

void createDefaultUserData()
{
    QFile file(appDataPath2+"/qtData/userdat.bin");
    if (!file.open(QIODevice::ReadWrite)) {
        qDebug() << "Failed to create and open file for writing: " << file.errorString();
        return;
    }

    QDataStream out(&file);
    out.setVersion(QDataStream::Qt_5_12);

    out << 1 << 3;

    out << "admin" << "admin" << "admin";

    file.close();

}
void createDefaultClientData()
{
    QFile file(appDataPath2+"/qtData/clientdat.bin");
    if (!file.open(QIODevice::ReadWrite)) {
        qDebug() << "Failed to create and open file for writing: " << file.errorString();
        return;
    }

    QDataStream out(&file);
    out.setVersion(QDataStream::Qt_5_12);

    out << 1 << 3;

    out << "" << "" << "";

    file.close();
}


int main(int argc, char *argv[])
{
    QDir dir(appDataPath2);
    if (!dir.exists("qtData")) {
        dir.mkdir("qtData");
    }
    QFile file1(appDataPath2+"/qtData/userdat.bin");
    if (!file1.exists()){
        createDefaultUserData();
    }
    QFile file2(appDataPath2+"/qtData/clientdat.bin");
    if (!file2.exists()){
        createDefaultClientData();
    }
    QApplication a(argc, argv);
    FirstWindow w;
    w.show();
    return a.exec();
}
