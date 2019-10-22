#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
     login(QWidget *parent = nullptr);
    ~login();

private slots:
    void on_login_2_accepted();

    void on_login_button_clicked();

private:
    Ui::login *ui;
    QMainWindow *mainwindow;
};

#endif // LOGIN_H
