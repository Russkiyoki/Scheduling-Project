#ifndef ADDWINDOW_H
#define ADDWINDOW_H

#include <gtkmm.h>

class AddWindow: public Gtk::Window { 
    public: 
        AddWindow();
        void on_textName_enter();
    protected:
        Gtk::Entry* textName;
        Gtk::Fixed textHolder;
        Gtk::Entry* textWorking;
        Gtk::Entry* textDayOff;
};
#endif