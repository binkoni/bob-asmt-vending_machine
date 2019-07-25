#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>
#include <iostream>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    View{},
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

void Widget::returnCoins(std::vector<Coin> coins) {
    for(auto&& coin : coins) {
        QMessageBox msg;
        msg.information(nullptr, QString("COINS"), QString(tr("Coin %1 : %2")).arg(coin.value).arg(coin.count));
    }
}

void Widget::refresh() {
    ui->lcd->display(m_model->money());
    ui->pb_coffee->setEnabled(m_model->money() >= -static_cast<int>(ProductPrice::COFFEE));
    ui->pb_tea->setEnabled(m_model->money() >= -static_cast<int>(ProductPrice::TEA));
    ui->pb_coke->setEnabled(m_model->money() >= -static_cast<int>(ProductPrice::COKE));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pb_10_clicked()
{
    m_presenter->onCoinButtonClicked(CoinValue::COIN_10);
}

void Widget::on_pb_50_clicked()
{
    m_presenter->onCoinButtonClicked(CoinValue::COIN_50);
}

void Widget::on_pb_100_clicked()
{
    m_presenter->onCoinButtonClicked(CoinValue::COIN_100);
}

void Widget::on_pb_500_clicked()
{
    m_presenter->onCoinButtonClicked(CoinValue::COIN_500);
}

void Widget::on_pb_coffee_clicked()
{
    m_presenter->onProductButtonClicked(ProductPrice::COFFEE);
}

void Widget::on_pb_tea_clicked()
{
    m_presenter->onProductButtonClicked(ProductPrice::TEA);
}

void Widget::on_pb_coke_clicked()
{
    m_presenter->onProductButtonClicked(ProductPrice::COKE);
}

void Widget::on_pb_return_clicked()
{
    m_presenter->onReturnButtonClicked();
}
