#include "Queue.h"

queue* queue::oqueue = new queue;

queue::queue() {

}

void queue::enqueue(order* order){

    if (list.empty()) {
        order->setstate("Preparing");
    } else {
        order->setstate("Waiting");
    }

    list.push_back(order);

}

void queue::dequeue(){

    //cout << list[0]->getstate();
    if(list.empty()){
        return;
    }

    order* finishedOrder = list.front();
    delete finishedOrder;

    list.erase(list.begin());

    if (!list.empty()) {
        list[0]->setstate("Preparing");
    }
}

queue* queue::get_queue(){ return oqueue; }

vector<order*> queue::getVector(){ return this->list; }
