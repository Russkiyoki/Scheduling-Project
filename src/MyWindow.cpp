#include "../include/MyWindow.h"
#include "../include/AddWindow.h"

MyWindow::MyWindow() {
    set_title("Scheduling");
    set_default_size(800, 420);

    boxGrid = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_VERTICAL, 10));
    boxGrid->pack_start(gridInfoHolder, Gtk::PACK_EXPAND_WIDGET,0);

    addButton.set_label("Add");
    addButton.signal_clicked().connect(sigc::mem_fun(*this, &MyWindow::on_addButton_clicked));


    boxGrid->pack_start(addButton, Gtk::PACK_SHRINK);
    // addButtonBox = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_VERTICAL, 10));
    // addButtonBox->pack_start(addButton, Gtk::PACK_SHRINK);

    labelName.set_text("Name");
    labelDayOff.set_text("Day off");
    labelDislikes.set_text("Dislikes");
    labelWorkStatus.set_text("Is working?");

    gridInfoHolder.attach(labelName,0,0,1,1);
    gridInfoHolder.attach(labelDayOff,1,0,1,1);
    gridInfoHolder.attach(labelDislikes,2,0,1,1);
    gridInfoHolder.attach(labelWorkStatus,3,0,1,1);

    
    add(*boxGrid);
    //add(*addButtonBox);
    //add(gridInfoHolder);

    show_all_children();
}

void MyWindow::on_addButton_clicked() {
    //addButton.set_label("Clicked!");
    //popUp = Gtk::manage(new AddWindow());
    // -> dereferences the pointer and accesses method show()
    popUp = Gtk::manage(new AddWindow());
    popUp->show();
}
