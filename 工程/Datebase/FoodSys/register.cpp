#include "register.h"
#include "ui_register.h"
#include"datebasecontrol.h"

Register::Register(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Register),
    indexSureWidget(index_1),
    indexReturnWidget(index_3)
{

    ui->setupUi(this);
}

Register::~Register()
{
    delete ui;


}
void Register::ClearUI()
{
    ui->AccountEdit->clear();
    ui->PasswordEdit->clear();
    ui->SurePasswordEdit->clear();
    ui->PreferenceEdit->clear();
    ui->AddressEdit->clear();
    ui->StoreNameEdit->clear();
}
void Register::on_SureButton_clicked()
{
    QString account = ui->AccountEdit->text();
    QString psw = ui->PasswordEdit->text();
    QString surePsw = ui->SurePasswordEdit->text();
    QString preference = ui->PreferenceEdit->text();
    QString address = ui->AddressEdit->text();
    QString storeName = ui->StoreNameEdit->text();
    if(psw == surePsw)
    {
        if(storeName == "")
        {
            DatebaseControl::RegisterNewUser(account,psw,surePsw,preference);
        }
        else
        {
            DatebaseControl::RegisterNewUser(account,psw,surePsw,preference,storeName);
        }
        ClearUI();
        emit display(indexSureWidget);
    }
    else
        ClearUI();
}

void Register::on_ReturnButton_clicked()
{
    emit display(indexReturnWidget);
}

void Register::on_UpdateButton_clicked()
{

}
