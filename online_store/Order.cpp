#include "Order.h"

order::order() {

    state = "waiting";
}

string order::getstate(){
    return this->state;
}

void order::setstate(string state){
    this->state = state;
}

