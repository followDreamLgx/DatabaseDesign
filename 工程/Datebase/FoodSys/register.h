#ifndef REGISTER_H
#define REGISTER_H

#include <QWidget>
#include"mytype.h"

namespace Ui {
class Register;
}

class Register : public QWidget,public BaseImformation
{
    Q_OBJECT

public:
    explicit Register(QWidget *parent = 0);
    ~Register();
signals:
    void display(int indexNum);
private slots:
    void on_SureButton_clicked();

    void on_ReturnButton_clicked();
    void on_UpdateButton_clicked();

private:
    virtual void ClearUI();
private:
    Ui::Register *ui;
    const int &indexSureWidget;
    const int &indexReturnWidget;
    BossImfor bossImfor;
    CustomerImfor custImfor;
};

#endif // REGISTER_H
