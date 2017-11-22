#include "addwindow.h"
#include "ui_addwindow.h"

AddWindow::AddWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddWindow)
{
    ui->setupUi(this);
}

AddWindow::~AddWindow()
{
    delete ui;
}

int AddWindow::getNumber()
{
    return ui->number->value();
}

QString AddWindow::getDate()
{
    return ui->date->text();
}

QString AddWindow::getStock()
{
    return ui->stock->currentText();
}

QString AddWindow::getNomenclature()
{
    return ui->nomenclature->currentText();
}

int AddWindow::getQuantity()
{
    return ui->quantity->value();
}

double AddWindow::getPrice()
{
    return ui->price->value();
}

QString AddWindow::getSale()
{
    return ui->numberSale->currentText();
}

void AddWindow::setStock(QSqlQueryModel *model)
{
    ui->stock->setModel(model);
    ui->stock->setCurrentIndex(-1);
}

void AddWindow::setNomenclature(QSqlQueryModel *model)
{
    ui->nomenclature->setModel(model);
    ui->nomenclature->setCurrentIndex(-1);
}

void AddWindow::setNumberSale(QSqlQueryModel *model)
{
    ui->numberSale->setModel(model);
    ui->numberSale->setCurrentIndex(-1);
}

void AddWindow::setEnabledPrice(bool flag)
{
    if(flag)
        ui->price->setEnabled(true);
    else
        ui->price->setEnabled(false);
}

void AddWindow::clearFields()
{
    ui->number->setValue(0);
    ui->date->setDate(QDate::currentDate());
    ui->stock->setCurrentIndex(-1);
    ui->nomenclature->setCurrentIndex(-1);
    ui->numberSale->setCurrentIndex(-1);
    ui->quantity->setValue(0);
    ui->price->setValue(0.0);
}

void AddWindow::setModeNotReturn()
{
    ui->textStock->setVisible(true);
    ui->stock->setVisible(true);
    ui->textNomenclature->setVisible(true);
    ui->nomenclature->setVisible(true);
    ui->textQuantity->setVisible(true);
    ui->quantity->setVisible(true);
    ui->textPrice->setVisible(true);
    ui->price->setVisible(true);
    ui->textNumberSale->setVisible(false);
    ui->numberSale->setVisible(false);
}

void AddWindow::setModeReturn()
{
    ui->textStock->setVisible(false);
    ui->stock->setVisible(false);
    ui->textNomenclature->setVisible(false);
    ui->nomenclature->setVisible(false);
    ui->textQuantity->setVisible(false);
    ui->quantity->setVisible(false);
    ui->textPrice->setVisible(false);
    ui->price->setVisible(false);
    ui->textNumberSale->setVisible(true);
    ui->numberSale->setVisible(true);
}

void AddWindow::setNumber(int number)
{
    ui->number->setValue(number);
}

void AddWindow::setDate(QString date)
{
    ui->date->setDate(QDate::fromString(date, "dd.MM.yyyy"));
}

void AddWindow::setCurrentStock(QString name)
{
    ui->stock->setCurrentText(name);
}

void AddWindow::setCurrentNomenclature(QString name)
{
    ui->nomenclature->setCurrentText(name);
}

void AddWindow::setQuantity(int quantity)
{
    ui->quantity->setValue(quantity);
}

void AddWindow::setPrice(double price)
{
    ui->price->setValue(price);
}

void AddWindow::on_OK_clicked()
{
    this->hide();
    emit sendOK();
}

void AddWindow::on_Cancel_clicked()
{
    this->hide();
    emit sendCancel();
}

void AddWindow::on_stock_currentIndexChanged(int index)
{
    emit sendChangeStock();
}
