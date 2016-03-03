#include "mystore.h"
#include "ui_mystore.h"
#include"datebasecontrol.h"

MyStore::MyStore(BossImfor &bossImforPara, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyStore),
    indexAddMenuWidget(index_1),
    indexTurnoverWidget(index_2),
    indexReturnWidget(index_3),
    bossImfor(bossImforPara)
{
    ui->setupUi(this);
    isUpdateInit = false;
}

MyStore::~MyStore()
{
    delete ui;
}
void MyStore::ClearUI()
{
    ui->DishesDetail->clearContents();
    ui->EmployeeEdit->clear();
    ui->HighOpitionEdit->clear();
    ui->IntroductionEdit->clear();
    ui->StoreNameEdit->clear();
}
void MyStore::ShowUI()
{
    if(isUpdateInit == false)
        return ;
    ClearUI();
    QVector<Dishes>::iterator ite = itePageBegin;
    int row;
    for(row = 0;ite != bossImfor.bossDish.end();row++)
    {
        ui->DishesDetail->setItem(row,0,new QTableWidgetItem(ite->name));
        ui->DishesDetail->setItem(row,1,new QTableWidgetItem(QString::number(ite->price)));
        ui->DishesDetail->setItem(row,2,new QTableWidgetItem(ite->dishesInt));
        ++ite;
    }
    ui->StoreNameEdit->setText(bossImfor.shopName);
    ui->IntroductionEdit->setText(bossImfor.shopInt);
}

void MyStore::on_AddFoodToMenuButton_clicked()
{
    emit display(indexAddMenuWidget);
}
void MyStore::on_ReadTurnoverButton_clicked()
{
    emit display(indexTurnoverWidget);
}

void MyStore::on_ReturnButton_clicked()
{
    emit display(indexReturnWidget);
}

void MyStore::on_Delete_1_clicked()
{
    DeleteDish(1);
}

void MyStore::on_Delete_2_clicked()
{
    DeleteDish(2);
}

void MyStore::on_Delete_3_clicked()
{
    DeleteDish(3);
}

void MyStore::on_Delete_4_clicked()
{
    DeleteDish(4);
}

void MyStore::on_Delete_5_clicked()
{
    DeleteDish(5);
}

void MyStore::on_Delete_6_clicked()
{
    DeleteDish(6);
}

void MyStore::on_Delete_7_clicked()
{
    DeleteDish(7);
}

void MyStore::on_Delete_8_clicked()
{
    DeleteDish(8);
}
void MyStore::DeleteDish(int num)
{
    if(isUpdateInit == false)
        return ;

    int rowMax = ui->DishesDetail->rowCount();
    QVector<Dishes>::iterator iteTemp = itePageBegin;
    for(;num > 1 && iteTemp != bossImfor.bossDish.end();)
    {
        --num;
        ++iteTemp;
    }
    if(iteTemp != bossImfor.bossDish.end())
    {
        if(true == DatebaseControl::DeleteDish(bossImfor.shopID,iteTemp->dishesID))
        {
            //bossImfor.bossDish.erase(iteTemp);
            SetPageBegin();
            ShowUI();
        }
    }
}


void MyStore::on_UpdateButton_clicked()
{
    SetPageBegin();
    ShowUI();
}

void MyStore::on_IntroductionEdit_textEdited(const QString &arg1)
{
    DatebaseControl::UpdateShopInt(bossImfor.shopID,arg1);
    QString temp(arg1);
    bossImfor.shopInt = temp;
}

void MyStore::on_AddEmployeeButton_clicked()
{
    QString employeeName = ui->EmployeeEdit->text();
    DatebaseControl::AddEmployee(bossImfor.shopID,employeeName);
}
void MyStore::SetPageBegin()
{
    isUpdateInit = true;
    bossImfor.bossDish = DatebaseControl::FindShopDishes(bossImfor.acc);
    itePageBegin = bossImfor.bossDish.begin();
}

void MyStore::NextPage()
{
    if(isUpdateInit == false)
        return ;
    int rowMax = ui->DishesDetail->rowCount();
    QVector<Dishes>::iterator iteTemp = itePageBegin;
    for(int row = 0;row < rowMax && iteTemp != bossImfor.bossDish.end();++row,++iteTemp);
    if(iteTemp != bossImfor.bossDish.end())
        itePageBegin = iteTemp;
    ShowUI();
}

void MyStore::PreviousPage()
{
    if(isUpdateInit == false)
        return ;
    int rowMax = ui->DishesDetail->rowCount();
    QVector<Dishes>::iterator iteTemp = itePageBegin;
    for(int row = 0;row < rowMax && iteTemp != bossImfor.bossDish.begin();++row,--iteTemp);
    itePageBegin = iteTemp;
    ShowUI();
}
