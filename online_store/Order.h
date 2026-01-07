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
    vector<product*> order_list;
    int key;
    string state;
public:
    order(vector<product*> list);

    void setkey(int key);

    void setstate(string state);

    string getstate();

    int getkey();
};

#endif // ORDER_H
