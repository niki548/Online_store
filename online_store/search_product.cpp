#include "search_product.h"
#include "ui_search_product.h"

search_product::search_product(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::search_product)
{
    ui->setupUi(this);
}

search_product::~search_product()
{
    delete ui;
}
