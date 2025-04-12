#include <QLineEdit>
#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>
#include "../include/add_window.h"

AddWindow::AddWindow(QWidget *parent) :QWidget(parent){
    this->setWindowTitle("Add Employee");
    this->resize(200,100);

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(new QLabel("New window!",this));
    
}