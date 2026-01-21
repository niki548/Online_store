#ifndef BST_H
#define BST_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>

#include <Product.h>


class Node{
public:
    product* pro;
    Node* left;
    Node* right;
    Node* parent;

    Node(product* p){
        left = right = parent = nullptr;
        pro = p;
    }
};

class bst
{
private:
    Node* root;
    static bst* obst;
public:
    bst();

    void insert_bst(product* p);

    void delete_bst(product* p);

    void transplant(Node* n1, Node* n2);

    void printInRnge(Node* node, int min, int max);

    static bst* getbst();

    Node* bst_Minimum(Node* node);
};



#endif // BST_H
