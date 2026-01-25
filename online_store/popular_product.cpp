#include "popular_product.h"
#include "ui_popular_product.h"

#include "MaxHeap.h"
#include "mainwindow.h"

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

        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(QString::number(i)));
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem(QString::fromStdString(pl[i]->getName())));
        ui->tableWidget->setItem(i, 2, new QTableWidgetItem(QString::number(pl[i]->getSalenumber())));
    }
}

Popular_product::~Popular_product()
{
    delete ui;
}

void Popular_product::on_toolButton_clicked()
{
    MainWindow* newpage = new MainWindow;
    newpage->show();
    this->close();
}

