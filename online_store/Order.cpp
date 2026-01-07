#include "Order.h"

order::order(vector<product*> list) {

    order_list = list;
    key = key_order++;
    state = "waiting";
}

string order::getstate(){
    return this->state;
}

void order::setstate(string state){
    this->state = state;
}

int order::getkey(){
    return key;
}

void order::setkey(int key){
    this->key = key;
}
