#include "MaxHeap.h"

maxheap* maxheap::omaxheap = new maxheap();

maxheap::maxheap() {}

void maxheap::insert(product* p){

    Popular_products.push_back(p);
    maxHeapify(Popular_products.size() - 1);
}

void maxheap::maxHeapify(int index){

    while(index > 0){

        int parent = (index -1) / 2;
        if(Popular_products[parent]->getSalenumber() >= Popular_products[index]->getSalenumber()){
            break;
        }
        std::swap(Popular_products[parent], Popular_products[index]);
        index = parent;
    }
}

vector<product*> maxheap::print_Popular_products(){

    vector<product*> tmp = Popular_products;
    vector<product*> tmp1;

    while(!tmp.empty()){

        product* p = tmp[0];
       tmp1.push_back(p);

        tmp[0] = tmp.back();
        tmp.pop_back();

        heapify_down(tmp, 0);
    }

    return tmp1;
}

void maxheap::heapify_down(vector<product*> &heap, int index){

    int size = heap.size();

    while(true){

        int left = (index * 2) + 1;
        int right = (index * 2) + 2;
        int largest = index;

        if(left < size && heap[left]->getSalenumber() > heap[largest]->getSalenumber()){
            largest = left;
        }
        if(right < size && heap[right]->getSalenumber() > heap[largest]->getSalenumber()){
            largest = right;
        }

        if(largest == index){
            break;
        }

        std::swap(heap[index], heap[largest]);
        index = largest;
    }
}


void maxheap::delete_product(product* p){

    int index = -1;

    for (size_t i = 0; i < Popular_products.size(); i++) {
        if (Popular_products[i]->getName() == p->getName()) {
            index = i;
            break;
        }
    }

    if(index == -1){
        return;
        // not found
    }

    std::swap(Popular_products[index],Popular_products.back());
    Popular_products.pop_back();

    if (index < Popular_products.size()) {
        heapify_down(Popular_products, index);
        maxHeapify(index);
    }
}


maxheap* maxheap::getmaxheap(){
    return omaxheap;
}

void maxheap::increase_key(product* p){

    int index = -1;

    for (size_t i = 0; i < Popular_products.size(); i++) {
        if (Popular_products[i] == p) {
            index = i;
            break;
        }
    }

    if (index == -1) return;

    while (index > 0) {
        int parent = (index - 1) / 2;

        if (Popular_products[parent]->getSalenumber() >= Popular_products[index]->getSalenumber())
            break;

        swap(Popular_products[parent], Popular_products[index]);
        index = parent;
    }
}

vector<product*> maxheap::getList(){ return this->Popular_products; }
