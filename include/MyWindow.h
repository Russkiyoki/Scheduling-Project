#ifndef MYWINDOW_H
#define MYWINDOW_H

#include <gtkmm.h>

class MyWindow : public Gtk::Window {
    public: 
        MyWindow(); //Constructor?
    protected:
        Gtk::Button addButton;
        Gtk::Box addButtonBox;
        Gtk::Fixed fixedContainer;
        void on_addButton_clicked();    
};

#endif // MYWINDOW_H