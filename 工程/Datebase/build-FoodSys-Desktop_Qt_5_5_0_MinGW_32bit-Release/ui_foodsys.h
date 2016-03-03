/********************************************************************************
** Form generated from reading UI file 'foodsys.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOODSYS_H
#define UI_FOODSYS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FoodSys
{
public:

    void setupUi(QWidget *FoodSys)
    {
        if (FoodSys->objectName().isEmpty())
            FoodSys->setObjectName(QStringLiteral("FoodSys"));
        FoodSys->resize(400, 300);

        retranslateUi(FoodSys);

        QMetaObject::connectSlotsByName(FoodSys);
    } // setupUi

    void retranslateUi(QWidget *FoodSys)
    {
        FoodSys->setWindowTitle(QApplication::translate("FoodSys", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class FoodSys: public Ui_FoodSys {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOODSYS_H
