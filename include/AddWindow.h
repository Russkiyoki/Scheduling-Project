#ifndef ADDWINDOW_H
#define ADDWINDOW_H

#include <gtkmm.h>
#include "../include/Employee.h"
#include <vector>
#include <string>

class AddWindow: public Gtk::Window { 
    public: 

        AddWindow();

        Gtk::Label labelName ;
        Gtk::Label labelDayOff;
        Gtk::Label labelDislikes;
        Gtk::Label labelWorkStatus;
        
        void on_textName_enter();
        void on_textDayOff_enter();
        void on_textDislikes_enter();
        void on_entry_enter();
    protected:
        Gtk::Grid textHolder;
        Gtk::Entry* textName;
        Gtk::Entry* textWorking;
        Gtk::Entry* textDayOff;
        Gtk::Entry* textDislikes;

};
#endif