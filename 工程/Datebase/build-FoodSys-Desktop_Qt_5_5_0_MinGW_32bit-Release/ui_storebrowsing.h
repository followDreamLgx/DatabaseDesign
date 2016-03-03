/********************************************************************************
** Form generated from reading UI file 'storebrowsing.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STOREBROWSING_H
#define UI_STOREBROWSING_H

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

class Ui_StoreBrowsing
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *ReadHistoryButton;
    QPushButton *PreviousButton;
    QPushButton *NextButton;
    QPushButton *ReturnButton;
    QTableWidget *tableWidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *EnterStore_1;
    QPushButton *EnterStore_2;
    QPushButton *EnterStore_3;
    QPushButton *EnterStore_4;
    QPushButton *EnterStore_5;
    QPushButton *EnterStore_6;
    QPushButton *EnterStore_7;
    QPushButton *EnterStore_8;
    QPushButton *EnterStore_9;
    QPushButton *EnterStore_10;

    void setupUi(QWidget *StoreBrowsing)
    {
        if (StoreBrowsing->objectName().isEmpty())
            StoreBrowsing->setObjectName(QStringLiteral("StoreBrowsing"));
        StoreBrowsing->resize(800, 600);
        layoutWidget = new QWidget(StoreBrowsing);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(210, 390, 325, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ReadHistoryButton = new QPushButton(layoutWidget);
        ReadHistoryButton->setObjectName(QStringLiteral("ReadHistoryButton"));

        horizontalLayout->addWidget(ReadHistoryButton);

        PreviousButton = new QPushButton(layoutWidget);
        PreviousButton->setObjectName(QStringLiteral("PreviousButton"));

        horizontalLayout->addWidget(PreviousButton);

        NextButton = new QPushButton(layoutWidget);
        NextButton->setObjectName(QStringLiteral("NextButton"));

        horizontalLayout->addWidget(NextButton);

        ReturnButton = new QPushButton(layoutWidget);
        ReturnButton->setObjectName(QStringLiteral("ReturnButton"));

        horizontalLayout->addWidget(ReturnButton);

        tableWidget = new QTableWidget(StoreBrowsing);
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
        tableWidget->setGeometry(QRect(70, 30, 381, 331));
        widget = new QWidget(StoreBrowsing);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(460, 60, 71, 301));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        EnterStore_1 = new QPushButton(widget);
        EnterStore_1->setObjectName(QStringLiteral("EnterStore_1"));

        verticalLayout->addWidget(EnterStore_1);

        EnterStore_2 = new QPushButton(widget);
        EnterStore_2->setObjectName(QStringLiteral("EnterStore_2"));

        verticalLayout->addWidget(EnterStore_2);

        EnterStore_3 = new QPushButton(widget);
        EnterStore_3->setObjectName(QStringLiteral("EnterStore_3"));

        verticalLayout->addWidget(EnterStore_3);

        EnterStore_4 = new QPushButton(widget);
        EnterStore_4->setObjectName(QStringLiteral("EnterStore_4"));

        verticalLayout->addWidget(EnterStore_4);

        EnterStore_5 = new QPushButton(widget);
        EnterStore_5->setObjectName(QStringLiteral("EnterStore_5"));

        verticalLayout->addWidget(EnterStore_5);

        EnterStore_6 = new QPushButton(widget);
        EnterStore_6->setObjectName(QStringLiteral("EnterStore_6"));

        verticalLayout->addWidget(EnterStore_6);

        EnterStore_7 = new QPushButton(widget);
        EnterStore_7->setObjectName(QStringLiteral("EnterStore_7"));

        verticalLayout->addWidget(EnterStore_7);

        EnterStore_8 = new QPushButton(widget);
        EnterStore_8->setObjectName(QStringLiteral("EnterStore_8"));

        verticalLayout->addWidget(EnterStore_8);

        EnterStore_9 = new QPushButton(widget);
        EnterStore_9->setObjectName(QStringLiteral("EnterStore_9"));

        verticalLayout->addWidget(EnterStore_9);

        EnterStore_10 = new QPushButton(widget);
        EnterStore_10->setObjectName(QStringLiteral("EnterStore_10"));

        verticalLayout->addWidget(EnterStore_10);


        retranslateUi(StoreBrowsing);

        QMetaObject::connectSlotsByName(StoreBrowsing);
    } // setupUi

    void retranslateUi(QWidget *StoreBrowsing)
    {
        StoreBrowsing->setWindowTitle(QApplication::translate("StoreBrowsing", "Form", 0));
        ReadHistoryButton->setText(QApplication::translate("StoreBrowsing", "\345\216\206\345\217\262\350\256\242\345\215\225", 0));
        PreviousButton->setText(QApplication::translate("StoreBrowsing", "\344\270\212\344\270\200\351\241\265", 0));
        NextButton->setText(QApplication::translate("StoreBrowsing", "\344\270\213\344\270\200\351\241\265", 0));
        ReturnButton->setText(QApplication::translate("StoreBrowsing", "\350\277\224\345\233\236", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("StoreBrowsing", "\345\225\206\345\272\227", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("StoreBrowsing", "\344\273\213\347\273\215", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("StoreBrowsing", "\345\256\242\346\210\267\350\257\204\344\273\267", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("StoreBrowsing", "\345\225\206\345\272\2271", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("StoreBrowsing", "\345\225\206\345\272\2272", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem5->setText(QApplication::translate("StoreBrowsing", "\345\225\206\345\272\2273", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem6->setText(QApplication::translate("StoreBrowsing", "\345\225\206\345\272\2274", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem7->setText(QApplication::translate("StoreBrowsing", "\345\225\206\345\272\2275", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem8->setText(QApplication::translate("StoreBrowsing", "\345\225\206\345\272\2276", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem9->setText(QApplication::translate("StoreBrowsing", "\345\225\206\345\272\2277", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem10->setText(QApplication::translate("StoreBrowsing", "\345\225\206\345\272\2278", 0));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->verticalHeaderItem(8);
        ___qtablewidgetitem11->setText(QApplication::translate("StoreBrowsing", "\345\225\206\345\272\2279", 0));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->verticalHeaderItem(9);
        ___qtablewidgetitem12->setText(QApplication::translate("StoreBrowsing", "\345\225\206\345\272\22710", 0));
        EnterStore_1->setText(QApplication::translate("StoreBrowsing", "\350\277\233\345\216\273\347\236\247\347\236\247", 0));
        EnterStore_2->setText(QApplication::translate("StoreBrowsing", "\350\277\233\345\216\273\347\236\247\347\236\247", 0));
        EnterStore_3->setText(QApplication::translate("StoreBrowsing", "\350\277\233\345\216\273\347\236\247\347\236\247", 0));
        EnterStore_4->setText(QApplication::translate("StoreBrowsing", "\350\277\233\345\216\273\347\236\247\347\236\247", 0));
        EnterStore_5->setText(QApplication::translate("StoreBrowsing", "\350\277\233\345\216\273\347\236\247\347\236\247", 0));
        EnterStore_6->setText(QApplication::translate("StoreBrowsing", "\350\277\233\345\216\273\347\236\247\347\236\247", 0));
        EnterStore_7->setText(QApplication::translate("StoreBrowsing", "\350\277\233\345\216\273\347\236\247\347\236\247", 0));
        EnterStore_8->setText(QApplication::translate("StoreBrowsing", "\350\277\233\345\216\273\347\236\247\347\236\247", 0));
        EnterStore_9->setText(QApplication::translate("StoreBrowsing", "\350\277\233\345\216\273\347\236\247\347\236\247", 0));
        EnterStore_10->setText(QApplication::translate("StoreBrowsing", "\350\277\233\345\216\273\347\236\247\347\236\247", 0));
    } // retranslateUi

};

namespace Ui {
    class StoreBrowsing: public Ui_StoreBrowsing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STOREBROWSING_H
