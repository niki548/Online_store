#ifndef REMOVE_PRODUCT_H
#define REMOVE_PRODUCT_H

#include <QDialog>

namespace Ui {
class remove_product;
}

class remove_product : public QDialog
{
    Q_OBJECT

public:
    explicit remove_product(QWidget *parent = nullptr);
    ~remove_product();

private:
    Ui::remove_product *ui;
};

#endif // REMOVE_PRODUCT_H
