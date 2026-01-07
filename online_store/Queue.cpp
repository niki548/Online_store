#include "Queue.h"

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
    else{
        list.erase(list.begin());
        list[0]->setstate("Preparing");
    }

}
