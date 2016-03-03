#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"datebasecontrol.h"

MainWindow::MainWindow(BossImfor &bossImforPara,CustomerImfor &custImforPara,QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    indexBuyerLoginWidget(index_1),
    indexSellerLoginWidget(index_2),
    indexRegisterWidget(index_3),
    bossImfor(bossImforPara),
    custImfor(custImforPara)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::ClearUI()
{
    ui->LoginEdit->clear();
    ui->PasswordEdit->clear();
}

void MainWindow::on_BuyerLoginButton_clicked()
{
    GetAccPsw();
    if(true == DatebaseControl::UserLogin(userAcc,userPsw,Customer))
    {
        custImfor.acc = userAcc;
        ClearUI();
        emit display(indexBuyerLoginWidget);
    }
    else
    {
        ui->LoginEdit->clear();
        ui->PasswordEdit->clear();
    }
}

void MainWindow::on_SellerLoginButton_clicked()
{
    GetAccPsw();
    if(true == DatebaseControl::UserLogin(userAcc,userPsw,Boss))
    {
        bossImfor.acc = userAcc;
        bossImfor.shopID = DatebaseControl::FindShopID(userAcc);
        bossImfor.bossDish = DatebaseControl::FindShopDishes(bossImfor.acc);
        bossImfor.shopName = DatebaseControl::FindShopName(bossImfor.shopID);
        bossImfor.shopInt = DatebaseControl::FindShopInt(bossImfor.shopID);
        ClearUI();
        emit display(indexSellerLoginWidget);
    }
    else
    {
        ui->LoginEdit->clear();
        ui->PasswordEdit->clear();
    }
}

void MainWindow::on_RegisterButton_clicked()
{
    emit display(indexRegisterWidget);
}
/*
 * 还没有实现的功能
 */
void MainWindow::on_ForgotPassButton_clicked()
{

}
void MainWindow::GetAccPsw()
{
    userAcc = ui->LoginEdit->text();
    userPsw = ui->PasswordEdit->text();
}
