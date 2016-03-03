#ifndef TURNOVER_H
#define TURNOVER_H

#include <QWidget>
#include"mytype.h"

namespace Ui {
class Turnover;
}

class Turnover : public QWidget,public BaseImformation
{
    Q_OBJECT

public:
    explicit Turnover(BossImfor &bossImforPara,QWidget *parent = 0);
    ~Turnover();
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
    void NextPage();
    void PreviousPage();
    void BeginPage();
private:
    Ui::Turnover *ui;
    const int &indexReturnWidget;
    BossImfor &bossImfor;
    QVector<OrderIDPrice> orderPrices;
    QVector<OrderIDPrice>::iterator itePageBegin;
    bool isUpdateInit;
};

#endif // TURNOVER_H
