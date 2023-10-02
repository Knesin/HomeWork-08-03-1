#include "dialog_connect.h"
#include "ui_dialog_connect.h"
#include <QMessageBox>

Dialog_connect::Dialog_connect(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_connect)
{
    ui->setupUi(this);
}

Dialog_connect::~Dialog_connect()
{
    delete ui;
}


void Dialog_connect::on_pb_d_OK_clicked()
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
    }

}

