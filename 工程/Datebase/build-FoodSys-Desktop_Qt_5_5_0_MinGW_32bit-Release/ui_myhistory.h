/********************************************************************************
** Form generated from reading UI file 'myhistory.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYHISTORY_H
#define UI_MYHISTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyHistory
{
public:
    QTableWidget *tableWidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *PreviousButton;
    QPushButton *NextButton;
    QPushButton *ReturnButton;

    void setupUi(QWidget *MyHistory)
    {
        if (MyHistory->objectName().isEmpty())
            MyHistory->setObjectName(QStringLiteral("MyHistory"));
        MyHistory->resize(800, 600);
        tableWidget = new QTableWidget(MyHistory);
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
        tableWidget->setGeometry(QRect(70, 40, 351, 271));
        widget = new QWidget(MyHistory);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(180, 320, 239, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        PreviousButton = new QPushButton(widget);
        PreviousButton->setObjectName(QStringLiteral("PreviousButton"));

        horizontalLayout->addWidget(PreviousButton);

        NextButton = new QPushButton(widget);
        NextButton->setObjectName(QStringLiteral("NextButton"));

        horizontalLayout->addWidget(NextButton);

        ReturnButton = new QPushButton(widget);
        ReturnButton->setObjectName(QStringLiteral("ReturnButton"));

        horizontalLayout->addWidget(ReturnButton);


        retranslateUi(MyHistory);

        QMetaObject::connectSlotsByName(MyHistory);
    } // setupUi

    void retranslateUi(QWidget *MyHistory)
    {
        MyHistory->setWindowTitle(QApplication::translate("MyHistory", "Form", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MyHistory", "\346\227\245\346\234\237", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MyHistory", "\350\256\242\345\215\225\345\217\267", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MyHistory", "\346\200\273\344\273\267", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("MyHistory", "\350\256\242\345\215\2251", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("MyHistory", "\350\256\242\345\215\2252", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem5->setText(QApplication::translate("MyHistory", "\350\256\242\345\215\2253", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem6->setText(QApplication::translate("MyHistory", "\350\256\242\345\215\2254", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem7->setText(QApplication::translate("MyHistory", "\350\256\242\345\215\2255", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem8->setText(QApplication::translate("MyHistory", "\350\256\242\345\215\2256", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem9->setText(QApplication::translate("MyHistory", "\350\256\242\345\215\2257", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem10->setText(QApplication::translate("MyHistory", "\350\256\242\345\215\2258", 0));
        PreviousButton->setText(QApplication::translate("MyHistory", "\344\270\212\344\270\200\351\241\265", 0));
        NextButton->setText(QApplication::translate("MyHistory", "\344\270\213\344\270\200\351\241\265", 0));
        ReturnButton->setText(QApplication::translate("MyHistory", "\350\277\224\345\233\236", 0));
    } // retranslateUi

};

namespace Ui {
    class MyHistory: public Ui_MyHistory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYHISTORY_H
