#include "header/Order.hpp"

Order::Order() {}

Order::Order(User user, PaymentMethod paymentMethod, vector<OrderDetail> orderDetails):
user(user), paymentMethod(paymentMethod), orderDetails(orderDetails) {}

void Order::setId(string id) {
    this->id = id;
}

string Order::getId() {
    return this->id;
}

void Order::setPaymentMethod(PaymentMethod paymentMethod) {
    this->paymentMethod = paymentMethod;
}

PaymentMethod Order::getPaymentMethod() {
    return this->paymentMethod;
}

void Order::setOrderDetails(vector<OrderDetail> orderDetails) {
    this->orderDetails = orderDetails;
}

vector<OrderDetail> Order::getOrderDetails() {
    return this->orderDetails;
}

void Order::setCreatedAt(time_t time) {
    this->createdAt = time;
}

time_t Order::getCreatedAt() {
    return this->createdAt;
}

void Order::setEditedAt(time_t time) {
    this->editedAt = time;
}

time_t Order::getEditedAt() {
    return this->editedAt;
}