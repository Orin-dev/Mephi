/********************************************************************************
** Form generated from reading UI file 'classifier.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASSIFIER_H
#define UI_CLASSIFIER_H

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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_Classifier
{
public:
    QDialogButtonBox *buttonBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QGraphicsView *graphicsView;
    QLineEdit *lineEdit;
    QLabel *label;
    QTreeWidget *treeWidget;
    QPushButton *pushButton_3;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QTableWidget *tableWidget;
    QPushButton *pushButton_4;
    QLabel *label_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;

    void setupUi(QDialog *Classifier)
    {
        if (Classifier->objectName().isEmpty())
            Classifier->setObjectName(QStringLiteral("Classifier"));
        Classifier->resize(912, 483);
        buttonBox = new QDialogButtonBox(Classifier);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(770, 10, 81, 91));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        pushButton = new QPushButton(Classifier);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(770, 70, 81, 23));
        pushButton_2 = new QPushButton(Classifier);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(770, 100, 81, 23));
        graphicsView = new QGraphicsView(Classifier);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(510, 10, 256, 211));
        lineEdit = new QLineEdit(Classifier);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(350, 250, 113, 20));
        label = new QLabel(Classifier);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(370, 230, 81, 16));
        treeWidget = new QTreeWidget(Classifier);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setGeometry(QRect(10, 10, 261, 211));
        pushButton_3 = new QPushButton(Classifier);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(770, 130, 81, 23));
        label_2 = new QLabel(Classifier);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(140, 230, 81, 16));
        lineEdit_2 = new QLineEdit(Classifier);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(100, 250, 61, 20));
        tableWidget = new QTableWidget(Classifier);
        if (tableWidget->columnCount() < 7)
            tableWidget->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QFont font;
        font.setPointSize(8);
        font.setUnderline(false);
        font.setKerning(true);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setText(QString::fromUtf8("\320\246\320\270\321\202\320\276\320\277\320\273\320\260\320\267\320\274\320\260/\320\237\320\273\320\276\321\211\320\260\320\264\321\214"));
        __qtablewidgetitem1->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem1->setFont(font);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        if (tableWidget->rowCount() < 9)
            tableWidget->setRowCount(9);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(7, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(8, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setItem(0, 2, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget->setItem(0, 3, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget->setItem(0, 4, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget->setItem(0, 5, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget->setItem(0, 6, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget->setItem(1, 0, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget->setItem(1, 1, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget->setItem(1, 2, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget->setItem(1, 3, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget->setItem(1, 4, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget->setItem(1, 5, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidget->setItem(1, 6, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableWidget->setItem(2, 0, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableWidget->setItem(2, 1, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableWidget->setItem(2, 2, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableWidget->setItem(2, 3, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableWidget->setItem(2, 4, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tableWidget->setItem(2, 5, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        tableWidget->setItem(2, 6, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        tableWidget->setItem(3, 0, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        tableWidget->setItem(3, 1, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        tableWidget->setItem(3, 2, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        tableWidget->setItem(3, 3, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        tableWidget->setItem(3, 4, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        tableWidget->setItem(3, 5, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        tableWidget->setItem(3, 6, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        tableWidget->setItem(4, 0, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        tableWidget->setItem(4, 1, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        tableWidget->setItem(4, 2, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        tableWidget->setItem(4, 3, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        tableWidget->setItem(4, 4, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        tableWidget->setItem(4, 5, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        tableWidget->setItem(4, 6, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        tableWidget->setItem(5, 0, __qtablewidgetitem51);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        tableWidget->setItem(5, 1, __qtablewidgetitem52);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        tableWidget->setItem(5, 2, __qtablewidgetitem53);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        tableWidget->setItem(5, 3, __qtablewidgetitem54);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        tableWidget->setItem(5, 4, __qtablewidgetitem55);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        tableWidget->setItem(5, 5, __qtablewidgetitem56);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        tableWidget->setItem(5, 6, __qtablewidgetitem57);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        tableWidget->setItem(6, 0, __qtablewidgetitem58);
        QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
        tableWidget->setItem(6, 1, __qtablewidgetitem59);
        QTableWidgetItem *__qtablewidgetitem60 = new QTableWidgetItem();
        tableWidget->setItem(6, 2, __qtablewidgetitem60);
        QTableWidgetItem *__qtablewidgetitem61 = new QTableWidgetItem();
        tableWidget->setItem(6, 3, __qtablewidgetitem61);
        QTableWidgetItem *__qtablewidgetitem62 = new QTableWidgetItem();
        tableWidget->setItem(6, 4, __qtablewidgetitem62);
        QTableWidgetItem *__qtablewidgetitem63 = new QTableWidgetItem();
        tableWidget->setItem(6, 5, __qtablewidgetitem63);
        QTableWidgetItem *__qtablewidgetitem64 = new QTableWidgetItem();
        tableWidget->setItem(6, 6, __qtablewidgetitem64);
        QTableWidgetItem *__qtablewidgetitem65 = new QTableWidgetItem();
        tableWidget->setItem(7, 0, __qtablewidgetitem65);
        QTableWidgetItem *__qtablewidgetitem66 = new QTableWidgetItem();
        tableWidget->setItem(7, 1, __qtablewidgetitem66);
        QTableWidgetItem *__qtablewidgetitem67 = new QTableWidgetItem();
        tableWidget->setItem(7, 2, __qtablewidgetitem67);
        QTableWidgetItem *__qtablewidgetitem68 = new QTableWidgetItem();
        tableWidget->setItem(7, 3, __qtablewidgetitem68);
        QTableWidgetItem *__qtablewidgetitem69 = new QTableWidgetItem();
        tableWidget->setItem(7, 4, __qtablewidgetitem69);
        QTableWidgetItem *__qtablewidgetitem70 = new QTableWidgetItem();
        tableWidget->setItem(7, 5, __qtablewidgetitem70);
        QTableWidgetItem *__qtablewidgetitem71 = new QTableWidgetItem();
        tableWidget->setItem(7, 6, __qtablewidgetitem71);
        QTableWidgetItem *__qtablewidgetitem72 = new QTableWidgetItem();
        tableWidget->setItem(8, 0, __qtablewidgetitem72);
        QTableWidgetItem *__qtablewidgetitem73 = new QTableWidgetItem();
        tableWidget->setItem(8, 1, __qtablewidgetitem73);
        QTableWidgetItem *__qtablewidgetitem74 = new QTableWidgetItem();
        tableWidget->setItem(8, 2, __qtablewidgetitem74);
        QTableWidgetItem *__qtablewidgetitem75 = new QTableWidgetItem();
        tableWidget->setItem(8, 3, __qtablewidgetitem75);
        QTableWidgetItem *__qtablewidgetitem76 = new QTableWidgetItem();
        tableWidget->setItem(8, 4, __qtablewidgetitem76);
        QTableWidgetItem *__qtablewidgetitem77 = new QTableWidgetItem();
        tableWidget->setItem(8, 5, __qtablewidgetitem77);
        QTableWidgetItem *__qtablewidgetitem78 = new QTableWidgetItem();
        tableWidget->setItem(8, 6, __qtablewidgetitem78);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 320, 741, 141));
        pushButton_4 = new QPushButton(Classifier);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(760, 330, 91, 21));
        label_3 = new QLabel(Classifier);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(240, 300, 101, 16));
        pushButton_5 = new QPushButton(Classifier);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(760, 450, 91, 21));
        pushButton_6 = new QPushButton(Classifier);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(180, 250, 75, 23));

        retranslateUi(Classifier);
        QObject::connect(buttonBox, SIGNAL(accepted()), Classifier, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Classifier, SLOT(reject()));

        QMetaObject::connectSlotsByName(Classifier);
    } // setupUi

    void retranslateUi(QDialog *Classifier)
    {
        Classifier->setWindowTitle(QApplication::translate("Classifier", "\320\234\320\276\320\264\321\203\320\273\321\214 \320\272\320\273\320\260\321\201\321\201\320\270\321\204\320\270\320\272\320\260\321\206\320\270\320\270", 0));
        pushButton->setText(QApplication::translate("Classifier", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", 0));
        pushButton_2->setText(QApplication::translate("Classifier", "\320\232\320\273\320\260\321\201\321\201\320\270\321\204.", 0));
        label->setText(QApplication::translate("Classifier", "\321\202\320\270\320\277 \320\273\320\265\320\271\320\272\320\276\321\206\320\270\321\202\320\260", 0));
        pushButton_3->setText(QApplication::translate("Classifier", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214", 0));
        label_2->setText(QApplication::translate("Classifier", "\320\247\320\270\321\201\320\273\320\276 \320\272\320\273\320\260\321\201\321\201\320\276\320\262", 0));
        lineEdit_2->setText(QApplication::translate("Classifier", "4", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Classifier", "\320\237\320\273\320\276\321\211\320\260\320\264\321\214", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem1->setText(QApplication::translate("Classifier", "\320\236\320\272\321\200\321\203\320\263\320\273\320\276\321\201\321\202\321\214", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem2->setText(QApplication::translate("Classifier", "\320\232\320\276\321\215\321\204.\320\267\320\260\320\277\320\276\320\273\320\275\320\265\320\275\320\270\321\217", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem3->setText(QApplication::translate("Classifier", "\320\236\321\202\321\202\320\265\320\275\320\276\320\272 \321\206\320\270\321\202\320\276\320\277\320\273\320\260\320\267\320\274\321\213", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem4->setText(QApplication::translate("Classifier", "\320\257\321\200\320\272\320\276\321\201\321\202\321\214 \321\217\320\264\321\200\320\260", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem5->setText(QApplication::translate("Classifier", "\320\234\320\276\320\274\320\265\320\275\321\202 \320\272\320\276\320\275\321\202\321\203\321\200\320\260", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("Classifier", "1", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem7->setText(QApplication::translate("Classifier", "2", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem8->setText(QApplication::translate("Classifier", "3", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem9->setText(QApplication::translate("Classifier", "4", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem10->setText(QApplication::translate("Classifier", "5", 0));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem11->setText(QApplication::translate("Classifier", "6", 0));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem12->setText(QApplication::translate("Classifier", "8", 0));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem13->setText(QApplication::translate("Classifier", "9", 0));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->verticalHeaderItem(8);
        ___qtablewidgetitem14->setText(QApplication::translate("Classifier", "10", 0));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->item(0, 0);
        ___qtablewidgetitem15->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->item(0, 1);
        ___qtablewidgetitem16->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->item(0, 2);
        ___qtablewidgetitem17->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->item(0, 3);
        ___qtablewidgetitem18->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->item(0, 4);
        ___qtablewidgetitem19->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->item(0, 5);
        ___qtablewidgetitem20->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget->item(0, 6);
        ___qtablewidgetitem21->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget->item(1, 0);
        ___qtablewidgetitem22->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget->item(1, 1);
        ___qtablewidgetitem23->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget->item(1, 2);
        ___qtablewidgetitem24->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget->item(1, 3);
        ___qtablewidgetitem25->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget->item(1, 4);
        ___qtablewidgetitem26->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget->item(1, 5);
        ___qtablewidgetitem27->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget->item(1, 6);
        ___qtablewidgetitem28->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget->item(2, 0);
        ___qtablewidgetitem29->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidget->item(2, 1);
        ___qtablewidgetitem30->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidget->item(2, 2);
        ___qtablewidgetitem31->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem32 = tableWidget->item(2, 3);
        ___qtablewidgetitem32->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem33 = tableWidget->item(2, 4);
        ___qtablewidgetitem33->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem34 = tableWidget->item(2, 5);
        ___qtablewidgetitem34->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem35 = tableWidget->item(2, 6);
        ___qtablewidgetitem35->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem36 = tableWidget->item(3, 0);
        ___qtablewidgetitem36->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem37 = tableWidget->item(3, 1);
        ___qtablewidgetitem37->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem38 = tableWidget->item(3, 2);
        ___qtablewidgetitem38->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem39 = tableWidget->item(3, 3);
        ___qtablewidgetitem39->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem40 = tableWidget->item(3, 4);
        ___qtablewidgetitem40->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem41 = tableWidget->item(3, 5);
        ___qtablewidgetitem41->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem42 = tableWidget->item(3, 6);
        ___qtablewidgetitem42->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem43 = tableWidget->item(4, 0);
        ___qtablewidgetitem43->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem44 = tableWidget->item(4, 1);
        ___qtablewidgetitem44->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem45 = tableWidget->item(4, 2);
        ___qtablewidgetitem45->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem46 = tableWidget->item(4, 3);
        ___qtablewidgetitem46->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem47 = tableWidget->item(4, 4);
        ___qtablewidgetitem47->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem48 = tableWidget->item(4, 5);
        ___qtablewidgetitem48->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem49 = tableWidget->item(4, 6);
        ___qtablewidgetitem49->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem50 = tableWidget->item(5, 0);
        ___qtablewidgetitem50->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem51 = tableWidget->item(5, 1);
        ___qtablewidgetitem51->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem52 = tableWidget->item(5, 2);
        ___qtablewidgetitem52->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem53 = tableWidget->item(5, 3);
        ___qtablewidgetitem53->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem54 = tableWidget->item(5, 4);
        ___qtablewidgetitem54->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem55 = tableWidget->item(5, 5);
        ___qtablewidgetitem55->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem56 = tableWidget->item(5, 6);
        ___qtablewidgetitem56->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem57 = tableWidget->item(6, 0);
        ___qtablewidgetitem57->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem58 = tableWidget->item(6, 1);
        ___qtablewidgetitem58->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem59 = tableWidget->item(6, 2);
        ___qtablewidgetitem59->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem60 = tableWidget->item(6, 3);
        ___qtablewidgetitem60->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem61 = tableWidget->item(6, 4);
        ___qtablewidgetitem61->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem62 = tableWidget->item(6, 5);
        ___qtablewidgetitem62->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem63 = tableWidget->item(6, 6);
        ___qtablewidgetitem63->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem64 = tableWidget->item(7, 0);
        ___qtablewidgetitem64->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem65 = tableWidget->item(7, 1);
        ___qtablewidgetitem65->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem66 = tableWidget->item(7, 2);
        ___qtablewidgetitem66->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem67 = tableWidget->item(7, 3);
        ___qtablewidgetitem67->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem68 = tableWidget->item(7, 4);
        ___qtablewidgetitem68->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem69 = tableWidget->item(7, 5);
        ___qtablewidgetitem69->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem70 = tableWidget->item(7, 6);
        ___qtablewidgetitem70->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem71 = tableWidget->item(8, 0);
        ___qtablewidgetitem71->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem72 = tableWidget->item(8, 1);
        ___qtablewidgetitem72->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem73 = tableWidget->item(8, 2);
        ___qtablewidgetitem73->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem74 = tableWidget->item(8, 3);
        ___qtablewidgetitem74->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem75 = tableWidget->item(8, 4);
        ___qtablewidgetitem75->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem76 = tableWidget->item(8, 5);
        ___qtablewidgetitem76->setText(QApplication::translate("Classifier", "0", 0));
        QTableWidgetItem *___qtablewidgetitem77 = tableWidget->item(8, 6);
        ___qtablewidgetitem77->setText(QApplication::translate("Classifier", "0", 0));
        tableWidget->setSortingEnabled(__sortingEnabled);

        pushButton_4->setText(QApplication::translate("Classifier", "\320\227\320\260\320\264\320\260\321\202\321\214", 0));
        label_3->setText(QApplication::translate("Classifier", "\320\246\320\265\320\275\321\202\321\200\321\213 \320\272\320\273\320\260\321\201\321\202\320\265\321\200\320\276\320\262", 0));
        pushButton_5->setText(QApplication::translate("Classifier", "\320\241\320\263\320\265\320\275\320\265\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214", 0));
        pushButton_6->setText(QApplication::translate("Classifier", "\320\227\320\260\320\264\320\260\321\202\321\214", 0));
    } // retranslateUi

};

namespace Ui {
    class Classifier: public Ui_Classifier {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASSIFIER_H
