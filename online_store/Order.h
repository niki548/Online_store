#ifndef ORDER_H
#define ORDER_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>

#include "Product.h"
#include <vector>

class order
{
private:
    int key;
    string state;
public:
    vector<string> order_list;

    order();

    void setstate(string state);

    string getstate();


};

#endif // ORDER_H
