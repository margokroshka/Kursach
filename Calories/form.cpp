#include "form.h"
#include "ui_form.h"

Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
}


Form::~Form()
{

}
void Form::slot(QString a)
{
ui->label_3->setText(a);
}


