#include "../include/MyWindow.h"

MyWindow::MyWindow() {
    set_title("Scheduling");
    set_default_size(800, 420);

    addButton.set_label("Add");
    addButton.set_size_request(20,20);
    addButton.signal_clicked().connect(sigc::mem_fun(*this, &MyWindow::on_addButton_clicked));

    addButtonBox.set_orientation(Gtk::ORIENTATION_VERTICAL);
    addButtonBox.pack_start(addButton, Gtk::PACK_SHRINK);

    fixedContainer.put(addButtonBox, 5, 380);
    //add(addButton);
    add(fixedContainer);
    show_all_children();
}

void MyWindow::on_addButton_clicked() {
    addButton.set_label("Clicked!");
    //popUp = Gtk::manage(new AddWindow());
    // -> dereferences the pointer and accesses method show()
    popUp->show();
}
