#include "price_filter.h"
#include "ui_price_filter.h"

price_filter::price_filter(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::price_filter)
{
    ui->setupUi(this);
}

price_filter::~price_filter()
{
    delete ui;
}
