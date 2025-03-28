#ifndef MYWINDOW_H
#define MYWINDOW_H

#include <gtkmm.h>
#include "AddWindow.h"

class MyWindow : public Gtk::Window {
    public: 
        MyWindow(); //Constructor?
    protected:
        Gtk::Button addButton;
        Gtk::Box addButtonBox;
        Gtk::Fixed fixedContainer;
        void on_addButton_clicked();
        // storing memory address of the object AddWindow
        // assigned null for now, will assign in the cpp
        AddWindow* popUp = nullptr;    
};

#endif