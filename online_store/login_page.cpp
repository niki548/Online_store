#include "login_page.h"
#include "ui_login_page.h"

#include "Admin.h"

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
}


void login_page::on_pushButton_2_clicked()
{
    string username = ui->ln_user_2->text().toStdString();
    string password = ui->ln_pass_2->text().toStdString();

    admin::login(username, password);
}

