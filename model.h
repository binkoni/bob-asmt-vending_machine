#ifndef MODEL_H
#define MODEL_H

#include <vector>
#include <memory>
#include "types.h"

class Model {
private:
    int m_money;
public:
    explicit Model();
    void addMoney(int money);
    int money();
    std::vector<struct Coin> returnCoins();
};

#endif // MODEL_H
