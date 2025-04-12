#ifndef ADD_BUTTON_H
#define ADD_BUTTON_H

#include <QWidget>
#include <QPushButton>

// Difference between QWidget and QObject is that QObject handles backend
// While QWidget inherits from QObject and add gui.
class AddButton : public QWidget {
    Q_OBJECT

public:
// Explicit blocks auto-conversion
    AddButton(QWidget *parent = nullptr);
    ~AddButton();

private slots:
    void onButtonClicked();

private:
    QPushButton *button;
};

#endif