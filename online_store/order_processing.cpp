#include "order_processing.h"
#include "ui_order_processing.h"

Order_processing::Order_processing(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Order_processing)
{
    ui->setupUi(this);
}

Order_processing::~Order_processing()
{
    delete ui;
}
