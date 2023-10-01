#ifndef DIALOG_CONNECT_H
#define DIALOG_CONNECT_H

#include <QDialog>

namespace Ui {
class Dialog_connect;
}

class Dialog_connect : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_connect(QWidget *parent = nullptr);
    ~Dialog_connect();

private slots:
    void on_pb_OK_clicked();

private:
    Ui::Dialog_connect *ui;
};

#endif // DIALOG_CONNECT_H
