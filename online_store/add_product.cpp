#include "add_product.h"
#include "ui_add_product.h"
#include <QString>

#include "Admin.h"

add_product::add_product(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::add_product)
{
    ui->setupUi(this);
}

add_product::~add_product()
{
    delete ui;
}

void add_product::on_pushButton_clicked()
{
    string name = ui->ln_name->text().toStdString();
    int price = ui->ln_price->text().toInt();
    int stock = ui->ln_stock->text().toInt();

    product* p = new product(name, stock, price, 0);
    admin* newadmin = admin::getadmin();

    newadmin->add_product_to_warehouse(p);

}

