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
    void onButtonClicked(ButtonType buttonType);
    void addModel(Model* model);
    void addView(View* view);
};

#endif // PRESENTER_H
