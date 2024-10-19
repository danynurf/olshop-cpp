#include "header/PaymentService.hpp"

PaymentService::PaymentService() {
    this->dataSeeding();
}

void PaymentService::dataSeeding() {
    PaymentMethod paymentDefault("def", "OSH Pay", "Pembayaran default", true);
    this->paymentMethods = {paymentDefault};
}

vector<PaymentMethod> PaymentService::getAll() {
    return this->paymentMethods;
}