#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "add.h"
#include "query.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_triggered()
{
    add a;
    a.exec();
}

void MainWindow::on_action_3_triggered()
{
    Query a;
    a.exec();
}
