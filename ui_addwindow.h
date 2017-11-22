/********************************************************************************
** Form generated from reading UI file 'addwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDWINDOW_H
#define UI_ADDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddWindow
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *textNumber;
    QSpinBox *number;
    QLabel *textDate;
    QDateEdit *date;
    QSpacerItem *horizontalSpacer_5;
    QGridLayout *gridLayout;
    QComboBox *stock;
    QLabel *textStock;
    QLabel *textNomenclature;
    QComboBox *nomenclature;
    QLabel *textNumberSale;
    QComboBox *numberSale;
    QHBoxLayout *horizontalLayout_3;
    QLabel *textQuantity;
    QSpinBox *quantity;
    QLabel *textPrice;
    QDoubleSpinBox *price;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *OK;
    QPushButton *Cancel;

    void setupUi(QWidget *AddWindow)
    {
        if (AddWindow->objectName().isEmpty())
            AddWindow->setObjectName(QStringLiteral("AddWindow"));
        AddWindow->resize(313, 181);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        AddWindow->setWindowIcon(icon);
        gridLayout_2 = new QGridLayout(AddWindow);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        textNumber = new QLabel(AddWindow);
        textNumber->setObjectName(QStringLiteral("textNumber"));

        horizontalLayout->addWidget(textNumber);

        number = new QSpinBox(AddWindow);
        number->setObjectName(QStringLiteral("number"));
        number->setMaximum(9999);

        horizontalLayout->addWidget(number);

        textDate = new QLabel(AddWindow);
        textDate->setObjectName(QStringLiteral("textDate"));

        horizontalLayout->addWidget(textDate);

        date = new QDateEdit(AddWindow);
        date->setObjectName(QStringLiteral("date"));
        date->setCalendarPopup(true);

        horizontalLayout->addWidget(date);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        stock = new QComboBox(AddWindow);
        stock->setObjectName(QStringLiteral("stock"));

        gridLayout->addWidget(stock, 0, 2, 1, 1);

        textStock = new QLabel(AddWindow);
        textStock->setObjectName(QStringLiteral("textStock"));

        gridLayout->addWidget(textStock, 0, 0, 1, 1);

        textNomenclature = new QLabel(AddWindow);
        textNomenclature->setObjectName(QStringLiteral("textNomenclature"));

        gridLayout->addWidget(textNomenclature, 1, 0, 1, 1);

        nomenclature = new QComboBox(AddWindow);
        nomenclature->setObjectName(QStringLiteral("nomenclature"));

        gridLayout->addWidget(nomenclature, 1, 2, 1, 1);

        textNumberSale = new QLabel(AddWindow);
        textNumberSale->setObjectName(QStringLiteral("textNumberSale"));

        gridLayout->addWidget(textNumberSale, 2, 0, 1, 1);

        numberSale = new QComboBox(AddWindow);
        numberSale->setObjectName(QStringLiteral("numberSale"));

        gridLayout->addWidget(numberSale, 2, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        textQuantity = new QLabel(AddWindow);
        textQuantity->setObjectName(QStringLiteral("textQuantity"));

        horizontalLayout_3->addWidget(textQuantity);

        quantity = new QSpinBox(AddWindow);
        quantity->setObjectName(QStringLiteral("quantity"));
        quantity->setMaximum(9999);

        horizontalLayout_3->addWidget(quantity);

        textPrice = new QLabel(AddWindow);
        textPrice->setObjectName(QStringLiteral("textPrice"));

        horizontalLayout_3->addWidget(textPrice);

        price = new QDoubleSpinBox(AddWindow);
        price->setObjectName(QStringLiteral("price"));
        price->setMaximum(1e+7);

        horizontalLayout_3->addWidget(price);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        OK = new QPushButton(AddWindow);
        OK->setObjectName(QStringLiteral("OK"));

        horizontalLayout_4->addWidget(OK);

        Cancel = new QPushButton(AddWindow);
        Cancel->setObjectName(QStringLiteral("Cancel"));

        horizontalLayout_4->addWidget(Cancel);


        verticalLayout->addLayout(horizontalLayout_4);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(AddWindow);

        QMetaObject::connectSlotsByName(AddWindow);
    } // setupUi

    void retranslateUi(QWidget *AddWindow)
    {
        AddWindow->setWindowTitle(QApplication::translate("AddWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", Q_NULLPTR));
        textNumber->setText(QApplication::translate("AddWindow", "\320\235\320\276\320\274\320\265\321\200:", Q_NULLPTR));
        textDate->setText(QApplication::translate("AddWindow", "\320\224\320\260\321\202\320\260:", Q_NULLPTR));
        textStock->setText(QApplication::translate("AddWindow", "\320\241\320\272\320\273\320\260\320\264:", Q_NULLPTR));
        textNomenclature->setText(QApplication::translate("AddWindow", "\320\235\320\276\320\274\320\265\320\275\320\272\320\273\320\260\321\202\321\203\321\200\320\260:", Q_NULLPTR));
        textNumberSale->setText(QApplication::translate("AddWindow", "\320\235\320\276\320\274\320\265\321\200 \320\264\320\276\320\272\321\203\320\274\320\265\320\275\321\202\320\260 \320\277\321\200\320\276\320\264\320\260\320\266\320\270:", Q_NULLPTR));
        textQuantity->setText(QApplication::translate("AddWindow", "\320\232\320\276\320\273-\320\262\320\276:", Q_NULLPTR));
        textPrice->setText(QApplication::translate("AddWindow", "\320\246\320\265\320\275\320\260:", Q_NULLPTR));
        OK->setText(QApplication::translate("AddWindow", "OK", Q_NULLPTR));
        Cancel->setText(QApplication::translate("AddWindow", "\320\236\321\202\320\274\320\265\320\275\320\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddWindow: public Ui_AddWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDWINDOW_H
