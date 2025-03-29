#include "../include/AddWindow.h"
#include <iostream>
AddWindow::AddWindow() {
    set_title("Add Employee Info");
    set_default_size(550,360);
    set_resizable(false);

    textName = Gtk::manage(new Gtk::Entry);
    textHolder.put(*textName,5,50);

    add(textHolder);
    
    show_all_children();
}

void on_textName_enter(){
    std::string userInput = textName->get_text();
    
}