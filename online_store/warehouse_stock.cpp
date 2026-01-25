#include "warehouse_stock.h"
#include "ui_warehouse_stock.h"

#include "Admin.h"
#include "HashMap.h"
#include "mainwindow.h"

warehouse_stock::warehouse_stock(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::warehouse_stock)
{
    ui->setupUi(this);

    hashmap* h = hashmap::gethash();

    for(size_t i=0; i<product_list.size(); i++){

        string name = product_list[i]->getName();
        product* p = h->search_map(name);

        ui->name->addItem(QString::fromStdString(p->getName()));
        ui->price->addItem(QString::number(p->getPrice()));
        ui->stock->addItem(QString::number(p->getStock()));
    }
}

warehouse_stock::~warehouse_stock()
{
    delete ui;
}

void warehouse_stock::on_toolButton_clicked()
{
    MainWindow* newpage = new MainWindow;
    newpage->show();
    this->close();
}

