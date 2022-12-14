#pragma once

#include <Entity>

#include <QDebug>

class DAO
{
private:
    static DAO* self;

    DAO() {}
    DAO(const DAO&);
    DAO& operator=(DAO&);

public:
    static DAO* getConnection();

    auto getListOfCustomers() -> ListCustomer;
    auto getListOfOrders() -> ListOrder;
    auto getListOfProducts() -> ListProduct;
};
