/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_2;
    QAction *action_3;
    QAction *action_4;
    QWidget *centralWidget;
    QLabel *label_3;
    QLabel *label_7;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *tableWidget_2;
    QPushButton *pushButton;
    QListWidget *listWidget;
    QPushButton *pushButton_2;
    QGraphicsView *graphicsView;
    QLabel *label;
    QTableWidget *tableWidget;
    QLabel *label_2;
    QCustomPlot *Myelogram;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1474, 806);
        action = new QAction(MainWindow);
        action->setObjectName(QStringLiteral("action"));
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QStringLiteral("action_2"));
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QStringLiteral("action_3"));
        action_4 = new QAction(MainWindow);
        action_4->setObjectName(QStringLiteral("action_4"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(990, 20, 101, 16));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(270, 20, 71, 16));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(120, 320, 261, 201));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayoutWidget_2 = new QWidget(centralWidget);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(120, 530, 261, 111));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        tableWidget_2 = new QTableWidget(centralWidget);
        if (tableWidget_2->columnCount() < 7)
            tableWidget_2->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        if (tableWidget_2->rowCount() < 3)
            tableWidget_2->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(2, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_2->setItem(0, 0, __qtablewidgetitem10);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(710, 60, 721, 241));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 500, 101, 41));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 340, 101, 151));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 540, 101, 23));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(430, 450, 211, 141));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(470, 410, 131, 20));
        tableWidget = new QTableWidget(centralWidget);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem13);
        if (tableWidget->rowCount() < 1)
            tableWidget->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem14);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(860, 390, 321, 241));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(950, 360, 131, 16));
        Myelogram = new QCustomPlot(centralWidget);
        Myelogram->setObjectName(QStringLiteral("Myelogram"));
        Myelogram->setGeometry(QRect(30, 60, 641, 251));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1474, 21));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menu->addAction(action);
        menu_2->addAction(action_2);
        menu_2->addAction(action_4);
        menu_3->addAction(action_3);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\242\320\265\320\273\320\265\320\233\320\265\320\271\320\272\320\265\320\274\320\270\321\217", 0));
        action->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", 0));
        action_2->setText(QApplication::translate("MainWindow", "\320\220\320\275\320\260\320\273\320\270\320\267 \321\217\320\264\320\265\321\200", 0));
        action_3->setText(QApplication::translate("MainWindow", "\320\241\320\265\321\202\320\265\320\262\321\213\320\265 \320\275\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", 0));
        action_4->setText(QApplication::translate("MainWindow", "\320\232\320\273\320\260\321\201\321\201\320\270\321\204\320\270\320\272\320\260\321\202\320\276\321\200", 0));
        label_3->setText(QApplication::translate("MainWindow", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\277\320\260\321\206\320\270\320\265\320\275\321\202\320\276\320\262", 0));
        label_7->setText(QApplication::translate("MainWindow", "\320\234\320\270\320\265\320\273\320\276\320\263\321\200\320\260\320\274\320\274\320\260", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "ID", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\320\244\320\230\320\236", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "\320\222\320\276\320\267\321\200\320\260\321\201\321\202", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "\320\230\321\201\321\202\320\276\321\200\320\270\321\217 \342\204\226", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_2->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_2->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\264\320\265\320\273\320\265\320\275\320\270\320\265", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_2->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "\320\224\320\270\320\260\320\263\320\275\320\276\320\267", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_2->verticalHeaderItem(0);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "1", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_2->verticalHeaderItem(1);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "2", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_2->verticalHeaderItem(2);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "3", 0));

        const bool __sortingEnabled = tableWidget_2->isSortingEnabled();
        tableWidget_2->setSortingEnabled(false);
        tableWidget_2->setSortingEnabled(__sortingEnabled);

        pushButton->setText(QApplication::translate("MainWindow", "\320\262\321\213\320\261\321\200\320\260\321\202\321\214\n"
" \320\270\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\321\217", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\277\321\200\320\260\320\262\321\202\321\214", 0));
        label->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200 \320\270\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\321\217", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "ID", 0));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "\320\242\320\270\320\277", 0));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260", 0));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "1", 0));
        label_2->setText(QApplication::translate("MainWindow", "\320\230\321\201\321\201\320\273\320\265\320\264\320\276\320\262\320\260\320\275\320\270\321\217 \320\277\320\260\321\206\320\270\320\265\320\275\321\202\320\260", 0));
        menu->setTitle(QApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", 0));
        menu_2->setTitle(QApplication::translate("MainWindow", "\320\230\320\275\321\201\321\202\321\200\321\203\320\274\320\265\320\275\321\202\321\213", 0));
        menu_3->setTitle(QApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
