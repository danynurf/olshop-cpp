#ifndef ORDER_HPP
#define ORDER_HPP

#include <iostream>
#include <time.h>
#include <vector>
#include "User.hpp"
#include "PaymentMethod.hpp"
#include "OrderDetail.hpp"

using std::string;
using std::vector;

class Order {
private:
    string id;
    User user;
    PaymentMethod paymentMethod;
    vector<OrderDetail> orderDetails;
    time_t createdAt;
    time_t editedAt;

public:
    Order();
    Order(User user, PaymentMethod paymentMethod, vector<OrderDetail> orderDetails);
    void setId(string id);
    string getId();
    void setPaymentMethod(PaymentMethod paymentMethod);
    PaymentMethod getPaymentMethod();
    void setOrderDetails(vector<OrderDetail> orderDetails);
    vector<OrderDetail> getOrderDetails();
    void setCreatedAt(time_t time);
    time_t getCreatedAt();
    void setEditedAt(time_t time);
    time_t getEditedAt();
};

#endif