/********************************************************************************
** Form generated from reading UI file 'secondwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDWINDOW_H
#define UI_SECONDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_secondwindow
{
public:
    QWidget *centralwidget;
    QPushButton *ExitButton;
    QTableWidget *ClientTable;
    QTableWidget *UserTable;
    QPushButton *SaveCustomer_3;
    QPushButton *restoreTableButton;
    QPushButton *SaveCustomer8;
    QPushButton *SaveCustomer_4;
    QPushButton *SaveCustomer8_2;
    QPushButton *restoreTableButton_2;
    QPushButton *ExportCSV;
    QPushButton *SaveCustomer_5;
    QMenuBar *menubar;

    void setupUi(QMainWindow *secondwindow)
    {
        if (secondwindow->objectName().isEmpty())
            secondwindow->setObjectName(QString::fromUtf8("secondwindow"));
        secondwindow->resize(1200, 600);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(secondwindow->sizePolicy().hasHeightForWidth());
        secondwindow->setSizePolicy(sizePolicy);
        secondwindow->setMaximumSize(QSize(1200, 600));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        QBrush brush2(QColor(127, 127, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush2);
        QBrush brush3(QColor(170, 170, 170, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush4(QColor(255, 255, 220, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush5(QColor(0, 0, 0, 128));
        brush5.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        secondwindow->setPalette(palette);
        secondwindow->setAcceptDrops(true);
        centralwidget = new QWidget(secondwindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        ExitButton = new QPushButton(centralwidget);
        ExitButton->setObjectName(QString::fromUtf8("ExitButton"));
        ExitButton->setGeometry(QRect(500, 210, 80, 30));
        ClientTable = new QTableWidget(centralwidget);
        if (ClientTable->columnCount() < 3)
            ClientTable->setColumnCount(3);
        QFont font;
        font.setKerning(true);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        ClientTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        ClientTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        ClientTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (ClientTable->rowCount() < 1)
            ClientTable->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        ClientTable->setVerticalHeaderItem(0, __qtablewidgetitem3);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setBackground(brush6);
        __qtablewidgetitem4->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled|Qt::ItemIsTristate);
        ClientTable->setItem(0, 0, __qtablewidgetitem4);
        ClientTable->setObjectName(QString::fromUtf8("ClientTable"));
        ClientTable->setGeometry(QRect(0, 0, 421, 600));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ClientTable->sizePolicy().hasHeightForWidth());
        ClientTable->setSizePolicy(sizePolicy1);
        ClientTable->setMaximumSize(QSize(16777215, 600));
        UserTable = new QTableWidget(centralwidget);
        if (UserTable->columnCount() < 3)
            UserTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        UserTable->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        UserTable->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        UserTable->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        if (UserTable->rowCount() < 1)
            UserTable->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        UserTable->setVerticalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        UserTable->setItem(0, 0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        UserTable->setItem(0, 1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        UserTable->setItem(0, 2, __qtablewidgetitem11);
        UserTable->setObjectName(QString::fromUtf8("UserTable"));
        UserTable->setGeometry(QRect(660, 0, 341, 591));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(UserTable->sizePolicy().hasHeightForWidth());
        UserTable->setSizePolicy(sizePolicy2);
        UserTable->setMaximumSize(QSize(16777215, 600));
        SaveCustomer_3 = new QPushButton(centralwidget);
        SaveCustomer_3->setObjectName(QString::fromUtf8("SaveCustomer_3"));
        SaveCustomer_3->setGeometry(QRect(460, 10, 161, 30));
        restoreTableButton = new QPushButton(centralwidget);
        restoreTableButton->setObjectName(QString::fromUtf8("restoreTableButton"));
        restoreTableButton->setGeometry(QRect(460, 90, 161, 30));
        SaveCustomer8 = new QPushButton(centralwidget);
        SaveCustomer8->setObjectName(QString::fromUtf8("SaveCustomer8"));
        SaveCustomer8->setGeometry(QRect(460, 130, 161, 30));
        SaveCustomer_4 = new QPushButton(centralwidget);
        SaveCustomer_4->setObjectName(QString::fromUtf8("SaveCustomer_4"));
        SaveCustomer_4->setGeometry(QRect(1010, 10, 171, 30));
        SaveCustomer8_2 = new QPushButton(centralwidget);
        SaveCustomer8_2->setObjectName(QString::fromUtf8("SaveCustomer8_2"));
        SaveCustomer8_2->setGeometry(QRect(1010, 90, 171, 30));
        restoreTableButton_2 = new QPushButton(centralwidget);
        restoreTableButton_2->setObjectName(QString::fromUtf8("restoreTableButton_2"));
        restoreTableButton_2->setGeometry(QRect(1010, 50, 171, 30));
        restoreTableButton_2->setFlat(false);
        ExportCSV = new QPushButton(centralwidget);
        ExportCSV->setObjectName(QString::fromUtf8("ExportCSV"));
        ExportCSV->setGeometry(QRect(460, 170, 161, 30));
        SaveCustomer_5 = new QPushButton(centralwidget);
        SaveCustomer_5->setObjectName(QString::fromUtf8("SaveCustomer_5"));
        SaveCustomer_5->setGeometry(QRect(460, 50, 161, 30));
        secondwindow->setCentralWidget(centralwidget);
        ClientTable->raise();
        UserTable->raise();
        ExitButton->raise();
        SaveCustomer_3->raise();
        restoreTableButton->raise();
        SaveCustomer8->raise();
        SaveCustomer_4->raise();
        SaveCustomer8_2->raise();
        restoreTableButton_2->raise();
        ExportCSV->raise();
        SaveCustomer_5->raise();
        menubar = new QMenuBar(secondwindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1200, 20));
        secondwindow->setMenuBar(menubar);

        retranslateUi(secondwindow);
        QObject::connect(ExitButton, SIGNAL(clicked()), secondwindow, SLOT(close()));

        QMetaObject::connectSlotsByName(secondwindow);
    } // setupUi

    void retranslateUi(QMainWindow *secondwindow)
    {
        secondwindow->setWindowTitle(QApplication::translate("secondwindow", "\320\220\320\262\321\202\320\276\320\274\320\260\321\202\320\270\320\267\320\270\321\200\320\276\320\262\320\260\320\275\320\275\320\260\321\217 \320\241\320\270\321\201\321\202\320\265\320\274\320\260 \320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217 \320\240\320\260\320\261\320\276\321\207\320\270\320\274 \320\234\320\265\321\201\321\202\320\276\320\274 \320\232\320\260\321\201\321\201\320\270\321\200\320\260", nullptr));
        ExitButton->setText(QApplication::translate("secondwindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem = ClientTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("secondwindow", "\320\244\320\230\320\236", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = ClientTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("secondwindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = ClientTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("secondwindow", "\320\241\321\203\320\274\320\274\320\260 \320\267\320\260\320\272\320\260\320\267\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = ClientTable->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("secondwindow", "1.", nullptr));

        const bool __sortingEnabled = ClientTable->isSortingEnabled();
        ClientTable->setSortingEnabled(false);
        ClientTable->setSortingEnabled(__sortingEnabled);

        QTableWidgetItem *___qtablewidgetitem4 = UserTable->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("secondwindow", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = UserTable->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("secondwindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = UserTable->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("secondwindow", "\320\237\321\200\320\260\320\262\320\260 \320\264\320\276\321\201\321\202\321\203\320\277\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = UserTable->verticalHeaderItem(0);
        ___qtablewidgetitem7->setText(QApplication::translate("secondwindow", "1.", nullptr));

        const bool __sortingEnabled1 = UserTable->isSortingEnabled();
        UserTable->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem8 = UserTable->item(0, 0);
        ___qtablewidgetitem8->setText(QApplication::translate("secondwindow", "admin", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = UserTable->item(0, 1);
        ___qtablewidgetitem9->setText(QApplication::translate("secondwindow", "admin", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = UserTable->item(0, 2);
        ___qtablewidgetitem10->setText(QApplication::translate("secondwindow", "admin", nullptr));
        UserTable->setSortingEnabled(__sortingEnabled1);

        SaveCustomer_3->setText(QApplication::translate("secondwindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\272\320\273\320\270\320\265\320\275\321\202\320\260", nullptr));
        restoreTableButton->setText(QApplication::translate("secondwindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\272\320\273\320\270\320\265\320\275\321\202\320\276\320\262 \320\270\320\267 \321\204\320\260\320\271\320\273\320\260", nullptr));
        SaveCustomer8->setText(QApplication::translate("secondwindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\272\320\273\320\270\320\265\320\275\321\202\320\276\320\262 \320\262 \321\204\320\260\320\271\320\273", nullptr));
        SaveCustomer_4->setText(QApplication::translate("secondwindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        SaveCustomer8_2->setText(QApplication::translate("secondwindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\265\320\275\320\270\320\265 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\320\265\320\271", nullptr));
        restoreTableButton_2->setText(QApplication::translate("secondwindow", "\320\222\320\276\321\201\321\201\321\202\320\260\320\275\320\276\320\262\320\273\320\265\320\275\320\270\320\265 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\320\265\320\271", nullptr));
        ExportCSV->setText(QApplication::translate("secondwindow", "\320\255\320\272\321\201\320\277\320\276\321\200\321\202 \321\202\320\260\320\261\320\273\320\270\321\206\321\213 \320\262 CSV", nullptr));
        SaveCustomer_5->setText(QApplication::translate("secondwindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\272\320\273\320\270\320\265\320\275\321\202\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class secondwindow: public Ui_secondwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOW_H
