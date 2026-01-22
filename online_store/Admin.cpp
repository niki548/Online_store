#include "Admin.h"
#include "Queue.h"

admin* admin::newadmin = nullptr;

admin::admin(string u, string p) {
    this->username = u;
    this->password = p;
    this->loggedIn = false;
}

void admin::signup(string u, string p){
     newadmin = new admin(u, p);
}

admin* admin::login(string u, string p){

    if(u == "admin" && p == "1234"){
        if(newadmin == nullptr){
           // you are not sighn in
            return nullptr;
        }
        newadmin->loggedIn = true;
        return newadmin;
    }
    return nullptr;
}

void admin::logout(){
    if(newadmin != nullptr){
        newadmin->loggedIn = false;
    }
}

admin* admin::getadmin(){
    if(newadmin != nullptr && newadmin->loggedIn){
        return newadmin;
    }
    return nullptr;
}

bool admin::isloggedIn() const {
    return this->loggedIn;
}

void admin::add_product_to_warehouse(product* p){

    warehouse* w = warehouse::getwarehouse();
    w->add_product(p);
}

void admin::delete_product_from_warehouse(product* p){

    warehouse* w = warehouse::getwarehouse();
    w->delete_product(p);
}

void admin::confirm_product(product* p){

    int newStock = p->getStock() - 1;
    p->setStock(newStock);

    int newSalenumber = p->getSalenumber() + 1;
    p->setSalanumber(newSalenumber);
}



