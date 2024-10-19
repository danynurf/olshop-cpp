#ifndef ORDER_DETAIL_HPP
#define ORDER_DETAIL_HPP

#include <iostream>
#include "Product.hpp"

using std::string;

class OrderDetail {
private:
    string id;
    Product product;
    int quantity;

public:
    OrderDetail();
    OrderDetail(int quantity, Product product);
    void setId(string id);
    string getId();
    void setQuantity(int quantity);
    int getQuantity();
    void setProduct(Product product);
    Product getProduct();
};

#endif