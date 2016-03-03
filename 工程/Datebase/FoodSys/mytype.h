#ifndef MYTYPE
#define MYTYPE

#include<QWidget>
#include<QVector>

class QString;


enum AccountType
{
    Boss,
    Customer
};

struct Dishes
{
    QString name;
    QString dishesID;
    int price;
    int sales;
    QString dishesInt;
};
struct DishesItem
{
    Dishes dish;
    QString shopID;
    int num;
    int price;
};

struct UserImformation
{
    char *name;
    AccountType accType;
};
struct BossImfor
{
    QString acc;
    QString shopID;
    QString shopName;
    QString shopInt;
    QVector<Dishes> bossDish;
};
struct ShopNameIntGoodRate
{
    QString shopID;
    QString shopName;
    QString shopInt;
    int goodRate;
};
struct OrderImfor
{
    QString orderID;
    QString date;
    QString totalPrice;
};

struct CustomerImfor
{
    QString acc;
};
struct BossIDShopID
{
    QString bossID;
    QString shopID;
};
struct OrderIDPrice
{
    QString orderID;
    QString price;
};

class BaseImformation
{
public:
    int indexInWidget;
    int index_1;
    int index_2;
    int index_3;
public:
    void SetJumpIndex(int pre = -1,int next = -1,int ret = -1)
    {
        index_1 = pre;
        index_2 = next;
        index_3 = ret;
    }
public:
    virtual void ClearUI() = 0;
};

#endif // MYTYPE

