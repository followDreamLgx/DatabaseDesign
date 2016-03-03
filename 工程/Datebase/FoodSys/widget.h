#ifndef WIDGET_H
#define WIDGET_H

#include"mytype.h"
#include<QWidget>
#include<QVector>

namespace Ui {
class Widget;
}

class AddFood;
class GoodBrowsing;
class MainWindow;
class MyHistory;
class MyStore;
class Register;
class ShoopingCart;
class StoreBrowsing;
class Turnover;
class QStackedLayout;
class QVBoxLayout;

class Widget : public QWidget,public BaseImformation
{
    //Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    void InitWidget();


private:
    virtual void ClearUI();
private://界面跳转
    Ui::Widget *ui;
    AddFood *myAddFood;
    GoodBrowsing *myGoodBrowsing;
    MainWindow *myMainWindow;
    MyHistory *myHistory;
    MyStore *myStore;
    Register *myRegister;
    ShoopingCart *myShoopingCart;
    StoreBrowsing *myStoreBrowing;
    Turnover *myTurnover;
    QStackedLayout *stackLayout;
    QVBoxLayout *boxLayout;

private://
    BossImfor bossImfom;
    CustomerImfor custImfor;

};

#endif // WIDGET_H
