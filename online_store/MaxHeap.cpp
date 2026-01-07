#include "MaxHeap.h"
#include <iostream>

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

void maxheap::print_Popular_products(){

    vector<product*> tmp = Popular_products;

    while(!tmp.empty()){

        product* p = tmp[0];
        std::cout << p->getSalenumber();

        tmp[0] = tmp.back();
        tmp.pop_back();

        heapify_down(tmp, 0);
    }

}

void maxheap::heapify_down(vector<product*> heap, int index){

    int size = heap.size();

    while(true){

        int left = (index * 2) + 1;
        int right = (index * 2) + 2;
        int largest = index;

        if(left < size && heap[left]->getSalenumber() > heap[index]->getSalenumber()){
            largest = left;
        }
        if(right < size && heap[right]->getSalenumber() > heap[index]->getSalenumber()){
            largest = right;
        }

        if(largest == index){
            break;
        }

        std::swap(heap[index], heap[largest]);
        index = largest;
    }
}









