#include "popular_product.h"
#include "ui_popular_product.h"

#include "MaxHeap.h"

Popular_product::Popular_product(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Popular_product)
{
    ui->setupUi(this);

    ui->tableWidget->clear();

    maxheap* heap = maxheap::getmaxheap();

    ui->tableWidget->setColumnCount(3);
    ui->tableWidget->setRowCount(heap->getList().size());

    QStringList headers;
    headers << " " << "product name" << "sale number";

    vector<product*> pl = heap->print_Popular_products();
    for(size_t i=0; i<pl.size(); i++){

        ui->tableWidget->setItem(0, i, new QTableWidgetItem(QString::number(i)));
        ui->tableWidget->setItem(1, i, new QTableWidgetItem(QString::fromStdString(pl[i]->getName())));
        ui->tableWidget->setItem(2, i, new QTableWidgetItem(QString::number(pl[i]->getSalenumber())));
    }
}

Popular_product::~Popular_product()
{
    delete ui;
}
