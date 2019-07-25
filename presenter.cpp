#include <memory>
#include "presenter.h"
#include "model.h"
#include "types.h"
#include "widget.h"

Presenter::Presenter():
    m_model{nullptr},
    m_view{nullptr}
{}

void Presenter::addModel(Model* model) {
    m_model = model;
}

void Presenter::addView(View* view) {
    m_view = view;
}

void Presenter::onCoinButtonClicked(CoinValue coinValue)
{
    m_model->addMoney(static_cast<int>(coinValue));
    m_view->refresh();
}

void Presenter::onProductButtonClicked(ProductPrice productPrice)
{
    m_model->addMoney(static_cast<int>(productPrice));
    m_view->refresh();
}

void Presenter::onReturnButtonClicked() {
    m_view->returnCoins(m_model->returnCoins());
}
