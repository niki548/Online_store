#ifndef ADMIN_H
#define ADMIN_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>

using namespace std;

#include <vector>
#include "Product.h"

class admin
{
private:
    static admin* newadmin;
    std::string username;
    std::string password;
    bool loggedIn;

public:
    admin(string u, string p);

    //login and logout
    static admin* login(string u, string p);
    static void logout();
    static admin* getadmin();
    static void signup(string u, string p);
    bool isloggedIn() const;

    //admin function
    void add_product_to_warehouse(product* p);
    void delete_product_from_warehouse(product* p);
    void confirm_product(product* p);

};

extern vector<product*> product_list;

#endif // ADMIN_H
