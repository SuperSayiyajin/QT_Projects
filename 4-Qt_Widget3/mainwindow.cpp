#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mydialog1.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->plainTextEdit );
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionWindow_triggered()
{
    /*yol1
    myDialog1 md1;
    md1.setModal(true);
    md1.exec();*/

    //yol2
    md1 = new myDialog1(this);
    md1->show();
}
