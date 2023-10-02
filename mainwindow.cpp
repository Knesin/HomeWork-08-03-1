#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    dialog_con = new Dialog_connect(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete dialog_con;
}


void MainWindow::on_pb_Cancel_clicked()
{
    this->close();
}
void MainWindow::on_pb_Setting_clicked()
{
    dialog_con->show();
}

void MainWindow::on_pb_Connect_clicked()
{
    QMessageBox msg;
    msg.setText("Connecting...");
    msg.setWindowTitle("Connecting");
    msg.exec();
}

