/********************************************************************************
** Form generated from reading UI file 'turnover.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TURNOVER_H
#define UI_TURNOVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Turnover
{
public:
    QTableWidget *TurnoverDetail;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *UpdateButton;
    QPushButton *PreviousButton;
    QPushButton *NextButton;
    QPushButton *ReturnButton;

    void setupUi(QWidget *Turnover)
    {
        if (Turnover->objectName().isEmpty())
            Turnover->setObjectName(QStringLiteral("Turnover"));
        Turnover->resize(800, 600);
        TurnoverDetail = new QTableWidget(Turnover);
        if (TurnoverDetail->columnCount() < 2)
            TurnoverDetail->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        TurnoverDetail->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        TurnoverDetail->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (TurnoverDetail->rowCount() < 8)
            TurnoverDetail->setRowCount(8);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        TurnoverDetail->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        TurnoverDetail->setVerticalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        TurnoverDetail->setVerticalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        TurnoverDetail->setVerticalHeaderItem(3, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        TurnoverDetail->setVerticalHeaderItem(4, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        TurnoverDetail->setVerticalHeaderItem(5, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        TurnoverDetail->setVerticalHeaderItem(6, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        TurnoverDetail->setVerticalHeaderItem(7, __qtablewidgetitem9);
        TurnoverDetail->setObjectName(QStringLiteral("TurnoverDetail"));
        TurnoverDetail->setGeometry(QRect(70, 50, 221, 271));
        layoutWidget = new QWidget(Turnover);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(320, 200, 77, 112));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        UpdateButton = new QPushButton(layoutWidget);
        UpdateButton->setObjectName(QStringLiteral("UpdateButton"));

        verticalLayout->addWidget(UpdateButton);

        PreviousButton = new QPushButton(layoutWidget);
        PreviousButton->setObjectName(QStringLiteral("PreviousButton"));

        verticalLayout->addWidget(PreviousButton);

        NextButton = new QPushButton(layoutWidget);
        NextButton->setObjectName(QStringLiteral("NextButton"));

        verticalLayout->addWidget(NextButton);

        ReturnButton = new QPushButton(layoutWidget);
        ReturnButton->setObjectName(QStringLiteral("ReturnButton"));

        verticalLayout->addWidget(ReturnButton);


        retranslateUi(Turnover);

        QMetaObject::connectSlotsByName(Turnover);
    } // setupUi

    void retranslateUi(QWidget *Turnover)
    {
        Turnover->setWindowTitle(QApplication::translate("Turnover", "Form", 0));
        QTableWidgetItem *___qtablewidgetitem = TurnoverDetail->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Turnover", "\350\256\242\345\215\225\345\217\267", 0));
        QTableWidgetItem *___qtablewidgetitem1 = TurnoverDetail->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Turnover", "\351\207\221\351\242\235", 0));
        QTableWidgetItem *___qtablewidgetitem2 = TurnoverDetail->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("Turnover", "1", 0));
        QTableWidgetItem *___qtablewidgetitem3 = TurnoverDetail->verticalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("Turnover", "2", 0));
        QTableWidgetItem *___qtablewidgetitem4 = TurnoverDetail->verticalHeaderItem(2);
        ___qtablewidgetitem4->setText(QApplication::translate("Turnover", "3", 0));
        QTableWidgetItem *___qtablewidgetitem5 = TurnoverDetail->verticalHeaderItem(3);
        ___qtablewidgetitem5->setText(QApplication::translate("Turnover", "4", 0));
        QTableWidgetItem *___qtablewidgetitem6 = TurnoverDetail->verticalHeaderItem(4);
        ___qtablewidgetitem6->setText(QApplication::translate("Turnover", "5", 0));
        QTableWidgetItem *___qtablewidgetitem7 = TurnoverDetail->verticalHeaderItem(5);
        ___qtablewidgetitem7->setText(QApplication::translate("Turnover", "6", 0));
        QTableWidgetItem *___qtablewidgetitem8 = TurnoverDetail->verticalHeaderItem(6);
        ___qtablewidgetitem8->setText(QApplication::translate("Turnover", "7", 0));
        QTableWidgetItem *___qtablewidgetitem9 = TurnoverDetail->verticalHeaderItem(7);
        ___qtablewidgetitem9->setText(QApplication::translate("Turnover", "8", 0));
        UpdateButton->setText(QApplication::translate("Turnover", "\345\210\267\346\226\260", 0));
        PreviousButton->setText(QApplication::translate("Turnover", "\344\270\212\344\270\200\351\241\265", 0));
        NextButton->setText(QApplication::translate("Turnover", "\344\270\213\344\270\200\351\241\265", 0));
        ReturnButton->setText(QApplication::translate("Turnover", "\350\277\224\345\233\236", 0));
    } // retranslateUi

};

namespace Ui {
    class Turnover: public Ui_Turnover {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TURNOVER_H
