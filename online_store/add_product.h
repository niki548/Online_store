#ifndef ADD_PRODUCT_H
#define ADD_PRODUCT_H

#include <QDialog>

namespace Ui {
class add_product;
}

class add_product : public QDialog
{
    Q_OBJECT

public:
    explicit add_product(QWidget *parent = nullptr);
    ~add_product();

private:
    Ui::add_product *ui;
};

#endif // ADD_PRODUCT_H
