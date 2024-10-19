#include "header/OrderDetail.hpp"

OrderDetail::OrderDetail() {}

OrderDetail::OrderDetail(int quantity, Product product):
quantity(quantity), product(product) {}

void OrderDetail::setId(string id) {
    this->id = id;
}

string OrderDetail::getId() {
    return this->id;
}

void OrderDetail::setQuantity(int quantity) {
    this->quantity = quantity;
}

int OrderDetail::getQuantity() {
    return this->quantity;
}

void OrderDetail::setProduct(Product product) {
    this->product = product;
}

Product OrderDetail::getProduct() {
    return this->product;
}