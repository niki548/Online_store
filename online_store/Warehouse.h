#ifndef WAREHOUSE_H
#define WAREHOUSE_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>

#include "Product.h"

#include "Bst.h"
#include "HashMap.h"
#include "MaxHeap.h"

class warehouse
{
private:
    static warehouse* owarehouse;
public:
    warehouse();

    void add_product(product* p);
    static warehouse* getwarehouse();
};

#endif // WAREHOUSE_H
