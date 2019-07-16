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
        msg.information(nullptr, QString("returning coins"), QString(tr("Coin %1 : %2")).arg(coin.value).arg(coin.count));
    }
}

void Widget::refresh() {
    ui->lcd->display(m_model->money());
    ui->pb_coffee->setEnabled(m_model->money() >= -static_cast<int>(Price::COFFEE));
    ui->pb_tea->setEnabled(m_model->money() >= -static_cast<int>(Price::TEA));
    ui->pb_coke->setEnabled(m_model->money() >= -static_cast<int>(Price::COKE));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pb_10_clicked()
{
    m_presenter->onButtonClicked(ButtonType::COIN_10);
}

void Widget::on_pb_50_clicked()
{
    m_presenter->onButtonClicked(ButtonType::COIN_50);
}

void Widget::on_pb_100_clicked()
{
    m_presenter->onButtonClicked(ButtonType::COIN_100);
}

void Widget::on_pb_500_clicked()
{
    m_presenter->onButtonClicked(ButtonType::COIN_500);
}

void Widget::on_pb_coffee_clicked()
{
    m_presenter->onButtonClicked(ButtonType::COFFEE);
}

void Widget::on_pb_tea_clicked()
{
    m_presenter->onButtonClicked(ButtonType::TEA);
}

void Widget::on_pb_coke_clicked()
{
    m_presenter->onButtonClicked(ButtonType::COKE);
}


void Widget::on_pb_return_clicked()
{
    m_presenter->onButtonClicked(ButtonType::RETURN);
}
