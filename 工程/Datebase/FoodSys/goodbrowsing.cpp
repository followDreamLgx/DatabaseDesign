#include "goodbrowsing.h"
#include "ui_goodbrowsing.h"

#include"datebasecontrol.h"
#include<QDebug>

GoodBrowsing::GoodBrowsing(CustomerImfor &custImforPara, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GoodBrowsing),
    indexReadCartWidget(index_1),
    indexPayBillWidget(index_2),
    indexReturnWidget(index_3),
    custImfor(custImforPara)
{
    ui->setupUi(this);
    isUpdateInit = false;
}

GoodBrowsing::~GoodBrowsing()
{
    delete ui;

}
void GoodBrowsing::ClearUI()
{
    ui->FoodDetail->clearContents();
}

/*
 * 页面跳转的信号函数
 */
void GoodBrowsing::on_PayBillButton_clicked()
{
    EmitDishesItems(dishItems);
    emit display(indexPayBillWidget);
}
void GoodBrowsing::on_ReadOrderButton_clicked()
{
    EmitDishesItems(dishItems);
    emit display(indexReadCartWidget);
}

void GoodBrowsing::on_ReturnButton_clicked()
{
    emit display(indexReturnWidget);
}

void GoodBrowsing::on_PreviousButton_clicked()
{

}

void GoodBrowsing::on_NextButton_clicked()
{

}


void GoodBrowsing::on_FoodToMenuButton_1_clicked()
{
    SelectGood(1);
}

void GoodBrowsing::on_FoodToMenuButton_2_clicked()
{
    SelectGood(2);
}

void GoodBrowsing::on_FoodToMenuButton_3_clicked()
{
    SelectGood(3);
}

void GoodBrowsing::on_FoodToMenuButton_4_clicked()
{
    SelectGood(4);
}

void GoodBrowsing::on_FoodToMenuButton_5_clicked()
{
    SelectGood(5);
}

void GoodBrowsing::on_FoodToMenuButton_6_clicked()
{
    SelectGood(6);
}

void GoodBrowsing::on_FoodToMenuButton_7_clicked()
{
    SelectGood(7);
}

void GoodBrowsing::on_FoodToMenuButton_8_clicked()
{
    SelectGood(8);
}

void GoodBrowsing::on_FoodToMenuButton_9_clicked()
{
    SelectGood(9);
}

void GoodBrowsing::on_FoodToMenuButton_10_clicked()
{
    SelectGood(10);
}

void GoodBrowsing::on_UpdateButton_clicked()
{
    ShowUI();
}
void GoodBrowsing::ReceiveShopID(const QString &recShopID)
{
    qDebug()<<endl<<"receiveShopID  "<<recShopID<<endl;
    QString shopIDTemp(recShopID);
    bossImfor = DatebaseControl::FindBossImfor(shopIDTemp);
    SetPageBegin();
    ShowUI();
}
void GoodBrowsing::ShowUI()
{
    ClearUI();
    int row;
    QVector<Dishes>::iterator ite = itePageBegin;
    int rowMax = ui->FoodDetail->rowCount();
    for(row = 0;row < rowMax && ite != bossImfor.bossDish.end();++ite,++row)
    {
        ui->FoodDetail->setItem(row,0,new QTableWidgetItem(ite->name));
        ui->FoodDetail->setItem(row,1,new QTableWidgetItem(QString::number(ite->price)));
        ui->FoodDetail->setItem(row,2,new QTableWidgetItem(QString::number(ite->sales)));
    }
}

void GoodBrowsing::SelectGood(int num)
{
    if(isUpdateInit == false)
        return ;

    int rowMax = ui->FoodDetail->rowCount();
    QVector<Dishes>::iterator iteTemp = itePageBegin;
    for(;num > 1 && iteTemp != bossImfor.bossDish.end();)
    {
        --num;
        ++iteTemp;
    }
    if(iteTemp != bossImfor.bossDish.end())
    {
        QVector<DishesItem>::iterator iteInDishItem;
        iteInDishItem = IsDishInDishItem(iteTemp->dishesID);
        if(iteInDishItem == dishItems.end())
        {
            DishesItem  dishTemp;
            dishTemp.dish.dishesID = iteTemp->dishesID;
            dishTemp.dish.price = iteTemp->price;
            dishTemp.dish.name = iteTemp->name;
            dishTemp.num = 1;
            dishTemp.price = iteTemp->price;
            dishTemp.shopID = bossImfor.shopID;
            dishItems.push_back(dishTemp);
            qDebug()<<endl<<"添加了新的菜到菜单"<<endl;
        }
        else
        {
            iteInDishItem->num += 1;
            iteInDishItem->price += iteInDishItem->dish.price;
            qDebug()<<endl<<"原来的菜单上添加"<<endl;
        }
    }
}

void GoodBrowsing::SetPageBegin()
{
    itePageBegin = bossImfor.bossDish.begin();
    isUpdateInit = true;
}
QVector<DishesItem>::iterator GoodBrowsing::IsDishInDishItem(const QString &dishID)
{
    QVector<DishesItem>::iterator ite = dishItems.begin();
    while(ite != dishItems.end())
    {
        if(ite->dish.dishesID == dishID)
            return ite;
        ++ite;
    }
    return ite;
}
void GoodBrowsing::ReceiveCompletePayBill()
{
    dishItems.clear();
    qDebug()<<"清空了goodBrowsing中的内容"<<endl;
}
