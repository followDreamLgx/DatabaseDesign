#include "shoopingcart.h"
#include "ui_shoopingcart.h"
#include"datebasecontrol.h"
#include<QTableWidgetItem>

ShoopingCart::ShoopingCart(CustomerImfor &custImforPara, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ShoopingCart),
    indexPayBillWidget(index_1),
    indexCanelBillWidget(index_2),
    indexReturnWidget(index_3),
    custImfor(custImforPara)
{
    ui->setupUi(this);
}

ShoopingCart::~ShoopingCart()
{
    delete ui;
}
void ShoopingCart::ClearUI()
{
    ui->DishDetail->clearContents();
}
void ShoopingCart::on_PayBillButton_clicked()
{
    QVector<DishesItem>::iterator ite = dishItems.begin();
    DatebaseControl::BookToOrder(dishItems,custImfor.acc);
    while(ite != dishItems.end())
    {
        DatebaseControl::BookToShopMenu(ite->dish.dishesID,ite->num);
        ite = dishItems.erase(ite);
    }
    ShowUI();
    emit CompletePayBill();
    emit display(indexPayBillWidget);
}
//---------------------------------------------------------
void ShoopingCart::on_CanelBillButton_clicked()
{
    emit display(indexCanelBillWidget);
}

void ShoopingCart::on_ReturnButton_clicked()
{
    emit display(indexReturnWidget);
}

void ShoopingCart::on_ThrowButton_1_clicked()
{
    TooMuch(1);
}

void ShoopingCart::on_ThrowButton_2_clicked()
{
    TooMuch(2);
}

void ShoopingCart::on_ThrowButton_3_clicked()
{
    TooMuch(3);
}

void ShoopingCart::on_ThrowButton_4_clicked()
{
    TooMuch(4);
}

void ShoopingCart::on_ThrowButton_5_clicked()
{
    TooMuch(5);
}

void ShoopingCart::on_ThrowButton_6_clicked()
{
    TooMuch(6);
}

void ShoopingCart::on_ThrowButton_7_clicked()
{
    TooMuch(7);
}

void ShoopingCart::on_ThrowButton_8_clicked()
{
    TooMuch(8);
}

void ShoopingCart::on_More_1_clicked()
{
    MoreDish(1);
}

void ShoopingCart::on_More_2_clicked()
{
    MoreDish(2);
}

void ShoopingCart::on_More_3_clicked()
{
    MoreDish(3);
}

void ShoopingCart::on_More_4_clicked()
{
    MoreDish(4);
}

void ShoopingCart::on_More_5_clicked()
{
    MoreDish(5);
}

void ShoopingCart::on_More_6_clicked()
{
    MoreDish(6);
}

void ShoopingCart::on_More_7_clicked()
{
    MoreDish(7);
}

void ShoopingCart::on_More_8_clicked()
{
    MoreDish(8);
}

void ShoopingCart::on_UpdateButton_clicked()
{

}
void ShoopingCart::ReceiverDishItems(QVector<DishesItem> dishItemsPara)
{
    dishItems = dishItemsPara;
    ShowUI();
}
void ShoopingCart::ShowUI()
{
    ClearUI();
    QVector<DishesItem>::iterator ite = dishItems.begin();
    int rowMax = ui->DishDetail->rowCount();
    rowMax--;
    int priceSum = 0;
    for(int row = 0;row < rowMax && ite != dishItems.end();++row,++ite)
    {
        ui->DishDetail->setItem(row,0,new QTableWidgetItem(ite->dish.name));
        ui->DishDetail->setItem(row,1,new QTableWidgetItem(QString::number(ite->dish.price)));
        ui->DishDetail->setItem(row,2,new QTableWidgetItem(QString::number(ite->num)));
        ui->DishDetail->setItem(row,3,new QTableWidgetItem(QString::number(ite->price)));
        priceSum += ite->price;
    }
    ui->DishDetail->setItem(rowMax,3,new QTableWidgetItem(QString::number(priceSum)));
}
void ShoopingCart::MoreDish(int num)
{
    QVector<DishesItem>::iterator ite = dishItems.begin();
    for(;num > 1 && ite != dishItems.end();--num,++ite);
    if(ite != dishItems.end())
    {
        ite->num++;
        ite->price += ite->dish.price;
    }
    ShowUI();
}
void ShoopingCart::TooMuch(int num)
{
    QVector<DishesItem>::iterator ite = dishItems.begin();
    for(;num > 1 && ite != dishItems.end();--num,++ite);
    if(ite != dishItems.end())
    {
        ite->num--;
        if(ite->num <= 0)
            dishItems.erase(ite);
        else
            ite->price -= ite->dish.price;
    }
    ShowUI();
}
