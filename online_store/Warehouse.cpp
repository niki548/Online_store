#include "Warehouse.h"

warehouse::warehouse() {}


warehouse* warehouse::getwarehouse(){
    return owarehouse;
}

void warehouse::add_product(product* p){

    obst.insert_bst(p);
    ohashmap.set_map(p);
    omaxheap.insert(p);
}
