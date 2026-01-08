QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Admin.cpp \
    Bst.cpp \
    HashMap.cpp \
    MaxHeap.cpp \
    Order.cpp \
    Product.cpp \
    Queue.cpp \
    Warehouse.cpp \
    add_product.cpp \
    login_page.cpp \
    main.cpp \
    mainwindow.cpp \
    order_processing.cpp \
    order_registration.cpp \
    popular_product.cpp \
    price_filter.cpp \
    remove_product.cpp \
    search_product.cpp \
    warehouse_stock.cpp

HEADERS += \
    Admin.h \
    Bst.h \
    HashMap.h \
    MaxHeap.h \
    Order.h \
    Product.h \
    Queue.h \
    Warehouse.h \
    add_product.h \
    login_page.h \
    mainwindow.h \
    order_processing.h \
    order_registration.h \
    popular_product.h \
    price_filter.h \
    remove_product.h \
    search_product.h \
    warehouse_stock.h

FORMS += \
    add_product.ui \
    login_page.ui \
    mainwindow.ui \
    order_processing.ui \
    order_registration.ui \
    popular_product.ui \
    price_filter.ui \
    remove_product.ui \
    search_product.ui \
    warehouse_stock.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
