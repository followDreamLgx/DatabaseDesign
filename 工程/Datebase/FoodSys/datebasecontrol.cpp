#include "datebasecontrol.h"
#include<QtSql/QSqlDatabase>
#include<QStringList>
#include<QSqlError>
#include<QSqlQuery>
#include <QVariant>
#include<QDebug>
#include<QTime>
#include<QDateTime>
#include<windows.h>
using namespace std;

DatebaseControl::DatebaseControl()
{
    ConnectDB();

}

void DatebaseControl::ConnectDB()
{
    QString serverName = "霸气侧漏\\SQL2008";
    QString dbName = "Diet";
    QSqlDatabase myDB = QSqlDatabase::addDatabase("QODBC");//连接到ODBC驱动
    QString dsn = QString("Driver={SQL Server};Server=%1;Database=%2;Trusted_Connection=yes").arg(serverName).arg(dbName);
    myDB.setDatabaseName(dsn);
    if(myDB.open())
    {
        printf("connect to server successfully\n");
        //myDB.close();
    }
    else
    {
        printf("connect to server failed\n");
        printf("%s\n",myDB.lastError().text().toLatin1().data());
    }
}
bool DatebaseControl::UserLogin(QString &userAcc,QString &userPass,AccountType userType)
{
    QSqlQuery query;
    if(userType == Boss)
    {
        if(!query.exec("select * from merchant"))
        {
            printf("merchant false");
        }
        else
            printf("merchant success");
    }
    else if(userType == Customer)
    {
        if(!query.exec("select * from customer"))
        {
            printf("customer false");
        }
        else
            printf("customer success");
    }
    while(query.next())
    {
        QString acc = query.value(0).toString();
        QString psw = query.value(1).toString();
        acc = acc.trimmed();
        psw = psw.trimmed();
        if(acc == userAcc && psw == userPass)
            return true;
    }
    return false;
}


//注册新的用户
bool DatebaseControl::RegisterNewUser(QString &acc,QString &pass,QString &address,QString &prefer)
{

    QSqlQuery query;
    query.prepare("Insert into customer(CustomerID,CustomerPwd,Address,Preference)"
                  "values(:CustomerID,:CustomerPwd,:Address,:Preference)");
    query.addBindValue(acc);
    query.addBindValue(pass);
    query.addBindValue(address);
    query.addBindValue(prefer);
    /*这是Orical的风格
    query.bindValue(":CustomerID",acc);
    query.bindValue("CustomerPwd",pass);
    query.bindValue(":Addredd",address);
    query.bindValue(":Preference",prefer);*/
    if(!query.exec())
    {
        qDebug()<<"注册用户失败"<<endl;
        return true;
    }
    else
    {
        qDebug()<<"成功注册"<<endl;
        return false;
    }
}

bool DatebaseControl::RegisterNewUser(QString &acc,QString &pass, QString &address,QString &prefer,QString &storeName)
{
    QSqlQuery storeQuery;
    QSqlQuery query;
    storeQuery.prepare("Insert into shop(ShopID,ShopName,ShopInt,GoodRate,AvgRate,PoorRate)"
                       "values(:ShopID,:ShopName,:ShopInt,:GoodRate,:AvgRate,:PoorRate)");
    QString shopID = QTime::currentTime().toString();
    storeQuery.addBindValue(shopID);
    storeQuery.addBindValue(storeName);
    storeQuery.addBindValue("");
    storeQuery.addBindValue("");
    storeQuery.addBindValue("");
    storeQuery.addBindValue("");
    if(!storeQuery.exec())//增加商店
        qDebug()<<"无法增加商店"<<endl;
    else
        qDebug()<<"成功增加商店"<<endl;
    query.prepare("Insert into merchant(MerchantID,MerchantPwd,ShopID)"
                  "values(:MerchantID,:MerchantPwd,:ShopID)");
    query.addBindValue(acc);
    query.addBindValue(pass);
    query.addBindValue(shopID);
    if(!query.exec())
    {
        qDebug()<<"注册老板失败"<<endl;
        return true;
    }
    else
    {
        qDebug()<<"成功注册老板"<<endl;
        return false;
    }
}

QString DatebaseControl::FindShopID(const QString &bossAcc)
{
    QSqlQuery query;
    QString select("select ShopID from merchant where MerchantID = \'");
    select += bossAcc;
    select += "\'";
    //query.prepare(select);
    if(!query.exec(select))
    {
        qDebug()<<"通过老板账号没有找到商店编号"<<endl;
    }
    else
        qDebug()<<"找到该老板商店编号"<<endl;
    query.next();
    QString ret = query.value(0).toString();
    return ret.trimmed();
}
//为某个老板的菜单添加新的菜式
bool DatebaseControl::AddFood(const QString &shopID, const QString &foodName,
                              const QString &foodPrice,const QString &foodInt)
{
    //添加至总菜单
    QSqlQuery addToMenu;
    addToMenu.prepare("insert into menu(DishesID,DishesName)"
                    "values(:DishesID,:DishesName)");
    QDateTime dishesID = QDateTime::currentDateTime();
    addToMenu.addBindValue(dishesID.toString());
    addToMenu.addBindValue(foodName);
    if(!addToMenu.exec())
    {
        qDebug()<<"add to total menu failed"<<endl;
        return false;
    }
    else
        qDebug()<<"add to total menu success"<<endl;
    //添加至商店_菜单
    QSqlQuery addToStoreMenu;

    if(addToStoreMenu.prepare("Insert into shop_menu(ShopID,DishesID,Price,Sales,DishesInt)"
                           "values(:ShopID,:DishesID,:Price,:Sales,:DishesInt)"))
        qDebug()<<"add to shop_menu prepare success"<<endl;
    else
    {
        qDebug()<<"add to shop_menu prepare failed"<<endl;
        return false;
    }
    addToStoreMenu.addBindValue(shopID);
    addToStoreMenu.addBindValue(dishesID.toString());
    addToStoreMenu.addBindValue(foodPrice);
    addToStoreMenu.addBindValue(0);
    addToStoreMenu.addBindValue(foodInt);
    if(!addToStoreMenu.exec())
    {
        qDebug()<<"add to shop_menu failed"<<endl;
        return false;
    }
    else
        qDebug()<<"add to shop_menu success"<<endl;
    return true;
}

QVector<Dishes> DatebaseControl::FindShopDishes(const QString &bossAcc)
{
    QSqlQuery query;
    QString opera("exec MerchantShopMenu \'");
    opera += bossAcc;
    opera += "\'";
    QVector<Dishes> dishNameRet;
    if(!query.exec(opera))
    {
        qDebug()<<endl<<"没有这个老板"<<endl;
        return dishNameRet;
    }
    else
    {
        qDebug()<<endl<<"成功找到商店的菜"<<endl;

        Dishes dishTemp;
        while(query.next())
        {
            dishTemp.name = query.value(0).toString().trimmed();
            dishTemp.dishesID = query.value(1).toString().trimmed();
            QString temp = query.value(2).toString().trimmed();
            dishTemp.price = temp.toInt();
            dishTemp.sales = query.value(3).toInt();
            dishTemp.dishesInt = query.value(4).toString().trimmed();
            dishNameRet.push_back(dishTemp);
        }
        return dishNameRet;
    }
}
QString DatebaseControl::FindShopName(const QString &shopID)
{
    QSqlQuery query;
    QString opera("select ShopName from shop where ShopID = \'");
    opera += shopID;
    opera += "\'";
    QString ret;
    if(!query.exec(opera))
    {
        qDebug()<<endl<<"没有这家店"<<endl;
        qDebug()<<shopID<<endl;
        return ret;
    }
    else
    {
        qDebug()<<endl<<"找到了店的名字"<<endl;
        query.next();
        return ret = query.value(0).toString().trimmed();
    }
}
QString DatebaseControl::FindShopInt(const QString &shopID)
{
    QSqlQuery query;
    QString opera("select ShopInt from shop where ShopID = \'");
    opera += shopID;
    opera += "\'";
    QString ret;
    if(!query.exec(opera))
    {
        qDebug()<<endl<<"没有这家店"<<endl;
        qDebug()<<shopID<<endl;
        return ret;
    }
    else
    {
        qDebug()<<endl<<"找到了店的名字"<<endl;
        query.next();
        return ret = query.value(0).toString().trimmed();
    }
}
QVector<QString> DatebaseControl::FindAllBoss()
{
    QVector<QString> ret;
    QSqlQuery query;
    if(!query.exec("select * from merchant"))
        qDebug()<<"找不到任何一个老板"<<endl;
    else
        qDebug()<<"老板找到了"<<endl;
    while(query.next())
    {
        QString temp = query.value(0).toString();
        ret.push_back(temp);
    }
    return ret;
}
QVector<ShopNameIntGoodRate> DatebaseControl::FindShopBrowsingImfor()
{
    QSqlQuery query;
    QString opera("select ShopID,ShopName,ShopInt,GoodRate from shop");
    if(!query.exec(opera))
        qDebug()<<endl<<"find shop browsing failed"<<endl;
    else
        qDebug()<<endl<<"find shop browsing success"<<endl;
    QVector<ShopNameIntGoodRate> ret;
    while(query.next())
    {
        ShopNameIntGoodRate temp;
        temp.shopID = query.value(0).toString().trimmed();
        temp.shopName = query.value(1).toString().trimmed();
        temp.shopInt = query.value(2).toString().trimmed();
        temp.goodRate = query.value(3).toString().trimmed().toInt();
        ret.push_back(temp);
    }
    return ret;
}
bool DatebaseControl::UpdateShopInt(const QString &shopID,const QString &shopInt)
{
    QSqlQuery query;
    QString opera("update shop set shopInt = '");
    opera = opera + shopInt + "\' ";
    QString condition(" where ShopID = '");
    condition = condition + shopID + "\'";
    opera += condition;
    if(!query.exec(opera))
    {
        qDebug()<<"update ShopID failed"<<endl;
        return false;
    }
    else
    {
        qDebug()<<"update ShopID success"<<endl;
        return true;
    }
}
BossImfor DatebaseControl::FindBossImfor(QString &bossAcc)
{
    BossImfor bossImfor;
    bossImfor.acc = bossAcc;
    bossImfor.bossDish = FindShopDishes(bossAcc);
    bossImfor.shopID = FindShopID(bossAcc);
    bossImfor.shopName = FindShopName(bossImfor.shopID);
    bossImfor.shopInt = FindShopInt(bossImfor.shopID);
    return bossImfor;
}
QString DatebaseControl::FindBossIDFromShopID(const QString &shopID)
{
    QSqlQuery query;
    QString opera(" select MerchantID "
                  " from Merchant,shop "
                  " where Merchant.ShopID = shop.ShopID "
                  " and shop.ShopID = \'");
    opera = opera + shopID + "\'";
    QString ret;
    if(!query.exec(opera))
    {
       qDebug()<<"通过商店ID没有找到了老板ID"<<endl;
        return ret;
    }
    else
        qDebug()<<"通过商店ID找到了老板ID"<<endl;
    query.next();
    ret = query.value(0).toString().trimmed();
    return ret;
}
void DatebaseControl::BookToShopMenu(const QString &dishID,int num)
{
    QSqlQuery query;
    Dishes dishTemp = FindDishFromDishID(dishID);
    dishTemp.sales += num;
    QString opera("update shop_menu"
                  " set Sales = ");
    QString condition("where DishesID = \'");
    opera += QString::number(dishTemp.sales);
    condition = condition + dishID + "\'";
    opera += condition;
    if(!query.exec(opera))
        qDebug()<<"更新销售量失败"<<endl;
    else
        qDebug()<<"更新了销售量"<<endl;
}
Dishes DatebaseControl::FindDishFromDishID(const QString &dishID)
{
    QSqlQuery query;
    QString opera(" select DishesName,DishesID,Price,DishesInt,Sales from DishImfor"
                  " where DishesID = '");
    opera = opera + dishID + "\'";
    Dishes ret;
    if(!query.exec(opera))
    {
        qDebug()<<"通过菜式ID找不到菜"<<endl;
        return ret;
    }
    else
        qDebug()<<"通过菜式ID找到菜"<<endl;
    query.next();
    ret.dishesID = dishID;
    ret.name = query.value(0).toString().trimmed();
    ret.price = query.value(2).toString().trimmed().toInt();
    ret.dishesInt = query.value(3).toString().trimmed();
    ret.sales = query.value(4).toString().trimmed().toInt();
    return ret;
}
void DatebaseControl::BookToOrder(QVector<DishesItem> &dishItem,const QString &custID)
{
    QSqlQuery query;
    QString operaBegin("insert into orders values(");
    QString opera = operaBegin;
    QDateTime bookIDTime = QDateTime::currentDateTime();
    QString bookID = bookIDTime.toString();//订单号
    QVector<DishesItem>::iterator ite = dishItem.begin();
    int bookPriceSum = 0;
    while(ite != dishItem.end())
    {
        bookPriceSum += ite->price;
        ++ite;
    }//计算订单总价
    QString priceSum = QString::number(bookPriceSum);
    QString &shopID = dishItem.begin()->shopID;
    QString employeeID = DatebaseControl::FindShopFirstEmploy(shopID);
    QString evaluate;
    QString custmerID;
    bookID = AddBothMark(bookID);
    //priceSum = AddBothMark(priceSum);
    shopID = AddBothMark(shopID);
    custmerID = AddBothMark(custID);
    employeeID = AddBothMark(employeeID);
    evaluate = AddBothMark(evaluate);
    opera += bookID;
    opera += ",";
    opera += priceSum;
    opera += ",";
    opera += shopID;
    opera += ",";
    opera += custmerID;
    opera += ",";
    opera += employeeID;
    opera += ",";
    opera += evaluate;
    opera += ")";
    qDebug()<<opera<<"a'sdfasfasdfasdasdfd"<<endl;
    if(!query.exec(opera))
    {
        qDebug()<<"插入总订单失败"<<endl;
    }
    else
        qDebug()<<"插入总订单成功"<<endl;
    Sleep(1000);
    BookToOrderMenu(dishItem,bookID);

}
void DatebaseControl::BookToOrderMenu(QVector<DishesItem> &dishItem,const QString &bookIDWithMark)
{
    QSqlQuery query;
    QString operaBegin("insert into order_menu values(");
    QVector<DishesItem>::iterator ite = dishItem.begin();
    QString orderTime = AddBothMark(QDateTime::currentDateTime().toString());
    for(;ite != dishItem.end();++ite)
    {
        QString insertItem = operaBegin;
        QString dishesID = AddBothMark(ite->dish.dishesID);
        QString num = QString::number(ite->num);
        insertItem = insertItem + bookIDWithMark + ",";
        insertItem = insertItem + dishesID + ",";
        insertItem = insertItem + orderTime + ",";
        insertItem = insertItem + num + ")";
        if(!query.exec(insertItem))
            qDebug()<<"插入order_menu失败"<<endl;
        else
            qDebug()<<"插入order_menu成功"<<insertItem<<endl;

    }
}

QString DatebaseControl::AddBothMark(const QString &para)
{
    QString ret("\'");
    ret += para;
    ret += "\'";
    return ret;
}
QVector<OrderImfor> DatebaseControl::FindPersonOrderImfor(const QString &custAcc)
{
    QVector<OrderImfor> ret;
    QSqlQuery query;
    QString opera("select OrderID,TotalPrice from orders where CustomerID = \'");
    opera = opera + custAcc + "\'";
    if(!query.exec(opera))
        qDebug()<<endl<<"找不到顾客的账单"<<endl;
    else
        qDebug()<<endl<<"成功找到顾客的账单"<<endl;
    while(query.next())
    {
        OrderImfor temp;
        temp.orderID = query.value(0).toString().trimmed();
        temp.date = temp.orderID;
        temp.totalPrice = query.value(1).toString().trimmed();
        ret.push_back(temp);
    }
    return ret;
}
QVector<OrderIDPrice> DatebaseControl::FindShopOrder(const QString shopID)
{
    QSqlQuery query;
    QString opera("select OrderID,TotalPrice from orders where ShopID = \'");
    opera = opera + shopID + "\'";
    if(!query.exec(opera))
        qDebug()<<endl<<"没有找到商店的菜单"<<endl;
    else
        qDebug()<<endl<<"成功找到商店的菜单"<<endl;
    QVector<OrderIDPrice> ret;
    while(query.next())
    {
        OrderIDPrice temp;
        temp.orderID = query.value(0).toString().trimmed();
        temp.price = query.value(1).toString().trimmed();
        ret.push_back(temp);
    }
    return ret;
}
void DatebaseControl::AddEmployee(const QString &shopID,const QString &employeeName)
{
    QSqlQuery query;
    QString shopIdTemp(shopID);
    QString employeeNameTemp(employeeName);
    shopIdTemp = AddBothMark(shopIdTemp);
    employeeNameTemp = AddBothMark(employeeNameTemp);
    QString employeeID = QDateTime::currentDateTime().toString();
    employeeID = AddBothMark(employeeID);
    QString opera("insert into employee values(");
    opera = opera + employeeID + ",";
    opera = opera + employeeNameTemp + ",";
    opera = opera + shopIdTemp + ")";
    if(!query.exec(opera))
        qDebug()<<"插入员工信息失败"<<opera<<endl;
    else
        qDebug()<<"成功插入员工信息"<<endl;
}
QString DatebaseControl::FindShopFirstEmploy(const QString &shopID)
{
    QSqlQuery query;
    QString opera("select EmployeeID from employee where ShopID = ");
    QString shopIDTemp = shopID;
    shopIDTemp = AddBothMark(shopIDTemp);
    opera += shopIDTemp;
    QString ret;
    if(!query.exec(opera))
        qDebug()<<"找不到第一个员工"<<opera<<endl;
    else
        qDebug()<<"找到了第一个员工"<<endl;
    query.next();
    ret = query.value(0).toString();
    return ret;
}
bool DatebaseControl::DeleteDish(const QString &shopID, const QString &dishID)
{
    QSqlQuery query;
    QString opera("delete from shop_menu where ");
    QString condition1("ShopID = ");
    QString condition2("DishesID = ");
    QString shopIDMark = shopID;
    QString dishIDMark = dishID;
    shopIDMark = AddBothMark(shopIDMark);
    dishIDMark = AddBothMark(dishIDMark);
    condition1 += shopIDMark;
    condition2 += dishIDMark;
    opera = opera + condition1 + " and " + condition2;
    if(!query.exec(opera))
    {
        qDebug()<<"删除菜单失败"<<opera<<endl;
        return false;
    }
    else
    {
        qDebug()<<"删除菜单成功"<<endl;
        return true;
    }
}
