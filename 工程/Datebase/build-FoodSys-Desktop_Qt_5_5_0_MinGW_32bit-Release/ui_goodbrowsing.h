/********************************************************************************
** Form generated from reading UI file 'goodbrowsing.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOODBROWSING_H
#define UI_GOODBROWSING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GoodBrowsing
{
public:
    QTableWidget *tableWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *PreviousButton;
    QPushButton *NextButton;
    QPushButton *ReadOrderButton;
    QPushButton *PayBillButton;
    QPushButton *ReturnButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *FoodToMenuButton_1;
    QPushButton *FoodToMenuButton_2;
    QPushButton *FoodToMenuButton_3;
    QPushButton *FoodToMenuButton_4;
    QPushButton *FoodToMenuButton_5;
    QPushButton *FoodToMenuButton_6;
    QPushButton *FoodToMenuButton_7;
    QPushButton *FoodToMenuButton_8;
    QPushButton *FoodToMenuButton_9;
    QPushButton *FoodToMenuButton_10;

    void setupUi(QWidget *GoodBrowsing)
    {
        if (GoodBrowsing->objectName().isEmpty())
            GoodBrowsing->setObjectName(QStringLiteral("GoodBrowsing"));
        GoodBrowsing->resize(800, 600);
        tableWidget = new QTableWidget(GoodBrowsing);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (tableWidget->rowCount() < 10)
            tableWidget->setRowCount(10);
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
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(8, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(9, __qtablewidgetitem12);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(100, 80, 351, 331));
        layoutWidget = new QWidget(GoodBrowsing);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(130, 430, 401, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        PreviousButton = new QPushButton(layoutWidget);
        PreviousButton->setObjectName(QStringLiteral("PreviousButton"));

        horizontalLayout->addWidget(PreviousButton);

        NextButton = new QPushButton(layoutWidget);
        NextButton->setObjectName(QStringLiteral("NextButton"));

        horizontalLayout->addWidget(NextButton);

        ReadOrderButton = new QPushButton(layoutWidget);
        ReadOrderButton->setObjectName(QStringLiteral("ReadOrderButton"));

        horizontalLayout->addWidget(ReadOrderButton);

        PayBillButton = new QPushButton(layoutWidget);
        PayBillButton->setObjectName(QStringLiteral("PayBillButton"));

        horizontalLayout->addWidget(PayBillButton);

        ReturnButton = new QPushButton(layoutWidget);
        ReturnButton->setObjectName(QStringLiteral("ReturnButton"));

        horizontalLayout->addWidget(ReturnButton);

        widget = new QWidget(GoodBrowsing);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(460, 100, 71, 311));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        FoodToMenuButton_1 = new QPushButton(widget);
        FoodToMenuButton_1->setObjectName(QStringLiteral("FoodToMenuButton_1"));

        verticalLayout_2->addWidget(FoodToMenuButton_1);

        FoodToMenuButton_2 = new QPushButton(widget);
        FoodToMenuButton_2->setObjectName(QStringLiteral("FoodToMenuButton_2"));

        verticalLayout_2->addWidget(FoodToMenuButton_2);

        FoodToMenuButton_3 = new QPushButton(widget);
        FoodToMenuButton_3->setObjectName(QStringLiteral("FoodToMenuButton_3"));

        verticalLayout_2->addWidget(FoodToMenuButton_3);

        FoodToMenuButton_4 = new QPushButton(widget);
        FoodToMenuButton_4->setObjectName(QStringLiteral("FoodToMenuButton_4"));

        verticalLayout_2->addWidget(FoodToMenuButton_4);

        FoodToMenuButton_5 = new QPushButton(widget);
        FoodToMenuButton_5->setObjectName(QStringLiteral("FoodToMenuButton_5"));

        verticalLayout_2->addWidget(FoodToMenuButton_5);

        FoodToMenuButton_6 = new QPushButton(widget);
        FoodToMenuButton_6->setObjectName(QStringLiteral("FoodToMenuButton_6"));

        verticalLayout_2->addWidget(FoodToMenuButton_6);

        FoodToMenuButton_7 = new QPushButton(widget);
        FoodToMenuButton_7->setObjectName(QStringLiteral("FoodToMenuButton_7"));

        verticalLayout_2->addWidget(FoodToMenuButton_7);

        FoodToMenuButton_8 = new QPushButton(widget);
        FoodToMenuButton_8->setObjectName(QStringLiteral("FoodToMenuButton_8"));

        verticalLayout_2->addWidget(FoodToMenuButton_8);

        FoodToMenuButton_9 = new QPushButton(widget);
        FoodToMenuButton_9->setObjectName(QStringLiteral("FoodToMenuButton_9"));

        verticalLayout_2->addWidget(FoodToMenuButton_9);

        FoodToMenuButton_10 = new QPushButton(widget);
        FoodToMenuButton_10->setObjectName(QStringLiteral("FoodToMenuButton_10"));

        verticalLayout_2->addWidget(FoodToMenuButton_10);

        layoutWidget->raise();
        tableWidget->raise();
        FoodToMenuButton_1->raise();
        FoodToMenuButton_2->raise();
        FoodToMenuButton_3->raise();
        FoodToMenuButton_4->raise();
        FoodToMenuButton_5->raise();
        FoodToMenuButton_6->raise();
        FoodToMenuButton_7->raise();
        FoodToMenuButton_8->raise();
        FoodToMenuButton_9->raise();
        FoodToMenuButton_10->raise();

        retranslateUi(GoodBrowsing);

        QMetaObject::connectSlotsByName(GoodBrowsing);
    } // setupUi

    void retranslateUi(QWidget *GoodBrowsing)
    {
        GoodBrowsing->setWindowTitle(QApplication::translate("GoodBrowsing", "Form", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("GoodBrowsing", "\350\217\234\345\220\215", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("GoodBrowsing", "\344\273\267\346\240\274", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("GoodBrowsing", "\346\234\210\351\224\200\345\224\256\351\207\217", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("GoodBrowsing", "\347\276\216\351\243\2371", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("GoodBrowsing", "\347\276\216\351\243\2372", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem5->setText(QApplication::translate("GoodBrowsing", "\347\276\216\351\243\2373", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem6->setText(QApplication::translate("GoodBrowsing", "\347\276\216\351\243\2374", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem7->setText(QApplication::translate("GoodBrowsing", "\347\276\216\351\243\2375", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem8->setText(QApplication::translate("GoodBrowsing", "\347\276\216\351\243\2376", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem9->setText(QApplication::translate("GoodBrowsing", "\347\276\216\351\243\2377", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem10->setText(QApplication::translate("GoodBrowsing", "\347\276\216\351\243\2378", 0));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->verticalHeaderItem(8);
        ___qtablewidgetitem11->setText(QApplication::translate("GoodBrowsing", "\347\276\216\351\243\2379", 0));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->verticalHeaderItem(9);
        ___qtablewidgetitem12->setText(QApplication::translate("GoodBrowsing", "\347\276\216\351\243\23710", 0));
        PreviousButton->setText(QApplication::translate("GoodBrowsing", "\344\270\212\344\270\200\351\241\265", 0));
        NextButton->setText(QApplication::translate("GoodBrowsing", "\344\270\213\344\270\200\351\241\265", 0));
        ReadOrderButton->setText(QApplication::translate("GoodBrowsing", "\346\237\245\347\234\213\350\256\242\345\215\225", 0));
        PayBillButton->setText(QApplication::translate("GoodBrowsing", "\344\271\260\345\215\225", 0));
        ReturnButton->setText(QApplication::translate("GoodBrowsing", "\350\277\224\345\233\236", 0));
        FoodToMenuButton_1->setText(QApplication::translate("GoodBrowsing", "\345\212\240\345\205\245\350\217\234\345\215\225", 0));
        FoodToMenuButton_2->setText(QApplication::translate("GoodBrowsing", "\345\212\240\345\205\245\350\217\234\345\215\225", 0));
        FoodToMenuButton_3->setText(QApplication::translate("GoodBrowsing", "\345\212\240\345\205\245\350\217\234\345\215\225", 0));
        FoodToMenuButton_4->setText(QApplication::translate("GoodBrowsing", "\345\212\240\345\205\245\350\217\234\345\215\225", 0));
        FoodToMenuButton_5->setText(QApplication::translate("GoodBrowsing", "\345\212\240\345\205\245\350\217\234\345\215\225", 0));
        FoodToMenuButton_6->setText(QApplication::translate("GoodBrowsing", "\345\212\240\345\205\245\350\217\234\345\215\225", 0));
        FoodToMenuButton_7->setText(QApplication::translate("GoodBrowsing", "\345\212\240\345\205\245\350\217\234\345\215\225", 0));
        FoodToMenuButton_8->setText(QApplication::translate("GoodBrowsing", "\345\212\240\345\205\245\350\217\234\345\215\225", 0));
        FoodToMenuButton_9->setText(QApplication::translate("GoodBrowsing", "\345\212\240\345\205\245\350\217\234\345\215\225", 0));
        FoodToMenuButton_10->setText(QApplication::translate("GoodBrowsing", "\345\212\240\345\205\245\350\217\234\345\215\225", 0));
    } // retranslateUi

};

namespace Ui {
    class GoodBrowsing: public Ui_GoodBrowsing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOODBROWSING_H
