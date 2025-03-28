#include <gtkmm.h>
#include <iostream>
#include "../include/MyWindow.h"

int main(int argc, char* argv[]){
    auto app = Gtk::Application::create(argc, argv, "com.Voichishin.Scheduling");
    MyWindow window;
    return app->run(window);
}
