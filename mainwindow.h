#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "addwindow.h"
#include <QMessageBox>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QtSql>
#include <cmath>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
protected:
    void keyPressEvent(QKeyEvent *event);

private slots:
    void SelectNomenclature();
    void SelectStock();
    void SelectRemnants();
    void SelectPurchase();
    void SelectSale();
    void SelectReturnSale();
    void on_button_add_clicked();
    void on_button_delete_clicked();
    void GetOK();
    void GetCancel();
    void GetChangeStock();
    void on_filterStock_activated(const QString &arg1);
    void on_resetFilter_clicked();

private:
    Ui::MainWindow *ui;
    AddWindow *addWindow;
    QSqlDatabase db;
    QSqlRelationalTableModel *table;
    enum {NOMENCLATURE, STOCK, REMNANTS, PURCHASE, SALE, RETURN_SALE};
    std::map <QString, int> mapTable;
    void SelectTable(QString nameTable);
};

#endif // MAINWINDOW_H
