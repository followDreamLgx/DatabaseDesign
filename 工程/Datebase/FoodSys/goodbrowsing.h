#ifndef GOODBROWSING_H
#define GOODBROWSING_H

#include <QWidget>
#include"mytype.h"

namespace Ui {
class GoodBrowsing;
}

class GoodBrowsing :public QWidget, public BaseImformation
{
    Q_OBJECT

public:
    explicit GoodBrowsing(CustomerImfor &custImforPara,QWidget *parent = 0);
    ~GoodBrowsing();
signals:
    void display(int indexNum);
    void EmitDishesItems(QVector<DishesItem> &dishItemsPara);
private slots:
    void on_PayBillButton_clicked();
    void on_PreviousButton_clicked();
    void on_NextButton_clicked();
    void on_ReadOrderButton_clicked();
    void on_ReturnButton_clicked();
    void on_FoodToMenuButton_1_clicked();
    void on_FoodToMenuButton_2_clicked();
    void on_FoodToMenuButton_3_clicked();
    void on_FoodToMenuButton_4_clicked();
    void on_FoodToMenuButton_5_clicked();
    void on_FoodToMenuButton_6_clicked();
    void on_FoodToMenuButton_7_clicked();
    void on_FoodToMenuButton_8_clicked();
    void on_FoodToMenuButton_9_clicked();
    void on_FoodToMenuButton_10_clicked();
    void on_UpdateButton_clicked();
public slots:
    void ReceiveShopID(const QString &recShopID);
    void ReceiveCompletePayBill();
private:
    virtual void ClearUI();
    void ShowUI();
    void SelectGood(int num);
    void SetPageBegin();
    QVector<DishesItem>::iterator IsDishInDishItem(const QString &dishID);
private:
    Ui::GoodBrowsing *ui;
    const int &indexReadCartWidget;
    const int &indexPayBillWidget;
    const int &indexReturnWidget;
    CustomerImfor &custImfor;
    BossImfor bossImfor;
    QVector<Dishes>::iterator itePageBegin;
    QVector<DishesItem> dishItems;
    bool isUpdateInit;
};

#endif // GOODBROWSING_H
