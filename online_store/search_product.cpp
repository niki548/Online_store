#include "search_product.h"
#include "ui_search_product.h"

#include "HashMap.h"
#include <QString>
#include "mainwindow.h"

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

void search_product::on_toolButton_clicked()
{
    std::string name = ui->search->text().toStdString();

    hashmap* h = hashmap::gethash();
    product* p = h->search_map(name);

    if(p == nullptr){
        //not found
        ui->name->setText(QString::fromStdString("not found"));
        ui->price->setText(QString::fromStdString("not found"));
        ui->stock->setText(QString::fromStdString("not found"));
        ui->sale->setText(QString::fromStdString("not found"));
    }
    else{
        ui->name->setText(QString::fromStdString(p->getName()));
        ui->price->setText(QString::number(p->getPrice()));
        ui->stock->setText(QString::number(p->getStock()));
        ui->sale->setText(QString::number(p->getSalenumber()));
    }
}


void search_product::on_toolButton_2_clicked()
{
    MainWindow* newpage = new MainWindow;
    newpage->show();
    this->close();
}

