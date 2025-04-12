#include <QApplication>
#include <QWidget>
#include <iostream>
#include "../include/window.h"

int main(int argc, char *argv[]){
    QApplication app(argc, argv);

    Window window;
    window.setWindowTitle("Scheduling");




    window.show();
    return app.exec();
}