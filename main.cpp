#include "C:/Qt/6.8.2/mingw_64/include/QtWidgets/QApplication"
#include <QMainWindow>
#include <QPushButton>
#include "include/Game.hpp"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QMainWindow window;
    window.setWindowTitle("T-BAG");
    window.show();

    return app.exec();
}