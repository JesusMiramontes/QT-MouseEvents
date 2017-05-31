#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->label, SIGNAL(mousePosition()), this, SLOT(Mouse_current_pos()));
    connect(ui->label, SIGNAL(mousePressed()), this, SLOT(Mouse_Pressed()));
    connect(ui->label, SIGNAL(mouseLeft()), this, SLOT(Mouse_Left()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Mouse_current_pos()
{
    ui->label_x->setText(QString::number(ui->label->x));
    ui->label_y->setText(QString::number(ui->label->y));
    ui->label_event->setText("Moving");
}

void MainWindow::Mouse_Pressed()
{
    ui->label_event->setText("Pressed");
}

void MainWindow::Mouse_Left()
{
    ui->label_event->setText("Left");
}
