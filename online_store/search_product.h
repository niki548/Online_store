#ifndef SEARCH_PRODUCT_H
#define SEARCH_PRODUCT_H

#include <QDialog>

namespace Ui {
class search_product;
}

class search_product : public QDialog
{
    Q_OBJECT

public:
    explicit search_product(QWidget *parent = nullptr);
    ~search_product();

private:
    Ui::search_product *ui;
};

#endif // SEARCH_PRODUCT_H
