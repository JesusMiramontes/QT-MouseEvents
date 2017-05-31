#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mouse.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void Mouse_current_pos();
    void Mouse_Pressed();
    void Mouse_Left();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
