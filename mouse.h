#ifndef MOUSE_H
#define MOUSE_H

#include <QWidget>
#include <QLabel>
#include <QMouseEvent>
#include <QDebug>

class mouse : public QLabel
{
    Q_OBJECT
public:
    explicit mouse(QWidget *parent = 0);

    void mouseMoveEvent(QMouseEvent* ev);
    void mousePressEvent(QMouseEvent* ev);
    void leaveEvent(QEvent *);

    int x, y;

signals:
    void mousePressed();
    void mousePosition();
    void mouseLeft();

public slots:
};

#endif // MOUSE_H
