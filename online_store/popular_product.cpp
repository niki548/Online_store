#include "popular_product.h"
#include "ui_popular_product.h"

Popular_product::Popular_product(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Popular_product)
{
    ui->setupUi(this);
}

Popular_product::~Popular_product()
{
    delete ui;
}
