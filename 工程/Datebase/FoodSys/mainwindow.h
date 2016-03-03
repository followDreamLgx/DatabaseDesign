#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"mytype.h"

class QString;

namespace Ui {
class MainWindow;
}

class MainWindow :public QMainWindow,public BaseImformation
{
    Q_OBJECT
public:
    explicit MainWindow(BossImfor &bossImforPara, CustomerImfor &custImforPara, QWidget *parent = 0);
    ~MainWindow();
signals:
    void display(int indexNum);
private slots:
    void on_BuyerLoginButton_clicked();
    void on_SellerLoginButton_clicked();
    void on_RegisterButton_clicked();
    void on_ForgotPassButton_clicked();
private:
    void GetAccPsw();
    virtual void ClearUI();
private:
    Ui::MainWindow *ui;
    const int &indexBuyerLoginWidget;
    const int &indexSellerLoginWidget;
    const int &indexRegisterWidget;
    QString userAcc;
    QString userPsw;

    CustomerImfor &custImfor;
    BossImfor &bossImfor;
};

#endif // MAINWINDOW_H
