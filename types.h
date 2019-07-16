#ifndef TYPES_H
#define TYPES_H

struct Coin {
    int value;
    int count;
};

enum class ButtonType {
    RETURN,
    COFFEE,
    TEA,
    COKE,
    COIN_10,
    COIN_50,
    COIN_100,
    COIN_500
};

enum class Price {
    COFFEE = -100,
    TEA = -150,
    COKE = -200
};

#endif // TYPES_H
