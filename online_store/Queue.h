#ifndef QUEUE_H
#define QUEUE_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>

#include <vector>
#include "Order.h"

class queue
{
private:
    vector<order*> list;
public:
    queue();

    void enqueue(order* order);

    void dequeue();
};

#endif // QUEUE_H
