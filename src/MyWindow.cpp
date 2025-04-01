#include "../include/MyWindow.h"
#include "../include/AddWindow.h"

MyWindow::MyWindow() {
    set_title("Scheduling");
    set_default_size(800, 420);

    addButton.set_label("Add");
    addButton.set_size_request(20,20);
    addButton.signal_clicked().connect(sigc::mem_fun(*this, &MyWindow::on_addButton_clicked));

    addButtonBox.set_orientation(Gtk::ORIENTATION_VERTICAL);
    addButtonBox.pack_start(addButton, Gtk::PACK_SHRINK);

    labelName.set_text("Name");
    labelDayOff.set_text("Day off");
    labelDislikes.set_text("Dislikes");
    labelWorkStatus.set_text("Is working?");

    gridInfoHolder.attach(labelName,0,0,1,1);
    gridInfoHolder.attach(labelDayOff,1,0,1,1);
    gridInfoHolder.attach(labelDislikes,2,0,1,1);
    gridInfoHolder.attach(labelWorkStatus,3,0,1,1);


    fixedContainer.put(addButtonBox, 5, 380);
    //add(addButton);
    add(fixedContainer);
    show_all_children();
}

void MyWindow::on_addButton_clicked() {
    //addButton.set_label("Clicked!");
    //popUp = Gtk::manage(new AddWindow());
    // -> dereferences the pointer and accesses method show()
    popUp = Gtk::manage(new AddWindow());
    popUp->show();
}
