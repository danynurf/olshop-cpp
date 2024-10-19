#include "header/PaymentMethod.hpp"

PaymentMethod::PaymentMethod() {}

PaymentMethod::PaymentMethod(string code, string name, string description, bool isDefault):
code(code), name(name), description(description), isDefault(isDefault) {
    this->id = HelperService::generateUUID();
}

void PaymentMethod::setId(string id) {
    this->id = id;
}

string PaymentMethod::getId() {
    return this->id;
}

void PaymentMethod::setCode(string code) {
    this->code = code;
}

string PaymentMethod::getCode() {
    return this->code;
}

void PaymentMethod::setName(string name) {
    this->name = name;
}

string PaymentMethod::getName() {
    return this->name;
}

void PaymentMethod::setDescription(string description) {
    this->description = description;
}

string PaymentMethod::getDescription() {
    return this->description;
}

void PaymentMethod::setIsDefault(bool isDefault) {
    this->isDefault = isDefault;
}

bool PaymentMethod::getIsDefault() {
    return this->isDefault;
}