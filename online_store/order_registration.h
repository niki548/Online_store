#ifndef ORDER_REGISTRATION_H
#define ORDER_REGISTRATION_H

#include <QDialog>
#include "Order.h"

namespace Ui {
class order_registration;
}

class order_registration : public QDialog
{
    Q_OBJECT

public:
    explicit order_registration(QWidget *parent = nullptr);
    ~order_registration();

private slots:
    void on_toolButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::order_registration *ui;
    order* neworder;
};

#endif // ORDER_REGISTRATION_H
