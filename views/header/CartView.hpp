#ifndef CART_VIEW_HPP
#define CART_VIEW_HPP

#include <iostream>
#include <vector>
#include "../../models/header/Menu.hpp"
#include "../../services/header/HelperService.hpp"
#include "../../services/header/ProductService.hpp"
#include "../../services/header/CartService.hpp"
#include "../../services/header/AuthService.hpp"
#include "ProductView.hpp"

using std::string;
using std::cout;
using std::cin;
using std::vector;
class MainView;

class CartView {
private:
    vector<Menu> menus;
    CartService* cartSrv;
    MainView* mainView;
    ProductView* productView;
    ProductService* productSrv;
    AuthService* authSrv;
    
    void setMenus();
    void add();
    void update();
    void destroy();
    void showAll();
    void toMainMenu();

public:
    CartView();
    CartView(CartService* cartSrv, ProductView* productView, ProductService* productSrv, AuthService* authSrv);
    void setMainView(MainView* mainView);
    void showMenus();
};

#endif