#ifndef PAYMENT_METHOD_HPP
#define PAYMENT_METHOD_HPP

#include <iostream>
#include "../../services/header/HelperService.hpp"

using std::string;

class PaymentMethod {
private:
    string id;
    string code;
    string name;
    string description;
    bool isDefault;

public:
    PaymentMethod();
    PaymentMethod(string code, string name, string description, bool isDefault);
    void setId(string id);
    string getId();
    void setCode(string code);
    string getCode();
    void setName(string name);
    string getName();
    void setDescription(string description);
    string getDescription();
    void setIsDefault(bool isDefault);
    bool getIsDefault();
};

#endif