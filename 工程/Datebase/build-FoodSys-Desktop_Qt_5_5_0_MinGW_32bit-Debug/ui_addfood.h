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
    QPushButton *CanelButton;
    QPushButton *SureButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QLineEdit *FoodNameEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_2;
    QLineEdit *FoodPriceEdit;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *FoodIntButton;
    QLineEdit *FoodIntEdit;

    void setupUi(QWidget *AddFood)
    {
        if (AddFood->objectName().isEmpty())
            AddFood->setObjectName(QStringLiteral("AddFood"));
        AddFood->resize(800, 600);
        CanelButton = new QPushButton(AddFood);
        CanelButton->setObjectName(QStringLiteral("CanelButton"));
        CanelButton->setGeometry(QRect(352, 161, 75, 23));
        SureButton = new QPushButton(AddFood);
        SureButton->setObjectName(QStringLiteral("SureButton"));
        SureButton->setGeometry(QRect(271, 161, 75, 23));
        layoutWidget = new QWidget(AddFood);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 60, 351, 89));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        FoodNameEdit = new QLineEdit(layoutWidget);
        FoodNameEdit->setObjectName(QStringLiteral("FoodNameEdit"));

        horizontalLayout->addWidget(FoodNameEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        FoodPriceEdit = new QLineEdit(layoutWidget);
        FoodPriceEdit->setObjectName(QStringLiteral("FoodPriceEdit"));

        horizontalLayout_2->addWidget(FoodPriceEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        FoodIntButton = new QPushButton(layoutWidget);
        FoodIntButton->setObjectName(QStringLiteral("FoodIntButton"));

        horizontalLayout_3->addWidget(FoodIntButton);

        FoodIntEdit = new QLineEdit(layoutWidget);
        FoodIntEdit->setObjectName(QStringLiteral("FoodIntEdit"));

        horizontalLayout_3->addWidget(FoodIntEdit);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(AddFood);

        QMetaObject::connectSlotsByName(AddFood);
    } // setupUi

    void retranslateUi(QWidget *AddFood)
    {
        AddFood->setWindowTitle(QApplication::translate("AddFood", "Form", 0));
        CanelButton->setText(QApplication::translate("AddFood", "\345\217\226\346\266\210", 0));
        SureButton->setText(QApplication::translate("AddFood", "\347\241\256\350\256\244", 0));
        pushButton->setText(QApplication::translate("AddFood", "\347\276\216\351\243\237\345\220\215", 0));
        pushButton_2->setText(QApplication::translate("AddFood", "\344\273\267\346\240\274", 0));
        FoodIntButton->setText(QApplication::translate("AddFood", "\347\276\216\351\243\237\344\273\213\347\273\215", 0));
    } // retranslateUi

};

namespace Ui {
    class AddFood: public Ui_AddFood {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDFOOD_H
