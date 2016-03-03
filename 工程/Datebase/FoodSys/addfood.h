#ifndef ADDFOOD_H
#define ADDFOOD_H

#include <QWidget>
#include"mytype.h"


namespace Ui {
class AddFood;
}

class AddFood :public QWidget, public BaseImformation
{
    Q_OBJECT

public:
    explicit AddFood(BossImfor &bossImforPara,QWidget *parent = 0);
    ~AddFood();
signals:
    void display(int indexNum);
private slots:
    void on_SureButton_clicked();
    void on_CanelButton_clicked();

private:
    virtual void ClearUI();
private:
    Ui::AddFood *ui;
    const int &indexSureAddWidget;
    const int &indexCanelAddWidget;
    BossImfor &bossImfor;
};

#endif // ADDFOOD_H
