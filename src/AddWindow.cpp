#include "../include/AddWindow.h"
#include "../include/Employee.h"
#include <iostream>

AddWindow::AddWindow() {
    set_title("Add Employee Info");
    set_default_size(200,100);
    set_resizable(false);

    textName = Gtk::manage(new Gtk::Entry);
    textDayOff = Gtk::manage(new Gtk::Entry);
    textDislikes = Gtk::manage(new Gtk::Entry);
    //textHolder.put(*textName,5,50);

    labelName.set_text("Name");
    labelDayOff.set_text("Day off");
    labelDislikes.set_text("Dislikes");

    textHolder.attach(labelName,0,0,1,1);
    textHolder.attach(labelDayOff,1,0,1,1);
    textHolder.attach(labelDislikes,2,0,1,1);
    textHolder.attach(*textName,0,1,1,1);
    textHolder.attach(*textDayOff,1,1,1,1);
    textHolder.attach(*textDislikes,2,1,1,1);

    add(textHolder);
    
    show_all_children();

    textName->signal_activate().connect(sigc::mem_fun(*this, &AddWindow::on_entry_enter));
    textDayOff->signal_activate().connect(sigc::mem_fun(*this, &AddWindow::on_entry_enter));
    textDislikes->signal_activate().connect(sigc::mem_fun(*this, &AddWindow::on_entry_enter));
}
/*
What we could do instead is create one function that on enter
of any of them returns the info, this would work because
we arent clearing it, and the info is simply being updated.
*/

void AddWindow::on_entry_enter(){
    std::string name = textName->get_text();
    std::string dayOff = textDayOff->get_text();
    std::string dislikes = textDislikes->get_text();
    
    Employee employee(name,dayOff,dislikes,true);
    std::cout << employee.get_all_employees() << std::endl;
    
    
    this->close();
    //std::cout << name << dayOff << dislikes << std::endl;
}