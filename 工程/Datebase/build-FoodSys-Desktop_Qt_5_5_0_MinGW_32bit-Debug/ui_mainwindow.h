/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *LoginSign;
    QPushButton *PasswordSign;
    QPushButton *RegisterButton;
    QPushButton *ForgotPassButton;
    QLineEdit *LoginEdit;
    QLineEdit *PasswordEdit;
    QPushButton *SellerLoginButton;
    QPushButton *BuyerLoginButton;
    QMenuBar *menuBar;
    QMenu *menuFollowDream;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 140, 320, 83));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        LoginSign = new QPushButton(layoutWidget);
        LoginSign->setObjectName(QStringLiteral("LoginSign"));

        gridLayout->addWidget(LoginSign, 0, 0, 1, 1);

        PasswordSign = new QPushButton(layoutWidget);
        PasswordSign->setObjectName(QStringLiteral("PasswordSign"));

        gridLayout->addWidget(PasswordSign, 1, 0, 1, 1);

        RegisterButton = new QPushButton(layoutWidget);
        RegisterButton->setObjectName(QStringLiteral("RegisterButton"));

        gridLayout->addWidget(RegisterButton, 2, 2, 1, 1);

        ForgotPassButton = new QPushButton(layoutWidget);
        ForgotPassButton->setObjectName(QStringLiteral("ForgotPassButton"));

        gridLayout->addWidget(ForgotPassButton, 2, 3, 1, 1);

        LoginEdit = new QLineEdit(layoutWidget);
        LoginEdit->setObjectName(QStringLiteral("LoginEdit"));

        gridLayout->addWidget(LoginEdit, 0, 1, 1, 3);

        PasswordEdit = new QLineEdit(layoutWidget);
        PasswordEdit->setObjectName(QStringLiteral("PasswordEdit"));

        gridLayout->addWidget(PasswordEdit, 1, 1, 1, 3);

        SellerLoginButton = new QPushButton(layoutWidget);
        SellerLoginButton->setObjectName(QStringLiteral("SellerLoginButton"));

        gridLayout->addWidget(SellerLoginButton, 2, 1, 1, 1);

        BuyerLoginButton = new QPushButton(layoutWidget);
        BuyerLoginButton->setObjectName(QStringLiteral("BuyerLoginButton"));

        gridLayout->addWidget(BuyerLoginButton, 2, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 23));
        menuFollowDream = new QMenu(menuBar);
        menuFollowDream->setObjectName(QStringLiteral("menuFollowDream"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFollowDream->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        LoginSign->setText(QApplication::translate("MainWindow", "\350\264\246\345\217\267", 0));
        PasswordSign->setText(QApplication::translate("MainWindow", "\345\257\206\347\240\201", 0));
        RegisterButton->setText(QApplication::translate("MainWindow", "\346\263\250\345\206\214", 0));
        ForgotPassButton->setText(QApplication::translate("MainWindow", "\345\277\230\350\256\260\345\257\206\347\240\201", 0));
        SellerLoginButton->setText(QApplication::translate("MainWindow", "\345\215\226\345\256\266\347\231\273\345\275\225", 0));
        BuyerLoginButton->setText(QApplication::translate("MainWindow", "\344\271\260\345\256\266\347\231\273\345\275\225", 0));
        menuFollowDream->setTitle(QApplication::translate("MainWindow", "followDream", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
