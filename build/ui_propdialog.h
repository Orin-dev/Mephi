/********************************************************************************
** Form generated from reading UI file 'propdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPDIALOG_H
#define UI_PROPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PropDialog
{
public:
    QDialogButtonBox *buttonBox;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QListWidget *listWidget;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_5;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_5;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QGraphicsView *graphicsView;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *lineEdit_3;
    QLabel *label_3;
    QPushButton *pushButton_3;

    void setupUi(QDialog *PropDialog)
    {
        if (PropDialog->objectName().isEmpty())
            PropDialog->setObjectName(QStringLiteral("PropDialog"));
        PropDialog->resize(530, 180);
        buttonBox = new QDialogButtonBox(PropDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(430, 10, 81, 31));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);
        scrollArea = new QScrollArea(PropDialog);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(20, 30, 51, 141));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 49, 139));
        listWidget = new QListWidget(scrollAreaWidgetContents);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(0, 0, 51, 141));
        scrollArea->setWidget(scrollAreaWidgetContents);
        lineEdit = new QLineEdit(PropDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(400, 90, 113, 20));
        lineEdit_2 = new QLineEdit(PropDialog);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(400, 110, 113, 20));
        lineEdit_5 = new QLineEdit(PropDialog);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(400, 130, 113, 20));
        label = new QLabel(PropDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(340, 90, 47, 13));
        label_2 = new QLabel(PropDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(340, 110, 47, 13));
        label_5 = new QLabel(PropDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(340, 130, 47, 13));
        pushButton = new QPushButton(PropDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(430, 50, 81, 23));
        pushButton_2 = new QPushButton(PropDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(350, 50, 75, 23));
        graphicsView = new QGraphicsView(PropDialog);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(100, 30, 201, 141));
        label_7 = new QLabel(PropDialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(40, 10, 47, 13));
        label_8 = new QLabel(PropDialog);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(220, 0, 81, 21));
        lineEdit_3 = new QLineEdit(PropDialog);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(400, 150, 113, 20));
        label_3 = new QLabel(PropDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(330, 150, 61, 20));
        pushButton_3 = new QPushButton(PropDialog);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(350, 10, 75, 21));

        retranslateUi(PropDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PropDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PropDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(PropDialog);
    } // setupUi

    void retranslateUi(QDialog *PropDialog)
    {
        PropDialog->setWindowTitle(QApplication::translate("PropDialog", "\320\235\320\260\320\271\320\264\320\265\320\275\320\275\321\213\320\265 \320\276\320\261\321\212\320\265\320\272\321\202\321\213", 0));
        label->setText(QApplication::translate("PropDialog", "XC", 0));
        label_2->setText(QApplication::translate("PropDialog", "YC", 0));
        label_5->setText(QApplication::translate("PropDialog", "S", 0));
        pushButton->setText(QApplication::translate("PropDialog", "\320\232\320\276\320\275\321\202\321\203\321\200", 0));
        pushButton_2->setText(QApplication::translate("PropDialog", "\320\230\320\267\320\262\320\273\320\265\321\207\321\214 \320\262\321\201\320\265", 0));
        label_7->setText(QApplication::translate("PropDialog", "\342\204\226", 0));
        label_8->setText(QApplication::translate("PropDialog", "\320\236\320\261\321\212\320\265\320\272\321\202", 0));
        label_3->setText(QApplication::translate("PropDialog", "ShapeCoeff", 0));
        pushButton_3->setText(QApplication::translate("PropDialog", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", 0));
    } // retranslateUi

};

namespace Ui {
    class PropDialog: public Ui_PropDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPDIALOG_H
