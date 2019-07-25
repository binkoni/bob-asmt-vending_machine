#ifndef PRESENTER_H
#define PRESENTER_H

#include "types.h"

class Model;
class View;
class Presenter {
private:
    Model* m_model;
    View* m_view;
public:
    explicit Presenter();
    void onCoinButtonClicked(CoinValue amount);
    void onProductButtonClicked(ProductPrice price);
    void onReturnButtonClicked();
    void addModel(Model* model);
    void addView(View* view);
};

#endif // PRESENTER_H
