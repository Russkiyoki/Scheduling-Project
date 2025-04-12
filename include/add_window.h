#ifndef ADD_WINDOW_H
#define ADD_WINDOW_H

#include <QWidget>

class AddWindow : public QWidget {
    Q_OBJECT
    public:
        AddWindow(QWidget *parent = nullptr);
        ~AddWindow();
};

#endif