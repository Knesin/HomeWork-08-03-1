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


void MainWindow::on_pb_Ok_clicked()
{
    QMessageBox msg;
    QString host = ui->le_HosName->text();
    QString bd = ui->le_BDName->text();
    QString login = ui->le_Login->text();
    QString pass = ui->le_Password->text();
    int port = ui->sb_Port->value();
    if (host.length() < 1){
        msg.setText("Host not set");
        msg.setWindowTitle("Host");
        msg.exec();
    }else if (bd.length() < 1){
        msg.setText("BD not set");
        msg.setWindowTitle("BD");
        msg.exec();
    }else if (login.length() < 1){
        msg.setText("Login not set");
        msg.setWindowTitle("Login");
        msg.exec();
    }else if (pass.length() < 1){
        msg.setText("Password not set");
        msg.setWindowTitle("Password");
        msg.exec();
    }else if (port < 1 || port > 32000){
        msg.setText("Port not set");
        msg.setWindowTitle("Port");
        msg.exec();
    }else{
        dialog_con->show();
    }
}
