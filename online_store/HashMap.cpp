#include "HashMap.h"
#include <iostream>
using namespace std;

hashmap::hashmap() {
    tablesize = 101;
    hash_list = new HNode*[tablesize];

    for(int i=0; i<tablesize; i++){
        hash_list[i] = nullptr;
    }
}

int hashmap::hash(string name){

    long long hash = 0;

    for(char c : name){
        hash = (hash * 31 * c) / tablesize;
    }

    return hash;
}

void hashmap::set_map(product* p){

    int hash_number = hash(p->getName());

    HNode* newnode = new HNode(p);

    newnode->next = hash_list[hash_number];
    hash_list[hash_number] = newnode;
}

void hashmap::delete_map(product* p){

    int hn = hash(p->getName());
    HNode* newnode = hash_list[hn];
    HNode* newnode1 = nullptr;

    while(newnode != nullptr && newnode->p->getName() != p->getName()){
        newnode1 = newnode;
        newnode = newnode->next;
    }

    if(newnode == nullptr){
        return;
        //not found
    }
    else{

        if(newnode1 == nullptr){
            hash_list[hn] = newnode->next;
        }
        else{
            newnode1->next = newnode->next;
        }
        delete newnode;
    }
}

void hashmap::search_map(product* p){

    int hn = hash(p->getName());

    HNode* newnode = hash_list[hn];

    while(newnode != nullptr && newnode->p->getName() != p->getName()){
        newnode->next;
    }

    if(newnode == nullptr){
        //not found
        return;
    }
    else{
        cout << newnode->p->getStock();
    }
}







