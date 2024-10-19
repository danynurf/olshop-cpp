#ifndef CART_SERVICE_HPP
#define CART_SERVICE_HPP

#include <iostream>
#include <vector>
#include "../../models/header/Cart.hpp"
#include "AuthService.hpp"

using std::vector;

class CartService {
private:
    vector<Cart> carts;
    AuthService* authSrv;
    
    Cart* findCartByProduct(string id);

public:
    CartService();
    CartService(AuthService* authSrv);
    vector<Cart> getAll();
    void add(Cart* cart);
    void update();
    void destroy();
};

#endif