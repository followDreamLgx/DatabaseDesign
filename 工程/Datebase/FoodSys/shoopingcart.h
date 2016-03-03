#ifndef SHOOPINGCART_H
#define SHOOPINGCART_H

#include <QWidget>
#include"mytype.h"

namespace Ui {
class ShoopingCart;
}

class ShoopingCart : public QWidget,public BaseImformation
{
    Q_OBJECT

public:
    explicit ShoopingCart(CustomerImfor &custImforPara,QWidget *parent = 0);
    ~ShoopingCart();
signals:
    void display(int indexNum);
    void CompletePayBill();
public slots:
    void ReceiverDishItems(QVector<DishesItem> dishItemsPara);
private slots:
    void on_PayBillButton_clicked();

    void on_CanelBillButton_clicked();
    void on_ReturnButton_clicked();

    void on_ThrowButton_1_clicked();
    void on_ThrowButton_2_clicked();
    void on_ThrowButton_3_clicked();
    void on_ThrowButton_4_clicked();
    void on_ThrowButton_5_clicked();
    void on_ThrowButton_6_clicked();
    void on_ThrowButton_7_clicked();
    void on_ThrowButton_8_clicked();

    void on_More_1_clicked();
    void on_More_2_clicked();
    void on_More_3_clicked();
    void on_More_4_clicked();
    void on_More_5_clicked();
    void on_More_6_clicked();
    void on_More_7_clicked();
    void on_More_8_clicked();

    void on_UpdateButton_clicked();
private:
    virtual void ClearUI();
    void ShowUI();
    void MoreDish(int num);
    void TooMuch(int num);
private:
    Ui::ShoopingCart *ui;
    const int &indexPayBillWidget;
    const int &indexCanelBillWidget;
    const int &indexReturnWidget;
    CustomerImfor &custImfor;
    QVector<DishesItem> dishItems;

};

#endif // SHOOPINGCART_H
