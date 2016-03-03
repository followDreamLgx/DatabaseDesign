#include "turnover.h"
#include "ui_turnover.h"
#include"datebasecontrol.h"
#include<QTableWidgetItem>

Turnover::Turnover(BossImfor &bossImforPara,QWidget *parent):
    QWidget(parent),
    ui(new Ui::Turnover),
    indexReturnWidget(index_3),
    bossImfor(bossImforPara)
{
    ui->setupUi(this);
    isUpdateInit = false;
}

Turnover::~Turnover()
{
    delete ui;
}
void Turnover::ClearUI()
{
    ui->TurnoverDetail->clearContents();
}
void Turnover::on_PreviousButton_clicked()
{
    PreviousPage();
}

void Turnover::on_NextButton_clicked()
{
    NextPage();
}

void Turnover::on_ReturnButton_clicked()
{
    emit display(indexReturnWidget);
}
void Turnover::ShowUI()
{
    if(isUpdateInit == false)
        return ;
    ClearUI();
    QVector<OrderIDPrice>::iterator ite = itePageBegin;
    int rowMax = ui->TurnoverDetail->rowCount();
    for(int row = 0;row < rowMax && ite != orderPrices.end();++row,++ite)
    {
        ui->TurnoverDetail->setItem(row,0,new QTableWidgetItem(ite->orderID));
        ui->TurnoverDetail->setItem(row,1,new QTableWidgetItem(ite->price));
    }
}

void Turnover::NextPage()
{
    if(isUpdateInit == false)
        return ;
    int rowMax = ui->TurnoverDetail->rowCount();
    QVector<OrderIDPrice>::iterator iteTemp = itePageBegin;
    for(int row = 0;row < rowMax && iteTemp != orderPrices.end();++row,++iteTemp);
    if(iteTemp != orderPrices.end())
        itePageBegin = iteTemp;
    ShowUI();
}

void Turnover::PreviousPage()
{
    if(isUpdateInit == false)
        return ;
    int rowMax = ui->TurnoverDetail->rowCount();
    QVector<OrderIDPrice>::iterator iteTemp = itePageBegin;
    for(int row = 0;row < rowMax && iteTemp != orderPrices.begin();++row,--iteTemp);
    itePageBegin = iteTemp;
    ShowUI();
}

void Turnover::BeginPage()
{
    isUpdateInit = true;
    orderPrices = DatebaseControl::FindShopOrder(bossImfor.shopID);
    itePageBegin = orderPrices.begin();
    ShowUI();
}

void Turnover::on_UpdateButton_clicked()
{
    BeginPage();
}
