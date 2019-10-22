#include "login.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui_login.h"
#include "QMessageBox"
#include <iostream>



using namespace std;
login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}

void login::on_login_2_accepted()
{

}

void login::on_login_button_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    if(username == "admin" && password == "admin")
    {
        QMessageBox::information(this, "login", "username and password is correct");
        hide();
        mainwindow = new MainWindow(this);
        mainwindow->show();


    }
    else
        QMessageBox::warning(this, "login", "Wrong login details");
}
