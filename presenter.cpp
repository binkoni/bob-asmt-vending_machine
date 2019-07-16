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

void Presenter::onButtonClicked(ButtonType buttonType)
{
    switch(buttonType) {
    case ButtonType::TEA:
        m_model->addMoney(static_cast<int>(Price::TEA));
        break;
    case ButtonType::COKE:
        m_model->addMoney(static_cast<int>(Price::COKE));
        break;
    case ButtonType::COFFEE:
        m_model->addMoney(static_cast<int>(Price::COFFEE));
        break;
    case ButtonType::RETURN:
        m_view->returnCoins(m_model->returnCoins());
        break;
    case ButtonType::COIN_10:
        m_model->addMoney(10);
        break;
    case ButtonType::COIN_50:
        m_model->addMoney(50);
        break;
    case ButtonType::COIN_100:
        m_model->addMoney(100);
        break;
    case ButtonType::COIN_500:
        m_model->addMoney(500);
        break;
    }
    m_view->refresh();
}
