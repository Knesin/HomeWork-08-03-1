#include "dialog_connect.h"
#include "ui_dialog_connect.h"

Dialog_connect::Dialog_connect(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_connect)
{
    ui->setupUi(this);
    ui->l_connect->setText("Connect to: ");
}

Dialog_connect::~Dialog_connect()
{
    delete ui;
}

void Dialog_connect::on_pb_OK_clicked()
{
    parentWidget()->close();
}

