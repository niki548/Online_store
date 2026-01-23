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
    static queue* oqueue;
public:
    queue();

    void enqueue(order* order);

    void dequeue();

    static queue* get_queue();

    vector<order*> getVector();
};

#endif // QUEUE_H
