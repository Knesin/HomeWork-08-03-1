#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dialog_connect.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pb_Cancel_clicked();

    void on_pb_Setting_clicked();

    void on_pb_Connect_clicked();

private:
    Ui::MainWindow *ui;
    Dialog_connect* dialog_con;
    QString connect_line;
};
#endif // MAINWINDOW_H
