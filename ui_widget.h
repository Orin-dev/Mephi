/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QListWidget *listWidget;
    QLineEdit *lineEdit_7;
    QPushButton *pushButton_19;
    QPushButton *pushButton_20;
    QPushButton *pushButton_21;
    QLabel *label_2;
    QGraphicsView *graphicsView;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_10;
    QPushButton *pushButton_12;
    QLineEdit *lineEdit_9;
    QLabel *label_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_4;
    QLabel *label;
    QLineEdit *lineEdit_8;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_8;
    QLineEdit *lineEdit_2;
    QWidget *tab_2;
    QPushButton *HSV_H;
    QPushButton *pushButton_9;
    QPushButton *pushButton_5;
    QLineEdit *lineEdit;
    QPushButton *pushButton_7;
    QPushButton *RGB_G;
    QPushButton *HSV_S;
    QPushButton *pushButton_8;
    QPushButton *RGB_B;
    QPushButton *pushButton_6;
    QPushButton *RGB_R;
    QPushButton *HSV_V;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(1000, 773);
        Widget->setMinimumSize(QSize(1000, 598));
        Widget->setMaximumSize(QSize(1000, 873));
        verticalLayout_3 = new QVBoxLayout(Widget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMaximumSize(QSize(150, 30));

        verticalLayout->addWidget(pushButton);

        listWidget = new QListWidget(Widget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setMaximumSize(QSize(150, 576));

        verticalLayout->addWidget(listWidget);

        lineEdit_7 = new QLineEdit(Widget);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));

        verticalLayout->addWidget(lineEdit_7);

        pushButton_19 = new QPushButton(Widget);
        pushButton_19->setObjectName(QStringLiteral("pushButton_19"));

        verticalLayout->addWidget(pushButton_19);

        pushButton_20 = new QPushButton(Widget);
        pushButton_20->setObjectName(QStringLiteral("pushButton_20"));

        verticalLayout->addWidget(pushButton_20);

        pushButton_21 = new QPushButton(Widget);
        pushButton_21->setObjectName(QStringLiteral("pushButton_21"));

        verticalLayout->addWidget(pushButton_21);

        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout);

        graphicsView = new QGraphicsView(Widget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setMinimumSize(QSize(720, 576));
        graphicsView->setMaximumSize(QSize(720, 576));
        graphicsView->setLayoutDirection(Qt::LeftToRight);
        graphicsView->setSceneRect(QRectF(0, 0, 0, 0));
        graphicsView->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(graphicsView);


        horizontalLayout_2->addLayout(horizontalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        tabWidget = new QTabWidget(Widget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        pushButton_4 = new QPushButton(tab);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(0, 30, 117, 23));
        pushButton_3 = new QPushButton(tab);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(0, 1, 117, 23));
        pushButton_10 = new QPushButton(tab);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(0, 60, 117, 23));
        pushButton_12 = new QPushButton(tab);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(0, 89, 117, 23));
        lineEdit_9 = new QLineEdit(tab);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(0, 330, 117, 20));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 253, 117, 13));
        lineEdit_5 = new QLineEdit(tab);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(0, 272, 117, 20));
        lineEdit_4 = new QLineEdit(tab);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(0, 227, 117, 20));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 144, 117, 13));
        lineEdit_8 = new QLineEdit(tab);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(0, 182, 117, 20));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 208, 117, 13));
        label_7 = new QLabel(tab);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(0, 125, 117, 13));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(0, 163, 117, 13));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(0, 298, 117, 26));
        label_8 = new QLabel(tab);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(0, 360, 111, 31));
        lineEdit_2 = new QLineEdit(tab);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(0, 400, 113, 20));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        HSV_H = new QPushButton(tab_2);
        HSV_H->setObjectName(QStringLiteral("HSV_H"));
        HSV_H->setGeometry(QRect(20, 316, 75, 23));
        pushButton_9 = new QPushButton(tab_2);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(20, 142, 75, 23));
        pushButton_5 = new QPushButton(tab_2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(20, 0, 75, 23));
        lineEdit = new QLineEdit(tab_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(20, 58, 75, 20));
        pushButton_7 = new QPushButton(tab_2);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(20, 113, 75, 23));
        RGB_G = new QPushButton(tab_2);
        RGB_G->setObjectName(QStringLiteral("RGB_G"));
        RGB_G->setGeometry(QRect(20, 200, 75, 23));
        HSV_S = new QPushButton(tab_2);
        HSV_S->setObjectName(QStringLiteral("HSV_S"));
        HSV_S->setGeometry(QRect(20, 287, 75, 23));
        pushButton_8 = new QPushButton(tab_2);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(20, 84, 75, 23));
        RGB_B = new QPushButton(tab_2);
        RGB_B->setObjectName(QStringLiteral("RGB_B"));
        RGB_B->setGeometry(QRect(20, 171, 75, 23));
        pushButton_6 = new QPushButton(tab_2);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(20, 29, 75, 23));
        RGB_R = new QPushButton(tab_2);
        RGB_R->setObjectName(QStringLiteral("RGB_R"));
        RGB_R->setGeometry(QRect(20, 229, 75, 23));
        HSV_V = new QPushButton(tab_2);
        HSV_V->setObjectName(QStringLiteral("HSV_V"));
        HSV_V->setGeometry(QRect(20, 258, 75, 23));
        tabWidget->addTab(tab_2, QString());

        verticalLayout_2->addWidget(tabWidget);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(Widget);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Form", 0));
        pushButton->setText(QApplication::translate("Widget", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", 0));
        pushButton_19->setText(QApplication::translate("Widget", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \320\276\320\261\321\212\320\265\320\272\321\202\321\213", 0));
        pushButton_20->setText(QApplication::translate("Widget", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \320\276\321\200\320\270\320\263\320\270\320\275\320\260\320\273", 0));
        pushButton_21->setText(QApplication::translate("Widget", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \320\261\320\270\320\275\320\260\321\200.", 0));
        label_2->setText(QString());
        pushButton_4->setText(QApplication::translate("Widget", "-", 0));
        pushButton_3->setText(QApplication::translate("Widget", "+", 0));
        pushButton_10->setText(QApplication::translate("Widget", "\320\241\320\276\321\205\321\200\320\236\320\261\320\273", 0));
        pushButton_12->setText(QApplication::translate("Widget", "\320\220\320\262\321\202\320\276\320\274\320\260\321\202", 0));
        lineEdit_9->setText(QApplication::translate("Widget", "10000", 0));
        label_4->setText(QApplication::translate("Widget", "\320\262\320\262\320\276\320\264 \320\276\320\272\320\275\320\260 \320\277\320\276\320\270\321\201\320\272\320\260", 0));
        lineEdit_5->setText(QApplication::translate("Widget", "10", 0));
        lineEdit_4->setText(QApplication::translate("Widget", "40", 0));
        label->setText(QString());
        lineEdit_8->setText(QApplication::translate("Widget", "0", 0));
        label_3->setText(QApplication::translate("Widget", "\320\262\320\262\320\276\320\264 \320\275\320\270\320\266\320\275\320\265\320\263\320\276 \320\277\320\276\321\200\320\276\320\263\320\260", 0));
        label_7->setText(QApplication::translate("Widget", "\320\237\320\276\321\200\320\276\320\263 \320\277\320\276 \320\260\320\273\320\263\320\276\321\200\320\270\321\202\320\274\321\203:", 0));
        label_5->setText(QApplication::translate("Widget", " \320\247\320\270\321\201\320\273\320\276 \320\276\320\261\321\212\320\265\320\272\321\202\320\276\320\262:", 0));
        label_6->setText(QApplication::translate("Widget", "\320\234\320\270\320\275\320\270\320\274\320\260\320\273\321\214\320\275\320\260\321\217 \320\277\320\273\320\276\321\211\320\260\320\264\321\214\n"
" \320\276\320\261\321\212\320\265\320\272\321\202\320\260\320\262 \320\277\320\270\320\272\321\201\320\265\320\273\321\217\321\205", 0));
        label_8->setText(QApplication::translate("Widget", "\320\234\320\260\320\272\321\201\320\270\320\274\320\260\320\273\321\214\320\275\321\213\320\271 \321\200\320\260\320\267\320\274\320\265\321\200\n"
" \320\275\320\265\321\201\320\273\320\270\320\277\321\210\320\270\321\205\321\201\321\217", 0));
        lineEdit_2->setText(QApplication::translate("Widget", "40000", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Widget", "\320\236\321\201\320\275\320\276\320\262\320\275\321\213\320\265", 0));
        HSV_H->setText(QApplication::translate("Widget", "HSV-H", 0));
        pushButton_9->setText(QApplication::translate("Widget", "\320\230\320\267\320\262\320\273\320\265\321\207\320\265\320\275\320\270\320\265", 0));
        pushButton_5->setText(QApplication::translate("Widget", "HSV", 0));
        lineEdit->setText(QApplication::translate("Widget", "40", 0));
        pushButton_7->setText(QApplication::translate("Widget", "\320\255\321\200\320\276\320\267\320\270\321\217", 0));
        RGB_G->setText(QApplication::translate("Widget", "RGB-G", 0));
        HSV_S->setText(QApplication::translate("Widget", "HSV-S", 0));
        pushButton_8->setText(QApplication::translate("Widget", "\320\224\320\270\320\273\320\260\321\202\320\260\321\206\320\270\321\217", 0));
        RGB_B->setText(QApplication::translate("Widget", "RGB-B", 0));
        pushButton_6->setText(QApplication::translate("Widget", "\320\221\320\270\320\275", 0));
        RGB_R->setText(QApplication::translate("Widget", "RGB-R", 0));
        HSV_V->setText(QApplication::translate("Widget", "HSV-V", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Widget", "\320\224\320\276\320\277.", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
