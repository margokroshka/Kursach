#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{

    int x;
    int y;
    int z = 0;
    x=ui->textEdit->toPlainText().toInt();
    y=ui->textEdit_3->toPlainText().toInt();
    if(x<=0|y<=0){
        QMessageBox::warning(this, "Неверный ввод","Вес продукта и каллорийность должны быть >0");
    }else{
        form= new Form;
        form->show();
        connect(this, &MainWindow::signal, form, &Form::slot);
    z=(x*y)/100;
    QString cal =QString::number(z);
   emit signal("Результат = "+cal);
}
}


void MainWindow::on_pushButton_2_clicked()
{

    int x;
    int y;
    int z;
    x=ui->textEdit_2->toPlainText().toInt();
    y=ui->textEdit_3->toPlainText().toInt();
    if(x<=0|y<=0){
        QMessageBox::warning(this, "Неверный ввод","Вес продукта и количество белков должны быть >0");
    }else{
        form2= new Form2;
        form2->show();
        connect(this, &MainWindow::signal, form2, &Form2::slot2);
    z=(x*y)/100;
    QString cal =QString::number(z);
     emit signal("Результат = "+cal);
}
}
