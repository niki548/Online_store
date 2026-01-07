#ifndef HASHMAP_H
#define HASHMAP_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <Product.h>

class HNode{
public:
    product* p;
    HNode* next;

    HNode(product* p){
        this->p = p;
        next = nullptr;
    }
};

class hashmap
{
private:
    int tablesize;
    HNode** hash_list;
public:
    hashmap();

    void search_map(product* p);

    void set_map(product *p);

    void delete_map(product *p);

    int hash(std::string name);
};

#endif // HASHMAP_H
