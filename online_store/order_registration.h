#ifndef ORDER_REGISTRATION_H
#define ORDER_REGISTRATION_H

#include <QDialog>

namespace Ui {
class order_registration;
}

class order_registration : public QDialog
{
    Q_OBJECT

public:
    explicit order_registration(QWidget *parent = nullptr);
    ~order_registration();

private:
    Ui::order_registration *ui;
};

#endif // ORDER_REGISTRATION_H
