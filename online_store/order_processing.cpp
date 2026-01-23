#include "order_processing.h"
#include "ui_order_processing.h"

#include "Queue.h"

Order_processing::Order_processing(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Order_processing)
{
    ui->setupUi(this);

    queue* q = queue::get_queue();

    ui->order_tree->clear();

    for(size_t i=0; i<q->getVector().size(); i++){

        QTreeWidgetItem* orderItem = new QTreeWidgetItem(ui->order_tree);

        orderItem->setText(0, "Order #" + QString::number(q->getVector()[i]->getkey()));
        orderItem->setText(1, QString::fromStdString(q->getVector()[i]->getstate()));

        for(size_t j=0; j<q->getVector()[i]->order_list.size(); i++){

            product* p = q->getVector()[i]->order_list[j];
            QTreeWidgetItem* productItem = new QTreeWidgetItem(orderItem);
            productItem->setText(0, QString::fromStdString(p->getName()));
        }
    }

}



Order_processing::~Order_processing()
{
    delete ui;
}

