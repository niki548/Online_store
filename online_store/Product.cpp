#include "Product.h"

product::product(string name, int stock, int price, int salenumber = 0) {

    this->name = name;
    this->stock = stock;
    this->price = price;
    this->salenumber = salenumber;
}

void product::setName(string name){ this->name = name;}

void product::setStock(int stock){ this->stock = stock;}

void product::setPrice(int price){ this->price = price;}

void product::setSalanumber(int salenumber){ this->salenumber = salenumber;}

string product::getName(){ return this->name;}

int product::getStock(){ return this->stock;}

int product::getPrice(){ return this->price;}

int product::getSalenumber(){ return this->salenumber;}
