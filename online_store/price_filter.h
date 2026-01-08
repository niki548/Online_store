#ifndef PRICE_FILTER_H
#define PRICE_FILTER_H

#include <QDialog>

namespace Ui {
class price_filter;
}

class price_filter : public QDialog
{
    Q_OBJECT

public:
    explicit price_filter(QWidget *parent = nullptr);
    ~price_filter();

private:
    Ui::price_filter *ui;
};

#endif // PRICE_FILTER_H
