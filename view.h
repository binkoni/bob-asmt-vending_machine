#ifndef VIEW_H
#define VIEW_H

#include <vector>
#include "types.h"

class Model;
class Presenter;

class View {
protected:
    Model* m_model;
    Presenter* m_presenter;
public:
    explicit View();
    virtual void refresh() = 0;
    virtual void returnCoins(std::vector<Coin> coins) = 0;
    virtual ~View();
};

#endif // VIEW_H
