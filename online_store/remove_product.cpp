#include "remove_product.h"
#include "ui_remove_product.h"

remove_product::remove_product(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::remove_product)
{
    ui->setupUi(this);
}

remove_product::~remove_product()
{
    delete ui;
}
