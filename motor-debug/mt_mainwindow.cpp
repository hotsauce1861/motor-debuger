#include "mt_mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    init_connect();
    init_user_ui();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::init_connect(void)
{

}

void MainWindow::init_user_ui(void)
{

}
