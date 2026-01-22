#ifndef ORDER_H
#define ORDER_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>

#include "Product.h"
#include <vector>

static int key_order = 1;

class order
{
private:
    int key;
    string state;
public:
    vector<product*> order_list;

    order();

    void setkey(int key);

    void setstate(string state);

    string getstate();

    int getkey();

};

#endif // ORDER_H
