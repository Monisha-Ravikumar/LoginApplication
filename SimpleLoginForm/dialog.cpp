#include "dialog.h"
#include "ui_dialog.h"
#include<QDebug>
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_confirm_pushButton_clicked()
{
       QString Email=ui->Email_lineEdit->text();
       QString password=ui->password_lineEdit->text();
       QString confirmpassword=ui->confirm_lineEdit->text();
       qDebug()<<"Email:"<<Email;
       qDebug()<<"Password:"<<password;
       qDebug()<<"Confirm Password:"<<confirmpassword;
       if(!Email.isEmpty() && !password.isEmpty() && !confirmpassword.isEmpty())
       {

       }
       else
       {
           qDebug()<<"One field is empty!!";
       }
}

void Dialog::on_Exit_pushButton_clicked()
{
    QApplication::quit();
}
