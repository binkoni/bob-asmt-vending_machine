#include "view.h"
#include "model.h"
#include "presenter.h"

View::View():
    m_model{new Model{}},
    m_presenter{new Presenter{}}
{
    m_presenter->addView(this);
    m_presenter->addModel(m_model);
}
View::~View() {}
