#ifndef PRODUCT_H
#define PRODUCT_H
using namespace std;

#include <QMainWindow>
#include <QObject>
#include <QWidget>

class product
{
private:
    string name;
    int stock;
    int price;
    int salenumber;
public:
    product(string name, int stock, int price, int salenumber);

    void setName(string name);
    void setStock(int stock);
    void setPrice(int price);
    void setSalanumber(int salenumber);

    string getName();
    int getStock();
    int getPrice();
    int getSalenumber();
};

#endif // PRODUCT_H
