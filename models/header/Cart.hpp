#ifndef CART_HPP
#define CART_HPP

#include <iostream>
#include <time.h>
#include "Product.hpp"
#include "User.hpp"
#include "../../services/header/HelperService.hpp"

using std::string;

class Cart {
private:
    string id;
    User user;
    Product product;
    int quantity;
    time_t createdAt;
    time_t editedAt;

public:
    Cart();
    Cart(int quantity, User user, Product product);
    void setId(string id);
    string getId();
    void setQuantity(int quantity);
    void addQuantity(int quantity);
    int getQuantity();
    void setUser(User user);
    User getUser();
    void setProduct(Product product);
    Product getProduct();
    void setCreatedAt(time_t time);
    time_t getCreatedAt();
    void setEditedAt(time_t time);
    time_t getEditedAt();
};

#endif