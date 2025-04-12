#include "../include/add_button.h"
#include "../include/add_window.h"
#include <QPushButton>
#include <QVBoxLayout>

AddButton::AddButton(QWidget *parent) : QWidget(parent){
    addButton = new QPushButton("Add", this);
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(addButton);
    
    connect(addButton, &QPushButton::clicked, this, &AddButton::onButtonClicked);
    addButton->resize(50,20);
}

AddButton::~AddButton(){
    //deconstructor
}

void AddButton::onButtonClicked(){
    AddWindow *addWindow = new AddWindow();
    addWindow->show();
}