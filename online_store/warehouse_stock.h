#ifndef WAREHOUSE_STOCK_H
#define WAREHOUSE_STOCK_H

#include <QDialog>

namespace Ui {
class warehouse_stock;
}

class warehouse_stock : public QDialog
{
    Q_OBJECT

public:
    explicit warehouse_stock(QWidget *parent = nullptr);
    ~warehouse_stock();

private:
    Ui::warehouse_stock *ui;
};

#endif // WAREHOUSE_STOCK_H
