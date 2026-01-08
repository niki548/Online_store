#include "order_registration.h"
#include "ui_order_registration.h"

order_registration::order_registration(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::order_registration)
{
    ui->setupUi(this);
}

order_registration::~order_registration()
{
    delete ui;
}
