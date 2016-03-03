#include "addfood.h"
#include "ui_addfood.h"
#include"datebasecontrol.h"
#include<QDebug>
AddFood::AddFood(BossImfor &bossImforPara, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddFood),
    indexSureAddWidget(index_1),
    indexCanelAddWidget(index_2),
    bossImfor(bossImforPara)
{
    ui->setupUi(this);
}

AddFood::~AddFood()
{
    delete ui;
}

void AddFood::on_SureButton_clicked()
{

    DatebaseControl::AddFood(bossImfor.shopID,
                             ui->FoodNameEdit->text(),
                             ui->FoodPriceEdit->text(),
                             ui->FoodIntEdit->text());
    ClearUI();
    emit display(indexSureAddWidget);
}

void AddFood::on_CanelButton_clicked()
{
    ClearUI();
    emit display(indexCanelAddWidget);
}
void AddFood::ClearUI()
{
    ui->FoodNameEdit->clear();
    ui->FoodIntEdit->clear();
    ui->FoodPriceEdit->clear();
}

