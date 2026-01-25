#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "add_product.h"
#include "remove_product.h"
#include "search_product.h"
#include "price_filter.h"
#include "warehouse_stock.h"
#include "order_registration.h"
#include "order_processing.h"
#include "popular_product.h"
#include "login_page.h"

#include "Admin.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    add_product* newpage = new add_product;
    newpage->show();
    this->close();
}


void MainWindow::on_remove_button_clicked()
{
    remove_product* newpage = new remove_product;
    newpage->show();
    this->close();
}


void MainWindow::on_search_button_clicked()
{
    search_product* newpage = new search_product;
    newpage->show();
    this->close();
}

void MainWindow::on_filter_button_clicked()
{
    price_filter* newpage = new price_filter;
    newpage->show();
    this->close();
}


void MainWindow::on_stock_button_clicked()
{
    warehouse_stock* newpage = new warehouse_stock;
    newpage->show();
    this->close();
}


void MainWindow::on_registration_button_clicked()
{
    order_registration* newpage = new order_registration;
    newpage->show();
    this->close();
}

void MainWindow::on_processing_button_clicked()
{
    Order_processing* newpage = new Order_processing;
    newpage->show();
    this->close();
}


void MainWindow::on_popular_button_clicked()
{
    Popular_product* newpage = new Popular_product;
    newpage->show();
    this->close();
}


void MainWindow::on_pushButton_2_clicked()
{
    admin* a = admin::getadmin();
    a->logout();

    login_page* newpage = new login_page;
    newpage->show();
    this->close();
}

