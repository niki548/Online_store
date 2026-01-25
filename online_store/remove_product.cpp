#include "remove_product.h"
#include "ui_remove_product.h"
#include "Admin.h"
#include "HashMap.h"
#include <QString>
#include <QMessageBox>
#include "mainwindow.h"

remove_product::remove_product(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::remove_product)
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
}

remove_product::~remove_product()
{
    delete ui;
}

void remove_product::on_pushButton_clicked()
{
    QListWidgetItem* item = ui->name->currentItem();
    if(item){
        string name = item->text().toStdString();

        hashmap* h = hashmap::gethash();
        product* p = h->search_map(name);

        admin* a = admin::getadmin();
        a->delete_product_from_warehouse(p);

        ui->name->clear();
        ui->price->clear();
        ui->stock->clear();

        for(size_t i=0 ; i<product_list.size(); i++){
            ui->name->addItem(QString::fromStdString(product_list[i]->getName()));
            ui->price->addItem(QString::number(product_list[i]->getPrice()));
            ui->stock->addItem(QString::number(product_list[i]->getStock()));
        }
    }
    else{
        QMessageBox::warning(nullptr, "eror", "pleas select an item");
    }

}


void remove_product::on_toolButton_clicked()
{
    MainWindow* newpage = new MainWindow;
    newpage->show();
    this->close();
}

