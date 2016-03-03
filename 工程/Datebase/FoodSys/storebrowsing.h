#ifndef STOREBROWSING_H
#define STOREBROWSING_H

#include <QWidget>
#include"mytype.h"

namespace Ui {
class StoreBrowsing;
}


class StoreBrowsing : public QWidget,public BaseImformation
{
    Q_OBJECT


public:
    explicit StoreBrowsing(CustomerImfor &custImforPara,QWidget *parent = 0);
    ~StoreBrowsing();
signals:
    void display(int indexNum);
    void retShopID(const QString shopID);
private slots:
    void on_ReadHistoryButton_clicked();
    void on_PreviousButton_clicked();
    void on_NextButton_clicked();
    void on_ReturnButton_clicked();
    void on_EnterStore_1_clicked();
    void on_EnterStore_2_clicked();
    void on_EnterStore_3_clicked();
    void on_EnterStore_4_clicked();
    void on_EnterStore_5_clicked();
    void on_EnterStore_6_clicked();
    void on_EnterStore_7_clicked();
    void on_EnterStore_8_clicked();
    void on_EnterStore_9_clicked();
    void on_EnterStore_10_clicked();
    void on_UpdateButton_clicked();
    void SetPageBegin();
    void SetPageNext();
    void SetPagePrevious();
    void JumpOthers();
private:
    virtual void ClearUI();
    void ShowUI();
    bool SelectShop(int num);
private:
    Ui::StoreBrowsing *ui;
    const int &indexHistoryBillWidget;
    const int &indexEnterStoreWidget;
    const int &indexReturnWidget;

    CustomerImfor &custImfor;
    QVector<ShopNameIntGoodRate> shopBrowImfor;
    QVector<ShopNameIntGoodRate>::iterator itePageBegin;
    bool isUpdateInit;
};

#endif // STOREBROWSING_H
