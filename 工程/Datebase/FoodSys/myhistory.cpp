#include "myhistory.h"
#include "ui_myhistory.h"
#include"datebasecontrol.h"
#include<QTableWidgetItem>

MyHistory::MyHistory(CustomerImfor &custImforPara,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyHistory),
    indexReturnWidget(index_3),
    custImfor(custImforPara)
{
    ui->setupUi(this);
    isUpdateInit = false;
}

MyHistory::~MyHistory()
{
    delete ui;
}
void MyHistory::ClearUI()
{
    ui->HistoryDetail->clearContents();
}

void MyHistory::on_PreviousButton_clicked()
{
    PreviousPage();
}

void MyHistory::on_NextButton_clicked()
{
    NextPage();
}

void MyHistory::on_ReturnButton_clicked()
{
    emit display(indexReturnWidget);
}

void MyHistory::on_UpdateButton_clicked()
{
    orderImfors = DatebaseControl::FindPersonOrderImfor(custImfor.acc);
    SetPageBegin();
    ShowUI();
}
void MyHistory::ShowUI()
{
    if(isUpdateInit == false)
        return ;
    ClearUI();
    int rowMax = ui->HistoryDetail->rowCount();
    QVector<OrderImfor>::iterator iteTemp = itePageBegin;
    for(int row = 0;row < rowMax && iteTemp != orderImfors.end();++row,++iteTemp)
    {
        ui->HistoryDetail->setItem(row,0,new QTableWidgetItem(iteTemp->date));
        ui->HistoryDetail->setItem(row,1,new QTableWidgetItem(iteTemp->orderID));
        ui->HistoryDetail->setItem(row,2,new QTableWidgetItem(iteTemp->totalPrice));
    }
}
void MyHistory::SetPageBegin()
{
    isUpdateInit = true;
    itePageBegin = orderImfors.begin();
}

void MyHistory::NextPage()
{
    if(isUpdateInit == false)
        return ;
    int rowMax = ui->HistoryDetail->rowCount();
    QVector<OrderImfor>::iterator iteTemp = itePageBegin;
    for(int row = 0;row < rowMax && iteTemp != orderImfors.end();++row,++iteTemp);
    if(iteTemp != orderImfors.end())
        itePageBegin = iteTemp;
    ShowUI();
}

void MyHistory::PreviousPage()
{
    if(isUpdateInit == false)
        return ;
    int rowMax = ui->HistoryDetail->rowCount();
    QVector<OrderImfor>::iterator iteTemp = itePageBegin;
    for(int row = 0;row < rowMax && iteTemp != orderImfors.begin();++row,--iteTemp);
    itePageBegin = iteTemp;
    ShowUI();
}
