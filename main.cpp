#include "widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    auto* view = new Widget{};
    view->refresh();
    static_cast<Widget*>(view)->show();
    return a.exec();
}
