#ifndef MAXHEAP_H
#define MAXHEAP_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>

#include <vector>
#include "Product.h"

class maxheap
{
private:
    vector<product*> Popular_products;
public:
    maxheap();

    void insert(product* p);

    void maxHeapify(int index);

    void print_Popular_products();

    void heapify_down(vector<product*> heap, int index);
};

#endif // MAXHEAP_H
