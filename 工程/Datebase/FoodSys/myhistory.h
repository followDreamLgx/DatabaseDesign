#ifndef MYHISTORY_H
#define MYHISTORY_H

#include <QWidget>
#include"mytype.h"

namespace Ui {
class MyHistory;
}

class MyHistory : public QWidget,public BaseImformation
{
    Q_OBJECT

public:
    explicit MyHistory(CustomerImfor &custImforPara,QWidget *parent = 0);
    ~MyHistory();
signals:
    void display(int indexNum);
private slots:
    void on_PreviousButton_clicked();

    void on_NextButton_clicked();

    void on_ReturnButton_clicked();
    void on_UpdateButton_clicked();

private:
    virtual void ClearUI();
    void ShowUI();
    void SetPageBegin();
    void NextPage();
    void PreviousPage();
private:
    Ui::MyHistory *ui;
    const int &indexReturnWidget;
    CustomerImfor &custImfor;
    QVector<OrderImfor> orderImfors;
    QVector<OrderImfor>::iterator itePageBegin;
    bool isUpdateInit;
};

#endif // MYHISTORY_H
