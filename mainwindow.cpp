#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    cout<<"第二个版本";
    cout<<"第三个版本";
    cout<<"222.12.12.16:50";
}

MainWindow::~MainWindow()
{
    delete ui;
}

