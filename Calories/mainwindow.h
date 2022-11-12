#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <form.h>
#include <form2.h>
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
    void on_pushButton_clicked();
void on_pushButton_2_clicked();
private:
    Ui::MainWindow *ui;
    Form* form;
Form2* form2;

signals:
    void signal(QString);
};
#endif // MAINWINDOW_H
