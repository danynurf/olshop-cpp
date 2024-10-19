#include "header/Cart.hpp"

Cart::Cart() {}

Cart::Cart(int quantity, User user, Product product):
quantity(quantity), user(user), product(product) {
    this->id = HelperService::generateUUID();
    this->createdAt = time(0);
    this->editedAt = time(0);
}

void Cart::setId(string id) {
    this->id = id;
}

string Cart::getId() {
    return this->id;
}

void Cart::setQuantity(int quantity) {
    this->quantity = quantity;
}

void Cart::addQuantity(int quantity) {
    this->quantity += quantity;
}

int Cart::getQuantity() {
    return this->quantity;
}

void Cart::setUser(User user) {
    this->user = user;
}

User Cart::getUser() {
    return this->user;
}

void Cart::setProduct(Product product) {
    this->product = product;
}

Product Cart::getProduct() {
    return this->product;
}

void Cart::setCreatedAt(time_t time) {
    this->createdAt = time;
}

time_t Cart::getCreatedAt() {
    return this->createdAt;
}

void Cart::setEditedAt(time_t time) {
    this->editedAt = time;
}

time_t Cart::getEditedAt() {
    return this->editedAt;
}