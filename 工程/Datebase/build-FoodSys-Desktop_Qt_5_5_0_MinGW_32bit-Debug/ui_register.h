/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

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

class Ui_Register
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QLineEdit *AccountEdit;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_9;
    QLineEdit *PasswordEdit;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_10;
    QLineEdit *SurePasswordEdit;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *AddressButton_2;
    QLineEdit *PreferenceEdit;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *AddressButton;
    QLineEdit *AddressEdit;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_3;
    QLineEdit *StoreNameEdit;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *UpdateButton;
    QPushButton *SureButton;
    QPushButton *ReturnButton;

    void setupUi(QWidget *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QStringLiteral("Register"));
        Register->resize(497, 404);
        layoutWidget = new QWidget(Register);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 50, 321, 232));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        AccountEdit = new QLineEdit(layoutWidget);
        AccountEdit->setObjectName(QStringLiteral("AccountEdit"));

        horizontalLayout->addWidget(AccountEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton_9 = new QPushButton(layoutWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));

        horizontalLayout_3->addWidget(pushButton_9);

        PasswordEdit = new QLineEdit(layoutWidget);
        PasswordEdit->setObjectName(QStringLiteral("PasswordEdit"));

        horizontalLayout_3->addWidget(PasswordEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        pushButton_10 = new QPushButton(layoutWidget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));

        horizontalLayout_6->addWidget(pushButton_10);

        SurePasswordEdit = new QLineEdit(layoutWidget);
        SurePasswordEdit->setObjectName(QStringLiteral("SurePasswordEdit"));

        horizontalLayout_6->addWidget(SurePasswordEdit);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        AddressButton_2 = new QPushButton(layoutWidget);
        AddressButton_2->setObjectName(QStringLiteral("AddressButton_2"));

        horizontalLayout_8->addWidget(AddressButton_2);

        PreferenceEdit = new QLineEdit(layoutWidget);
        PreferenceEdit->setObjectName(QStringLiteral("PreferenceEdit"));

        horizontalLayout_8->addWidget(PreferenceEdit);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        AddressButton = new QPushButton(layoutWidget);
        AddressButton->setObjectName(QStringLiteral("AddressButton"));

        horizontalLayout_4->addWidget(AddressButton);

        AddressEdit = new QLineEdit(layoutWidget);
        AddressEdit->setObjectName(QStringLiteral("AddressEdit"));

        horizontalLayout_4->addWidget(AddressEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        verticalLayout->addWidget(lineEdit_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_5->addWidget(pushButton_3);

        StoreNameEdit = new QLineEdit(layoutWidget);
        StoreNameEdit->setObjectName(QStringLiteral("StoreNameEdit"));

        horizontalLayout_5->addWidget(StoreNameEdit);


        verticalLayout->addLayout(horizontalLayout_5);

        layoutWidget1 = new QWidget(Register);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(130, 290, 239, 25));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        UpdateButton = new QPushButton(layoutWidget1);
        UpdateButton->setObjectName(QStringLiteral("UpdateButton"));

        horizontalLayout_7->addWidget(UpdateButton);

        SureButton = new QPushButton(layoutWidget1);
        SureButton->setObjectName(QStringLiteral("SureButton"));

        horizontalLayout_7->addWidget(SureButton);

        ReturnButton = new QPushButton(layoutWidget1);
        ReturnButton->setObjectName(QStringLiteral("ReturnButton"));

        horizontalLayout_7->addWidget(ReturnButton);


        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QWidget *Register)
    {
        Register->setWindowTitle(QApplication::translate("Register", "Form", 0));
        pushButton->setText(QApplication::translate("Register", "\350\264\246\345\217\267", 0));
        pushButton_9->setText(QApplication::translate("Register", "\345\257\206\347\240\201", 0));
        pushButton_10->setText(QApplication::translate("Register", "\347\241\256\350\256\244\345\257\206\347\240\201", 0));
        AddressButton_2->setText(QApplication::translate("Register", "\344\270\252\344\272\272\345\201\217\345\245\275", 0));
        AddressButton->setText(QApplication::translate("Register", "\345\234\260\345\235\200", 0));
        lineEdit_3->setText(QApplication::translate("Register", "\345\215\226\345\256\266\350\257\267\345\241\253\345\206\231\345\272\227\345\220\215", 0));
        pushButton_3->setText(QApplication::translate("Register", "\345\272\227\345\220\215", 0));
        UpdateButton->setText(QApplication::translate("Register", "\345\210\267\346\226\260", 0));
        SureButton->setText(QApplication::translate("Register", "\347\241\256\350\256\244", 0));
        ReturnButton->setText(QApplication::translate("Register", "\350\277\224\345\233\236", 0));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
