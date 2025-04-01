#ifndef MYWINDOW_H
#define MYWINDOW_H

#include <gtkmm.h>
#include "AddWindow.h"

class MyWindow : public Gtk::Window {
    public: 
        MyWindow(); //Constructor?
        void on_addButton_clicked();
    protected:
        Gtk::Label labelName;
        Gtk::Label labelDayOff;
        Gtk::Label labelDislikes;
        Gtk::Label labelWorkStatus;
        Gtk::Button addButton;
        Gtk::Box* addButtonBox;
        Gtk::Box* boxGrid;
        // storing memory address of the object AddWindow
        // assigned null for now, will assign in the cpp
        AddWindow* popUp = nullptr;
        Gtk::Grid gridInfoHolder;
};

#endif 