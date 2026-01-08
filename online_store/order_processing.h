#ifndef ORDER_PROCESSING_H
#define ORDER_PROCESSING_H

#include <QDialog>

namespace Ui {
class Order_processing;
}

class Order_processing : public QDialog
{
    Q_OBJECT

public:
    explicit Order_processing(QWidget *parent = nullptr);
    ~Order_processing();

private:
    Ui::Order_processing *ui;
};

#endif // ORDER_PROCESSING_H
