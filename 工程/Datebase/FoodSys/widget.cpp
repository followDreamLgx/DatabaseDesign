#include<QStackedLayout>
#include<QVBoxLayout>
#include<QDebug>
#include "widget.h"
#include "ui_widget.h"

#include"addfood.h"

#include"goodbrowsing.h"
#include"mainwindow.h"
#include"myhistory.h"
#include"mystore.h"
#include"mytype.h"
#include"register.h"
#include"shoopingcart.h"
#include"storebrowsing.h"
#include"turnover.h"

#include"datebasecontrol.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    InitWidget();
    DatebaseControl::ConnectDB();
}
void Widget::InitWidget()
{
    setFixedSize(800,600);

    myAddFood =  new AddFood(bossImfom);
    myGoodBrowsing = new GoodBrowsing(custImfor);;
    myMainWindow = new MainWindow(bossImfom,custImfor);
    myHistory = new MyHistory(custImfor);
    myStore = new MyStore(bossImfom);
    myRegister = new Register();
    myShoopingCart = new ShoopingCart(custImfor);
    myStoreBrowing = new StoreBrowsing(custImfor);
    myTurnover = new Turnover(bossImfom);

    stackLayout = new QStackedLayout;
    boxLayout = new QVBoxLayout;
    //记录并捕获所在的位置
    myAddFood->indexInWidget = stackLayout->addWidget(myAddFood);
    myGoodBrowsing->indexInWidget = stackLayout->addWidget(myGoodBrowsing);
    myMainWindow->indexInWidget = stackLayout->addWidget(myMainWindow);
    myHistory->indexInWidget = stackLayout->addWidget(myHistory);
    myStore->indexInWidget = stackLayout->addWidget(myStore);
    myRegister->indexInWidget = stackLayout->addWidget(myRegister);
    myShoopingCart->indexInWidget = stackLayout->addWidget(myShoopingCart);
    myStoreBrowing->indexInWidget = stackLayout->addWidget(myStoreBrowing);
    myTurnover->indexInWidget = stackLayout->addWidget(myTurnover);
    stackLayout->setCurrentIndex(myMainWindow->indexInWidget);
    boxLayout->addLayout(stackLayout);
    setLayout(boxLayout);

    //设定跳转索引
    myAddFood->SetJumpIndex(myStore->indexInWidget,
                            myStore->indexInWidget,
                            myStore->indexInWidget);
    myGoodBrowsing->SetJumpIndex(myShoopingCart->indexInWidget,
                                 myShoopingCart->indexInWidget,
                                 myStoreBrowing->indexInWidget);
    myMainWindow->SetJumpIndex(myStoreBrowing->indexInWidget,
                               myStore->indexInWidget,
                               myRegister->indexInWidget);
    myHistory->SetJumpIndex(myStoreBrowing->indexInWidget,
                            myStoreBrowing->indexInWidget,
                            myStoreBrowing->indexInWidget);
    myStore->SetJumpIndex(myAddFood->indexInWidget,
                          myTurnover->indexInWidget,
                          myMainWindow->indexInWidget);
    myRegister->SetJumpIndex(myMainWindow->indexInWidget,
                             myMainWindow->indexInWidget,
                             myMainWindow->indexInWidget);
    myShoopingCart->SetJumpIndex(myGoodBrowsing->indexInWidget,
                                 myGoodBrowsing->indexInWidget,
                                 myGoodBrowsing->indexInWidget);
    myStoreBrowing->SetJumpIndex(myHistory->indexInWidget,
                                 myGoodBrowsing->indexInWidget,
                                 myMainWindow->indexInWidget);
    myTurnover->SetJumpIndex(myStore->indexInWidget,
                             myStore->indexInWidget,
                             myStore->indexInWidget);


    //设定各个页面的信号与布局控制器的联系
    connect(myAddFood,&AddFood::display,stackLayout,&QStackedLayout::setCurrentIndex);
    connect(myGoodBrowsing,&GoodBrowsing::display,stackLayout,&QStackedLayout::setCurrentIndex);
    connect(myMainWindow,&MainWindow::display,stackLayout,&QStackedLayout::setCurrentIndex);
    connect(myHistory,&MyHistory::display,stackLayout,&QStackedLayout::setCurrentIndex);
    connect(myStore,&MyStore::display,stackLayout,&QStackedLayout::setCurrentIndex);
    connect(myRegister,&Register::display,stackLayout,&QStackedLayout::setCurrentIndex);
    connect(myShoopingCart,&ShoopingCart::display,stackLayout,&QStackedLayout::setCurrentIndex);
    connect(myStoreBrowing,&StoreBrowsing::display,stackLayout,&QStackedLayout::setCurrentIndex);
    connect(myTurnover,&Turnover::display,stackLayout,&QStackedLayout::setCurrentIndex);

    //各个页面之间的通信
    connect(myStoreBrowing,&StoreBrowsing::retShopID,myGoodBrowsing,&GoodBrowsing::ReceiveShopID);
    connect(myGoodBrowsing,&GoodBrowsing::EmitDishesItems,myShoopingCart,&ShoopingCart::ReceiverDishItems);
    connect(myShoopingCart,&ShoopingCart::CompletePayBill,myGoodBrowsing,&GoodBrowsing::ReceiveCompletePayBill);
}

Widget::~Widget()
{
    delete ui;
}
void Widget::ClearUI()
{

}
void ReceiveShopID(const QString &recShopID)
{
    qDebug()<<"我收到消息了"<<endl;
}
