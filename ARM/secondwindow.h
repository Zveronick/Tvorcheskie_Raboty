#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H

#include <QMainWindow>
#include <QTableWidget>

namespace Ui {
class secondwindow;
}

class secondwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit secondwindow(QWidget *parent = nullptr);
    ~secondwindow();


private slots:
    void on_SaveCustomer_clicked();

    void on_SaveCustomer_2_clicked();

    void on_SaveCustomer_3_clicked();

    void on_restoreTableButton_clicked();

    void on_SaveCustomer8_clicked();

    void on_SaveCustomer_4_clicked();

    void on_restoreTableButton_2_clicked();

    void on_SaveCustomer8_2_clicked();

    void on_ExportCSV_clicked();

    void on_SaveCustomer_5_clicked();

private:
    Ui::secondwindow *ui;
};

#endif // SECONDWINDOW_H
