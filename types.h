#ifndef TYPES_H
#define TYPES_H

struct Coin {
    int value;
    int count;
};

enum class CoinValue {
    COIN_10 = 10,
    COIN_50 = 50,
    COIN_100 = 100,
    COIN_500 = 500
};

enum class ProductPrice {
    COFFEE = -100,
    TEA = -150,
    COKE = -200
};

#endif // TYPES_H
