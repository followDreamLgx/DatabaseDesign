/********************************************************************************
** Form generated from reading UI file 'mystore.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYSTORE_H
#define UI_MYSTORE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyStore
{
public:
    QTableWidget *tableWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *AddFoodToMenuButton;
    QPushButton *ReadTurnoverButton;
    QPushButton *ReturnButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *Delete_1;
    QPushButton *Delete_2;
    QPushButton *Delete_3;
    QPushButton *Delete_4;
    QPushButton *Delete_5;
    QPushButton *Delete_6;
    QPushButton *Delete_7;
    QPushButton *Delete_8;
    QWidget *widget1;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QLineEdit *StoreNameEdit;
    QPushButton *pushButton_2;
    QLineEdit *IntroductionEdit;
    QPushButton *pushButton_3;
    QLineEdit *HighOpitionEdit;

    void setupUi(QWidget *MyStore)
    {
        if (MyStore->objectName().isEmpty())
            MyStore->setObjectName(QStringLiteral("MyStore"));
        MyStore->resize(800, 600);
        tableWidget = new QTableWidget(MyStore);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (tableWidget->rowCount() < 8)
            tableWidget->setRowCount(8);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(7, __qtablewidgetitem10);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(60, 120, 341, 271));
        layoutWidget = new QWidget(MyStore);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(160, 410, 239, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        AddFoodToMenuButton = new QPushButton(layoutWidget);
        AddFoodToMenuButton->setObjectName(QStringLiteral("AddFoodToMenuButton"));

        horizontalLayout->addWidget(AddFoodToMenuButton);

        ReadTurnoverButton = new QPushButton(layoutWidget);
        ReadTurnoverButton->setObjectName(QStringLiteral("ReadTurnoverButton"));

        horizontalLayout->addWidget(ReadTurnoverButton);

        ReturnButton = new QPushButton(layoutWidget);
        ReturnButton->setObjectName(QStringLiteral("ReturnButton"));

        horizontalLayout->addWidget(ReturnButton);

        widget = new QWidget(MyStore);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(410, 140, 81, 241));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Delete_1 = new QPushButton(widget);
        Delete_1->setObjectName(QStringLiteral("Delete_1"));

        verticalLayout->addWidget(Delete_1);

        Delete_2 = new QPushButton(widget);
        Delete_2->setObjectName(QStringLiteral("Delete_2"));

        verticalLayout->addWidget(Delete_2);

        Delete_3 = new QPushButton(widget);
        Delete_3->setObjectName(QStringLiteral("Delete_3"));

        verticalLayout->addWidget(Delete_3);

        Delete_4 = new QPushButton(widget);
        Delete_4->setObjectName(QStringLiteral("Delete_4"));

        verticalLayout->addWidget(Delete_4);

        Delete_5 = new QPushButton(widget);
        Delete_5->setObjectName(QStringLiteral("Delete_5"));

        verticalLayout->addWidget(Delete_5);

        Delete_6 = new QPushButton(widget);
        Delete_6->setObjectName(QStringLiteral("Delete_6"));

        verticalLayout->addWidget(Delete_6);

        Delete_7 = new QPushButton(widget);
        Delete_7->setObjectName(QStringLiteral("Delete_7"));

        verticalLayout->addWidget(Delete_7);

        Delete_8 = new QPushButton(widget);
        Delete_8->setObjectName(QStringLiteral("Delete_8"));

        verticalLayout->addWidget(Delete_8);

        widget1 = new QWidget(MyStore);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(60, 30, 341, 83));
        gridLayout = new QGridLayout(widget1);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget1);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        StoreNameEdit = new QLineEdit(widget1);
        StoreNameEdit->setObjectName(QStringLiteral("StoreNameEdit"));

        gridLayout->addWidget(StoreNameEdit, 0, 1, 1, 1);

        pushButton_2 = new QPushButton(widget1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 1, 0, 1, 1);

        IntroductionEdit = new QLineEdit(widget1);
        IntroductionEdit->setObjectName(QStringLiteral("IntroductionEdit"));

        gridLayout->addWidget(IntroductionEdit, 1, 1, 1, 1);

        pushButton_3 = new QPushButton(widget1);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 2, 0, 1, 1);

        HighOpitionEdit = new QLineEdit(widget1);
        HighOpitionEdit->setObjectName(QStringLiteral("HighOpitionEdit"));

        gridLayout->addWidget(HighOpitionEdit, 2, 1, 1, 1);


        retranslateUi(MyStore);

        QMetaObject::connectSlotsByName(MyStore);
    } // setupUi

    void retranslateUi(QWidget *MyStore)
    {
        MyStore->setWindowTitle(QApplication::translate("MyStore", "Form", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MyStore", "\347\276\216\351\243\237\345\220\215", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MyStore", "\344\273\267\346\240\274", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MyStore", "\344\273\213\347\273\215", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("MyStore", "\347\276\216\351\243\2371", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("MyStore", "\347\276\216\351\243\2372", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem5->setText(QApplication::translate("MyStore", "\347\276\216\351\243\2373", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem6->setText(QApplication::translate("MyStore", "\347\276\216\351\243\2374", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem7->setText(QApplication::translate("MyStore", "\347\276\216\351\243\2375", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem8->setText(QApplication::translate("MyStore", "\347\276\216\351\243\2376", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem9->setText(QApplication::translate("MyStore", "\347\276\216\351\243\2377", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem10->setText(QApplication::translate("MyStore", "\347\276\216\351\243\2378", 0));
        AddFoodToMenuButton->setText(QApplication::translate("MyStore", "\345\242\236\345\212\240\347\276\216\351\243\237", 0));
        ReadTurnoverButton->setText(QApplication::translate("MyStore", "\346\237\245\347\234\213\350\220\245\344\270\232\351\242\235", 0));
        ReturnButton->setText(QApplication::translate("MyStore", "\350\277\224\345\233\236", 0));
        Delete_1->setText(QApplication::translate("MyStore", "\345\210\240\351\231\244", 0));
        Delete_2->setText(QApplication::translate("MyStore", "\345\210\240\351\231\244", 0));
        Delete_3->setText(QApplication::translate("MyStore", "\345\210\240\351\231\244", 0));
        Delete_4->setText(QApplication::translate("MyStore", "\345\210\240\351\231\244", 0));
        Delete_5->setText(QApplication::translate("MyStore", "\345\210\240\351\231\244", 0));
        Delete_6->setText(QApplication::translate("MyStore", "\345\210\240\351\231\244", 0));
        Delete_7->setText(QApplication::translate("MyStore", "\345\210\240\351\231\244", 0));
        Delete_8->setText(QApplication::translate("MyStore", "\345\210\240\351\231\244", 0));
        pushButton->setText(QApplication::translate("MyStore", "\345\272\227\351\223\272\345\220\215", 0));
        pushButton_2->setText(QApplication::translate("MyStore", "\347\256\200\344\273\213", 0));
        pushButton_3->setText(QApplication::translate("MyStore", "\345\245\275\350\257\204\346\225\260", 0));
    } // retranslateUi

};

namespace Ui {
    class MyStore: public Ui_MyStore {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYSTORE_H
