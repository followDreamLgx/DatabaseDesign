#ifndef DATEBASECONTROL_H
#define DATEBASECONTROL_H

#include"mytype.h"
#include<QVector>
#include<QTableWidgetItem>
class QString;
class QStringList;

class DatebaseControl
{

public:
    DatebaseControl();
    static bool UserLogin(QString &userAcc, QString &userPass, AccountType userType);
    static bool RegisterNewUser(QString &acc, QString &pass, QString &name, QString &prefer);
    static bool RegisterNewUser(QString &acc,QString &pass, QString &address,QString &prefer,QString &storeName);
    static void ConnectDB();
    static QString FindShopID(const QString &bossAcc);
    static bool AddFood(const QString &shopID,const QString &foodName,const QString &foodPrice,const QString &foodInt);
    static QVector<Dishes> FindShopDishes(const QString &bossAcc);
    static QString FindShopName(const QString &shopID);
    static QString FindShopInt(const QString &shopID);
    static QVector<QString> FindAllBoss();
    static QVector<ShopNameIntGoodRate> FindShopBrowsingImfor();
    static bool UpdateShopInt(const QString &shopID,const QString &shopInt);
    static BossImfor FindBossImfor(QString &bossAcc);
    static QString FindBossIDFromShopID(const QString &shopID);
    static void BookToShopMenu(const QString &dishID, int num);
    static void BookToOrder(QVector<DishesItem> &dishItem,const QString &custID);
    static void BookToOrderMenu(QVector<DishesItem> &dishItem,const QString &bookIDWithMark);
    static Dishes FindDishFromDishID(const QString &dishID);
    static QString AddBothMark(const QString &para);
    static QVector<OrderImfor> FindPersonOrderImfor(const QString &custAcc);
    static QVector<OrderIDPrice> FindShopOrder(const QString shopID);
    static void AddEmployee(const QString &shopID,const QString &employeeName);
    static QString FindShopFirstEmploy(const QString &shopID);
    static bool DeleteDish(const QString &shopID, const QString &dishID);
private:
    static QString currentUser;

};

#endif // DATEBASECONTROL_H
