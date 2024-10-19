#include "header/CartService.hpp"

CartService::CartService() {}

CartService::CartService(AuthService* authSrv):
authSrv(authSrv) {}

vector<Cart> CartService::getAll() {
    vector<Cart> filteredCarts;

    for(Cart cart : this->carts) {
        if(cart.getUser().getId() == this->authSrv->getUser()->getId()) {
            filteredCarts.push_back(cart);
        }
    }

    return filteredCarts;
}

void CartService::add(Cart* cart) {
    Cart* cartFound = this->findCartByProduct(cart->getProduct().getId());
    if(cartFound) {
        cout << endl << cart->getQuantity() << endl;
        cartFound->addQuantity(cart->getQuantity());
        cartFound->setEditedAt(time(0));
        cout << endl << "Product already exist in your cart" << endl;
        return;
    }
    this->carts.push_back(*cart);
    cout << endl << "Product successfully added to cart" << endl;
}

void update();
void destroy();

Cart* CartService::findCartByProduct(string id) {
    for(Cart &cart : this->carts) {
        if(
            cart.getProduct().getId() == id && 
            cart.getUser().getId() == this->authSrv->getUser()->getId()
        ) {
            return &cart;
        }
    }
    return nullptr;
}