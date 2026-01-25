#include "price_filter.h"
#include "ui_price_filter.h"
#include "Admin.h"
#include "Bst.h"
#include "mainwindow.h"

price_filter::price_filter(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::price_filter)
{
    ui->setupUi(this);

    ui->name->clear();
    ui->price->clear();
    ui->stock->clear();

    for(size_t i=0 ; i<product_list.size(); i++){
        ui->name->addItem(QString::fromStdString(product_list[i]->getName()));
        ui->price->addItem(QString::number(product_list[i]->getPrice()));
        ui->stock->addItem(QString::number(product_list[i]->getStock()));
    }

    bst* b = bst::getbst();

    int min = b->bst_Minimum(b->getroot())->pro->getPrice();
    int max = b->bst_maximum(b->getroot())->pro->getPrice();

    ui->min->setRange(min, max);
    ui->max->setRange(min, max);

    ui->min->setSingleStep(5);
    ui->max->setSingleStep(5);

    ui->min->setValue(min);
    ui->max->setValue(max);

    ui->max_lable->setText(QString::number(ui->max->value()));
    ui->min_lable->setText(QString::number(ui->min->value()));
}

price_filter::~price_filter()
{
    delete ui;
}

void price_filter::on_pushButton_clicked()
{
    ui->name->clear();
    ui->price->clear();
    ui->stock->clear();

    int min = ui->min->value();
    int max = ui->max->value();

    bst* b = bst::getbst();
    b->printInRnge(b->getroot(), min, max);

    for(size_t i=0; i<filter_list.size(); i++){

        ui->name->addItem(QString::fromStdString(filter_list[i]->pro->getName()));
        ui->price->addItem(QString::number(filter_list[i]->pro->getPrice()));
        ui->stock->addItem(QString::number(filter_list[i]->pro->getStock()));
    }

    filter_list.clear();
    filter_list.shrink_to_fit();
}


void price_filter::on_toolButton_clicked()
{
    MainWindow* newpage = new MainWindow;
    newpage->show();
    this->close();
}


void price_filter::on_min_valueChanged(int value)
{
    ui->min_lable->setText(QString::number(value));
}


void price_filter::on_max_valueChanged(int value)
{
    ui->max_lable->setText(QString::number(value));
}

