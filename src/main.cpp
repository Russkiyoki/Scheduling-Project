#include <gtkmm.h>
#include <iostream>

int main(int argc, char* argv[]){
    Gtk::Main kit(argc, argv);

    Gtk::Window window;
    window.set_default_size(800,420);
    window.set_title("Scheduling");
    window.set_position(Gtk::WIN_POS_CENTER);

    Gtk::Main::run(window);
    return 0;
}
