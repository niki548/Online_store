#ifndef WAREHOUSE_H
#define WAREHOUSE_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>

#include "Product.h"

class warehouse
{
private:
    static warehouse* owarehouse;
public:
    warehouse();

    void add_product(product* p);
    void delete_product(product* p);
    static warehouse* getwarehouse();
};

#endif // WAREHOUSE_H
