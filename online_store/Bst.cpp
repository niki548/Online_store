#include "Bst.h"
#include <iostream>

bst::bst() { this->root = nullptr; }

void bst::insert_bst(product* p){

    Node* pr = new Node(p);

    Node* x = root;
    Node* y = nullptr;

    while(x != nullptr){
        y = x;
        if(x->pro->getPrice() > p->getPrice()) x = x->left;
        else x = x->right;
    }

    pr->parent = y;

    if(y == nullptr){
        this->root = pr;
    }

    else if(p->getPrice() < y->pro->getPrice()){
        y->left = pr;
    }

    else{
        y->right = pr;
    }

}

void bst::delete_bst(product* p){

    Node* pnode = this->root;

    while(pnode != nullptr && pnode->pro->getPrice() != p->getPrice()){
        if(pnode->pro->getPrice() > p->getPrice()) pnode = pnode->left;
        else pnode = pnode->right;
    }

    if(pnode == nullptr){
        // this item is not exist
        return;
    }

    if(pnode->left == nullptr){
        transplant(pnode, pnode->right);
    }
    else if(pnode->right == nullptr){
        transplant(pnode, pnode->left);
    }
    else{
        Node* y = bst_Minimum(pnode->right);
        if(y != pnode->right){
            transplant(y, y->right);
            y->right = pnode->right;
            y->right->parent = y;
        }
        transplant(pnode, y);
        y->left = pnode->left;
        y->left->parent = y;
    }
}

Node* bst::bst_Minimum(Node* node){

    while(node->left != nullptr){
        node = node->left;
    }
    return node;
}

void bst::transplant(Node* n1, Node* n2){

    if(n1->parent == nullptr){
        this->root = n2;
    }
    else if(n1 == n1->parent->right){
        n1->parent->right = n2;
    }
    else{
        n1->parent->left = n2;
    }
    if(n2 != nullptr){
        n2->parent = n1->parent;
    }
}

void bst::printInRnge(Node* node,int min, int max){

    if(node == nullptr)
        return;

    if(node->pro->getPrice() > min) {
        printInRnge(node->left, min, max);
    }

    if(node->pro->getPrice() >= min && node->pro->getPrice() <= max){
        std::cout << node->pro->getName();
    }

    if(node->pro->getPrice() < max){
        printInRnge(node->right, min, max);
    }

}











