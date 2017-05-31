#include "mouse.h"

mouse::mouse(QWidget *parent) : QLabel(parent)
{

}

void mouse::mouseMoveEvent(QMouseEvent *ev)
{
    this->x = ev->x();
    this->y = ev->y();
    emit mousePosition();
}

void mouse::mousePressEvent(QMouseEvent *ev)
{
    emit mousePressed();
}

void mouse::leaveEvent(QEvent *)
{
    emit mouseLeft();
}
