#include "storebrowsing.h"
#include "ui_storebrowsing.h"
#include"datebasecontrol.h"
#include"datebasecontrol.h"

StoreBrowsing::StoreBrowsing(CustomerImfor &custImforPara, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StoreBrowsing),
    indexHistoryBillWidget(index_1),
    indexEnterStoreWidget(index_2),
    indexReturnWidget(index_3),
    custImfor(custImforPara)
{
    ui->setupUi(this);
    isUpdateInit = false;
}

StoreBrowsing::~StoreBrowsing()
{
    delete ui;
}
void StoreBrowsing::ClearUI()
{
    ui->ShopDetail->clearContents();
}
void StoreBrowsing::on_ReadHistoryButton_clicked()
{
    emit display(indexHistoryBillWidget);
}

void StoreBrowsing::on_PreviousButton_clicked()
{

}

void StoreBrowsing::on_NextButton_clicked()
{

}

void StoreBrowsing::on_ReturnButton_clicked()
{

    emit display(indexReturnWidget);
}

void StoreBrowsing::on_EnterStore_1_clicked()
{
    if(true == SelectShop(1))
        emit display(indexEnterStoreWidget);
}

void StoreBrowsing::on_EnterStore_2_clicked()
{
    if(true == SelectShop(2))
        emit display(indexEnterStoreWidget);
}

void StoreBrowsing::on_EnterStore_3_clicked()
{
    if(true == SelectShop(3))
        emit display(indexEnterStoreWidget);
}

void StoreBrowsing::on_EnterStore_4_clicked()
{
    if(true == SelectShop(4))
        emit display(indexEnterStoreWidget);
}

void StoreBrowsing::on_EnterStore_5_clicked()
{
    if(true == SelectShop(5))
        emit display(indexEnterStoreWidget);
}

void StoreBrowsing::on_EnterStore_6_clicked()
{
    if(true == SelectShop(6))
        emit display(indexEnterStoreWidget);
}

void StoreBrowsing::on_EnterStore_7_clicked()
{
    if(true == SelectShop(7))
        emit display(indexEnterStoreWidget);
}

void StoreBrowsing::on_EnterStore_8_clicked()
{
    if(true == SelectShop(8))
        emit display(indexEnterStoreWidget);
}

void StoreBrowsing::on_EnterStore_9_clicked()
{
    if(true == SelectShop(9))
        emit display(indexEnterStoreWidget);
}

void StoreBrowsing::on_EnterStore_10_clicked()
{
    if(true == SelectShop(10))
        emit display(indexEnterStoreWidget);
}

void StoreBrowsing::on_UpdateButton_clicked()
{
    //刷新页面后会从头开始
    ClearUI();
    SetPageBegin();
    ShowUI();
}
void StoreBrowsing::SetPageBegin()
{
    shopBrowImfor = DatebaseControl::FindShopBrowsingImfor();
    itePageBegin = shopBrowImfor.begin();
    isUpdateInit = true;
}

void StoreBrowsing::SetPageNext()
{
    if(isUpdateInit == false)
        return;
    QVector<ShopNameIntGoodRate>::iterator temp = itePageBegin;
    int row = 0;
    int rowMax = ui->ShopDetail->rowCount();
    for(;row < rowMax && temp != shopBrowImfor.end();++row,++temp);
    if(temp != shopBrowImfor.end())
        itePageBegin = temp;
    ShowUI();
}

void StoreBrowsing::SetPagePrevious()
{
    if(isUpdateInit == false)
        return;
    QVector<ShopNameIntGoodRate>::iterator temp = itePageBegin;
    int row = 0;
    int rowMax = ui->ShopDetail->rowCount();
    for(;row < rowMax && temp != shopBrowImfor.begin();++row,--temp);
    ShowUI();
}

void StoreBrowsing::JumpOthers()
{
    SetPageBegin();
    ShowUI();
}
void StoreBrowsing::ShowUI()
{
    if(isUpdateInit == false)
        return;
    QVector<ShopNameIntGoodRate>::iterator ite = shopBrowImfor.begin();
    int rowMax = ui->ShopDetail->rowCount();
    for(int row = 0;ite != shopBrowImfor.end() && row < rowMax;++row,++ite)
    {
        ui->ShopDetail->setItem(row,0,new QTableWidgetItem(ite->shopName));
        ui->ShopDetail->setItem(row,1,new QTableWidgetItem(ite->shopInt));
        ui->ShopDetail->setItem(row,2,new QTableWidgetItem(QString::number(ite->goodRate)));
    }
}
bool StoreBrowsing::SelectShop(int num)
{
    if(isUpdateInit == false)
        return false;
    QVector<ShopNameIntGoodRate>::iterator temp = itePageBegin;
    for(;temp != shopBrowImfor.end() && num > 1;++temp,--num);
    if(temp != shopBrowImfor.end())
    {
        QString bossAcc = DatebaseControl::FindBossIDFromShopID(temp->shopID);
        emit retShopID(bossAcc);
        return true;
    }
    else
        return false;
}
