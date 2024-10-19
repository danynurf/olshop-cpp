#ifndef PAYMENT_SERVICE_HPP
#define PAYMENT_SERVICE_HPP

#include <iostream>
#include <vector>
#include "../../models/header/PaymentMethod.hpp"

using std::vector;

class PaymentService {
private:
    vector<PaymentMethod> paymentMethods;

public:
    PaymentService();
    vector<PaymentMethod> getAll();
    void dataSeeding();
};

#endif