#include "Warehouse.h"
#include "Bst.h"
#include "HashMap.h"
#include "MaxHeap.h"
#include "Admin.h"

warehouse::warehouse() {}

warehouse* warehouse::owarehouse = new warehouse();

warehouse* warehouse::getwarehouse(){
    return owarehouse;
}

void warehouse::add_product(product* p){

    bst::getbst()->insert_bst(p);
    hashmap::gethash()->set_map(p);
    maxheap::getmaxheap()->insert(p);
    product_list.push_back(p);
}

void warehouse::delete_product(product* p){

    bst::getbst()->delete_bst(p);
    hashmap::gethash()->delete_map(p);
    maxheap::getmaxheap()->delete_product(p);

    auto it = find(product_list.begin(), product_list.end(), p);

    if (it != product_list.end()) {
        delete *it;
        product_list.erase(it);
    }

}
