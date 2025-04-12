#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QPushButton>

class Window : public QWidget {
public:
    Window(); // Constructor declaration

private:
    // Add any members here (like widgets, layout, etc.)
    QPushButton *button;    
};

#endif // WINDOW_H
