#ifndef MYSTORE_H
#define MYSTORE_H

#include <QWidget>
#include"mytype.h"

namespace Ui {
class MyStore;
}

class MyStore : public QWidget,public BaseImformation
{
    Q_OBJECT

public:
    explicit MyStore(BossImfor &bossImforPara,QWidget *parent = 0);
    ~MyStore();
signals:
    void display(int indexNum);
private slots:
    void on_ReadTurnoverButton_clicked();
    void on_ReturnButton_clicked();
    void on_Delete_1_clicked();
    void on_Delete_2_clicked();
    void on_Delete_3_clicked();
    void on_Delete_4_clicked();
    void on_Delete_5_clicked();
    void on_Delete_6_clicked();
    void on_Delete_7_clicked();
    void on_Delete_8_clicked();
    void on_AddFoodToMenuButton_clicked();
    void on_UpdateButton_clicked();

    void on_IntroductionEdit_textEdited(const QString &arg1);

    void on_AddEmployeeButton_clicked();

private:
    virtual void ClearUI();
    void ShowUI();
    void DeleteDish(int num);
    void SetPageBegin();
    void NextPage();
    void PreviousPage();

private:
    Ui::MyStore *ui;
    const int &indexAddMenuWidget;
    const int &indexTurnoverWidget;
    const int &indexReturnWidget;
    BossImfor &bossImfor;
    QVector<Dishes>::iterator itePageBegin;
    bool isUpdateInit;
};

#endif // MYSTORE_H
