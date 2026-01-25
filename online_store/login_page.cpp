#include "login_page.h"
#include "ui_login_page.h"

#include "Admin.h"
#include "mainwindow.h"
#include <QMessageBox>

login_page::login_page(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::login_page)
{
    ui->setupUi(this);
}

login_page::~login_page()
{
    delete ui;
}

void login_page::on_pushButton_clicked()
{
    string username = ui->ln_user->text().toStdString();
    string password = ui->ln_pass->text().toStdString();

    admin::signup(username, password);

    QMessageBox::warning(nullptr, "Done", "signup was successfuly.");
}


void login_page::on_pushButton_2_clicked()
{
    string username = ui->ln_user_2->text().toStdString();
    string password = ui->ln_pass_2->text().toStdString();

    if(admin::login(username, password) == nullptr){
        QMessageBox::warning(nullptr, "eror", "wrong password or username.");
        return;
    }

    MainWindow* newpage = new MainWindow;
    newpage->show();
    this->close();

}
