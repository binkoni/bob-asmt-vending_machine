#include <vector>
#include <memory>
#include "model.h"
#include "types.h"

Model::Model():
    m_money{0}
{}

void Model::addMoney(int money) {
    if(m_money + money >= 0)
        m_money += money;
}

int Model::money() {
    return m_money;
}

std::vector<struct Coin> Model::returnCoins() {
    std::vector<struct Coin> coins{{500, 0}, {100, 0}, {50, 0}, {10, 0}};
    for (auto&& coin : coins) {
        if(m_money >= coin.value) {
            coin.count += m_money / coin.value;
            m_money = m_money % coin.value;
        }
    }
    m_money = 0;
    return coins;
}
