#include "order_registration.h"
#include "ui_order_registration.h"

#include "Admin.h"
#include "HashMap.h"
#include "Queue.h"
#include <QMessageBox>



order_registration::order_registration(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::order_registration)
{
    ui->setupUi(this);

    for(size_t i=0; i<product_list.size(); i++){

        ui->name->addItem(QString::fromStdString(product_list[i]->getName()));
        ui->price->addItem(QString::number(product_list[i]->getPrice()));
    }

    neworder = new order;
}

order_registration::~order_registration()
{
    delete ui;
}

void order_registration::on_toolButton_clicked()
{
    QListWidgetItem* item = ui->name->currentItem();

    if (!item) {
        QMessageBox::warning(this, "Error", "Please select an item");
        return;
    }

    string name = item->text().toStdString();
    hashmap* h = hashmap::gethash();
    product* p = h->search_map(name);

    if (p->getStock() == 0) {
        QMessageBox::warning(this, "Error", "This item is out of stock");
        return;
    }

    neworder->order_list.push_back(p);
}


void order_registration::on_pushButton_2_clicked()
{
    if (neworder->order_list.empty()) {
        QMessageBox::warning(this, "Error", "Order is empty");
        return;
    }

    queue* q = queue::get_queue();
    q->enqueue(neworder);

    QMessageBox::information(this, "Done", "Order registered successfully");

    neworder = new order;
}

