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
    static maxheap* omaxheap;
public:
    maxheap();

    void insert(product* p);

    void maxHeapify(int index);

    vector<product*> print_Popular_products();

    void heapify_down(vector<product*> &heap, int index);

    void delete_product(product* p);

    void increase_key(product* p);

    static maxheap* getmaxheap();

    vector<product*> getList();
};



#endif // MAXHEAP_H
