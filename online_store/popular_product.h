#ifndef POPULAR_PRODUCT_H
#define POPULAR_PRODUCT_H

#include <QDialog>

namespace Ui {
class Popular_product;
}

class Popular_product : public QDialog
{
    Q_OBJECT

public:
    explicit Popular_product(QWidget *parent = nullptr);
    ~Popular_product();

private:
    Ui::Popular_product *ui;
};

#endif // POPULAR_PRODUCT_H
