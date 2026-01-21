#include "remove_product.h"
#include "ui_remove_product.h"
#include "Admin.h"
#include "HashMap.h"
#include <QString>
#include <QMessageBox>

remove_product::remove_product(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::remove_product)
{
    ui->setupUi(this);

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
    }
    else{
        QMessageBox::warning(nullptr, "eror", "pleas select an item");
    }
}

