/********************************************************************************
** Form generated from reading UI file 'addfood.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDFOOD_H
#define UI_ADDFOOD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddFood
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *SureButton;
    QPushButton *CanelButton;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *FoodNameEdit;
    QLineEdit *FoodPriceEdit;

    void setupUi(QWidget *AddFood)
    {
        if (AddFood->objectName().isEmpty())
            AddFood->setObjectName(QStringLiteral("AddFood"));
        AddFood->resize(800, 600);
        layoutWidget = new QWidget(AddFood);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(270, 160, 158, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        SureButton = new QPushButton(layoutWidget);
        SureButton->setObjectName(QStringLiteral("SureButton"));

        horizontalLayout->addWidget(SureButton);

        CanelButton = new QPushButton(layoutWidget);
        CanelButton->setObjectName(QStringLiteral("CanelButton"));

        horizontalLayout->addWidget(CanelButton);

        layoutWidget1 = new QWidget(AddFood);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(60, 90, 371, 56));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        FoodNameEdit = new QLineEdit(layoutWidget1);
        FoodNameEdit->setObjectName(QStringLiteral("FoodNameEdit"));

        verticalLayout_2->addWidget(FoodNameEdit);

        FoodPriceEdit = new QLineEdit(layoutWidget1);
        FoodPriceEdit->setObjectName(QStringLiteral("FoodPriceEdit"));

        verticalLayout_2->addWidget(FoodPriceEdit);


        horizontalLayout_2->addLayout(verticalLayout_2);


        retranslateUi(AddFood);

        QMetaObject::connectSlotsByName(AddFood);
    } // setupUi

    void retranslateUi(QWidget *AddFood)
    {
        AddFood->setWindowTitle(QApplication::translate("AddFood", "Form", 0));
        SureButton->setText(QApplication::translate("AddFood", "\347\241\256\350\256\244", 0));
        CanelButton->setText(QApplication::translate("AddFood", "\345\217\226\346\266\210", 0));
        pushButton->setText(QApplication::translate("AddFood", "\347\276\216\351\243\237\345\220\215", 0));
        pushButton_2->setText(QApplication::translate("AddFood", "\344\273\267\346\240\274", 0));
    } // retranslateUi

};

namespace Ui {
    class AddFood: public Ui_AddFood {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDFOOD_H
