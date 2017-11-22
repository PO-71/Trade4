/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_CheckUpdate;
    QAction *action_About;
    QAction *action_nomenclature;
    QAction *action_stock;
    QAction *action_remnants;
    QAction *action_purchase;
    QAction *action_sale;
    QAction *action_return_sale;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *button_add;
    QPushButton *button_delete;
    QLabel *textFilterStock;
    QComboBox *filterStock;
    QPushButton *resetFilter;
    QSpacerItem *horizontalSpacer;
    QTableView *tableView;
    QMenuBar *menuBar;
    QMenu *menu_Database;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(799, 485);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/trade.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        action_CheckUpdate = new QAction(MainWindow);
        action_CheckUpdate->setObjectName(QStringLiteral("action_CheckUpdate"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/update.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_CheckUpdate->setIcon(icon1);
        action_About = new QAction(MainWindow);
        action_About->setObjectName(QStringLiteral("action_About"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/info.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_About->setIcon(icon2);
        action_nomenclature = new QAction(MainWindow);
        action_nomenclature->setObjectName(QStringLiteral("action_nomenclature"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/directory.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_nomenclature->setIcon(icon3);
        action_stock = new QAction(MainWindow);
        action_stock->setObjectName(QStringLiteral("action_stock"));
        action_stock->setIcon(icon3);
        action_remnants = new QAction(MainWindow);
        action_remnants->setObjectName(QStringLiteral("action_remnants"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icons/report.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_remnants->setIcon(icon4);
        action_purchase = new QAction(MainWindow);
        action_purchase->setObjectName(QStringLiteral("action_purchase"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icons/doc.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_purchase->setIcon(icon5);
        action_sale = new QAction(MainWindow);
        action_sale->setObjectName(QStringLiteral("action_sale"));
        action_sale->setIcon(icon5);
        action_return_sale = new QAction(MainWindow);
        action_return_sale->setObjectName(QStringLiteral("action_return_sale"));
        action_return_sale->setIcon(icon5);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        button_add = new QPushButton(centralWidget);
        button_add->setObjectName(QStringLiteral("button_add"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/icons/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        button_add->setIcon(icon6);

        horizontalLayout->addWidget(button_add);

        button_delete = new QPushButton(centralWidget);
        button_delete->setObjectName(QStringLiteral("button_delete"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/icons/del.png"), QSize(), QIcon::Normal, QIcon::Off);
        button_delete->setIcon(icon7);

        horizontalLayout->addWidget(button_delete);

        textFilterStock = new QLabel(centralWidget);
        textFilterStock->setObjectName(QStringLiteral("textFilterStock"));

        horizontalLayout->addWidget(textFilterStock);

        filterStock = new QComboBox(centralWidget);
        filterStock->setObjectName(QStringLiteral("filterStock"));

        horizontalLayout->addWidget(filterStock);

        resetFilter = new QPushButton(centralWidget);
        resetFilter->setObjectName(QStringLiteral("resetFilter"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/icons/reset.png"), QSize(), QIcon::Normal, QIcon::Off);
        resetFilter->setIcon(icon8);

        horizontalLayout->addWidget(resetFilter);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout->addWidget(tableView);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 799, 21));
        menu_Database = new QMenu(menuBar);
        menu_Database->setObjectName(QStringLiteral("menu_Database"));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_Database->menuAction());
        menuBar->addAction(menu->menuAction());
        menu_Database->addAction(action_nomenclature);
        menu_Database->addAction(action_stock);
        menu_Database->addAction(action_purchase);
        menu_Database->addAction(action_sale);
        menu_Database->addAction(action_return_sale);
        menu_Database->addAction(action_remnants);
        menu->addAction(action_CheckUpdate);
        menu->addAction(action_About);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Trade", Q_NULLPTR));
        action_CheckUpdate->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\276\320\262\320\265\321\200\320\270\321\202\321\214 \320\276\320\261\320\275\320\276\320\262\320\273\320\265\320\275\320\270\321\217", Q_NULLPTR));
        action_About->setText(QApplication::translate("MainWindow", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", Q_NULLPTR));
        action_nomenclature->setText(QApplication::translate("MainWindow", "\320\235\320\276\320\274\320\265\320\275\320\272\320\273\320\260\321\202\321\203\321\200\320\260", Q_NULLPTR));
        action_stock->setText(QApplication::translate("MainWindow", "\320\241\320\272\320\273\320\260\320\264\321\213", Q_NULLPTR));
        action_remnants->setText(QApplication::translate("MainWindow", "\320\236\321\201\321\202\320\260\321\202\320\272\320\270 \320\275\320\260 \321\201\320\272\320\273\320\260\320\264\320\260\321\205", Q_NULLPTR));
        action_purchase->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\272\321\203\320\277\320\272\320\270", Q_NULLPTR));
        action_sale->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\276\320\264\320\260\320\266\320\270", Q_NULLPTR));
        action_return_sale->setText(QApplication::translate("MainWindow", "\320\222\320\276\320\267\320\262\321\200\320\260\321\202\321\213 \320\276\321\202 \320\277\320\276\320\272\321\203\320\277\320\260\321\202\320\265\320\273\320\265\320\271", Q_NULLPTR));
        button_add->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", Q_NULLPTR));
        button_delete->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", Q_NULLPTR));
        textFilterStock->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\261\320\276\321\200 \320\277\320\276 \321\201\320\272\320\273\320\260\320\264\321\203:", Q_NULLPTR));
        resetFilter->setText(QString());
        menu_Database->setTitle(QApplication::translate("MainWindow", "\320\221\320\260\320\267\320\260 \320\264\320\260\320\275\320\275\321\213\321\205", Q_NULLPTR));
        menu->setTitle(QApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
