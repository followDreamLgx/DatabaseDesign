/********************************************************************************
** Form generated from reading UI file 'shoopingcart.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOOPINGCART_H
#define UI_SHOOPINGCART_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShoopingCart
{
public:
    QTableWidget *tableWidget;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QPushButton *ThrowButton_1;
    QPushButton *More_1;
    QPushButton *ThrowButton_2;
    QPushButton *More_2;
    QPushButton *ThrowButton_3;
    QPushButton *More_3;
    QPushButton *ThrowButton_4;
    QPushButton *More_4;
    QPushButton *ThrowButton_5;
    QPushButton *More_5;
    QPushButton *ThrowButton_6;
    QPushButton *More_6;
    QPushButton *ThrowButton_7;
    QPushButton *More_7;
    QPushButton *ThrowButton_8;
    QPushButton *More_8;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *PayBillButton;
    QPushButton *CanelBillButton;
    QPushButton *ReturnButton;

    void setupUi(QWidget *ShoopingCart)
    {
        if (ShoopingCart->objectName().isEmpty())
            ShoopingCart->setObjectName(QStringLiteral("ShoopingCart"));
        ShoopingCart->resize(800, 600);
        tableWidget = new QTableWidget(ShoopingCart);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (tableWidget->rowCount() < 9)
            tableWidget->setRowCount(9);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(7, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(8, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setItem(8, 2, __qtablewidgetitem13);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(60, 60, 441, 301));
        layoutWidget = new QWidget(ShoopingCart);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(511, 91, 158, 228));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        ThrowButton_1 = new QPushButton(layoutWidget);
        ThrowButton_1->setObjectName(QStringLiteral("ThrowButton_1"));

        formLayout->setWidget(0, QFormLayout::LabelRole, ThrowButton_1);

        More_1 = new QPushButton(layoutWidget);
        More_1->setObjectName(QStringLiteral("More_1"));

        formLayout->setWidget(0, QFormLayout::FieldRole, More_1);

        ThrowButton_2 = new QPushButton(layoutWidget);
        ThrowButton_2->setObjectName(QStringLiteral("ThrowButton_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, ThrowButton_2);

        More_2 = new QPushButton(layoutWidget);
        More_2->setObjectName(QStringLiteral("More_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, More_2);

        ThrowButton_3 = new QPushButton(layoutWidget);
        ThrowButton_3->setObjectName(QStringLiteral("ThrowButton_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, ThrowButton_3);

        More_3 = new QPushButton(layoutWidget);
        More_3->setObjectName(QStringLiteral("More_3"));

        formLayout->setWidget(2, QFormLayout::FieldRole, More_3);

        ThrowButton_4 = new QPushButton(layoutWidget);
        ThrowButton_4->setObjectName(QStringLiteral("ThrowButton_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, ThrowButton_4);

        More_4 = new QPushButton(layoutWidget);
        More_4->setObjectName(QStringLiteral("More_4"));

        formLayout->setWidget(3, QFormLayout::FieldRole, More_4);

        ThrowButton_5 = new QPushButton(layoutWidget);
        ThrowButton_5->setObjectName(QStringLiteral("ThrowButton_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, ThrowButton_5);

        More_5 = new QPushButton(layoutWidget);
        More_5->setObjectName(QStringLiteral("More_5"));

        formLayout->setWidget(4, QFormLayout::FieldRole, More_5);

        ThrowButton_6 = new QPushButton(layoutWidget);
        ThrowButton_6->setObjectName(QStringLiteral("ThrowButton_6"));

        formLayout->setWidget(5, QFormLayout::LabelRole, ThrowButton_6);

        More_6 = new QPushButton(layoutWidget);
        More_6->setObjectName(QStringLiteral("More_6"));

        formLayout->setWidget(5, QFormLayout::FieldRole, More_6);

        ThrowButton_7 = new QPushButton(layoutWidget);
        ThrowButton_7->setObjectName(QStringLiteral("ThrowButton_7"));

        formLayout->setWidget(6, QFormLayout::LabelRole, ThrowButton_7);

        More_7 = new QPushButton(layoutWidget);
        More_7->setObjectName(QStringLiteral("More_7"));

        formLayout->setWidget(6, QFormLayout::FieldRole, More_7);

        ThrowButton_8 = new QPushButton(layoutWidget);
        ThrowButton_8->setObjectName(QStringLiteral("ThrowButton_8"));

        formLayout->setWidget(7, QFormLayout::LabelRole, ThrowButton_8);

        More_8 = new QPushButton(layoutWidget);
        More_8->setObjectName(QStringLiteral("More_8"));

        formLayout->setWidget(7, QFormLayout::FieldRole, More_8);

        layoutWidget1 = new QWidget(ShoopingCart);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(180, 380, 320, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        PayBillButton = new QPushButton(layoutWidget1);
        PayBillButton->setObjectName(QStringLiteral("PayBillButton"));

        horizontalLayout->addWidget(PayBillButton);

        CanelBillButton = new QPushButton(layoutWidget1);
        CanelBillButton->setObjectName(QStringLiteral("CanelBillButton"));

        horizontalLayout->addWidget(CanelBillButton);

        ReturnButton = new QPushButton(layoutWidget1);
        ReturnButton->setObjectName(QStringLiteral("ReturnButton"));

        horizontalLayout->addWidget(ReturnButton);


        retranslateUi(ShoopingCart);

        QMetaObject::connectSlotsByName(ShoopingCart);
    } // setupUi

    void retranslateUi(QWidget *ShoopingCart)
    {
        ShoopingCart->setWindowTitle(QApplication::translate("ShoopingCart", "Form", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ShoopingCart", "\347\276\216\351\243\237\345\220\215", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ShoopingCart", "\345\215\225\344\273\267", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ShoopingCart", "\346\225\260\351\207\217", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("ShoopingCart", "\346\200\273\344\273\267", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("ShoopingCart", "\347\276\216\351\243\2371", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("ShoopingCart", "\347\276\216\351\243\2372", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("ShoopingCart", "\347\276\216\351\243\2373", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem7->setText(QApplication::translate("ShoopingCart", "\347\276\216\351\243\2374", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem8->setText(QApplication::translate("ShoopingCart", "\347\276\216\351\243\2375", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem9->setText(QApplication::translate("ShoopingCart", "\347\276\216\351\243\2376", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem10->setText(QApplication::translate("ShoopingCart", "\347\276\216\351\243\2377", 0));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem11->setText(QApplication::translate("ShoopingCart", "\347\276\216\351\243\2378", 0));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->item(8, 2);
        ___qtablewidgetitem12->setText(QApplication::translate("ShoopingCart", "\345\220\210\350\256\241", 0));
        tableWidget->setSortingEnabled(__sortingEnabled);

        ThrowButton_1->setText(QApplication::translate("ShoopingCart", "\345\277\215\347\227\233\346\224\276\345\274\203", 0));
        More_1->setText(QApplication::translate("ShoopingCart", "\345\206\215\346\235\245\344\270\200\351\241\277", 0));
        ThrowButton_2->setText(QApplication::translate("ShoopingCart", "\345\277\215\347\227\233\346\224\276\345\274\203", 0));
        More_2->setText(QApplication::translate("ShoopingCart", "\345\206\215\346\235\245\344\270\200\351\241\277", 0));
        ThrowButton_3->setText(QApplication::translate("ShoopingCart", "\345\277\215\347\227\233\346\224\276\345\274\203", 0));
        More_3->setText(QApplication::translate("ShoopingCart", "\345\206\215\346\235\245\344\270\200\351\241\277", 0));
        ThrowButton_4->setText(QApplication::translate("ShoopingCart", "\345\277\215\347\227\233\346\224\276\345\274\203", 0));
        More_4->setText(QApplication::translate("ShoopingCart", "\345\206\215\346\235\245\344\270\200\351\241\277", 0));
        ThrowButton_5->setText(QApplication::translate("ShoopingCart", "\345\277\215\347\227\233\346\224\276\345\274\203", 0));
        More_5->setText(QApplication::translate("ShoopingCart", "\345\206\215\346\235\245\344\270\200\351\241\277", 0));
        ThrowButton_6->setText(QApplication::translate("ShoopingCart", "\345\277\215\347\227\233\346\224\276\345\274\203", 0));
        More_6->setText(QApplication::translate("ShoopingCart", "\345\206\215\346\235\245\344\270\200\351\241\277", 0));
        ThrowButton_7->setText(QApplication::translate("ShoopingCart", "\345\277\215\347\227\233\346\224\276\345\274\203", 0));
        More_7->setText(QApplication::translate("ShoopingCart", "\345\206\215\346\235\245\344\270\200\351\241\277", 0));
        ThrowButton_8->setText(QApplication::translate("ShoopingCart", "\345\277\215\347\227\233\346\224\276\345\274\203", 0));
        More_8->setText(QApplication::translate("ShoopingCart", "\345\206\215\346\235\245\344\270\200\351\241\277", 0));
        PayBillButton->setText(QApplication::translate("ShoopingCart", "\344\271\260\345\215\225", 0));
        CanelBillButton->setText(QApplication::translate("ShoopingCart", "\345\217\226\346\266\210\350\256\242\345\215\225", 0));
        ReturnButton->setText(QApplication::translate("ShoopingCart", "\350\277\224\345\233\236", 0));
    } // retranslateUi

};

namespace Ui {
    class ShoopingCart: public Ui_ShoopingCart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOOPINGCART_H
