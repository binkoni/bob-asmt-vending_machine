#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "view.h"
#include "model.h"
#include "presenter.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget, public View
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    void refresh();
    void returnCoins(std::vector<Coin> coins);
    ~Widget();

private slots:
    void on_pb_10_clicked();

    void on_pb_50_clicked();

    void on_pb_100_clicked();

    void on_pb_500_clicked();

    void on_pb_coffee_clicked();

    void on_pb_tea_clicked();

    void on_pb_coke_clicked();

    void on_pb_return_clicked();

private:
    Ui::Widget *ui;
    int m_money;
    void changeMoney(int money);
};

#endif // WIDGET_H
