#include "warehouse_stock.h"
#include "ui_warehouse_stock.h"

warehouse_stock::warehouse_stock(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::warehouse_stock)
{
    ui->setupUi(this);


}

warehouse_stock::~warehouse_stock()
{
    delete ui;
}
