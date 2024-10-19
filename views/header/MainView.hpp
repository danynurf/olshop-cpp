#ifndef MAIN_VIEW_HPP
#define MAIN_VIEW_HPP

#include <iostream>
#include <vector>
#include "../../models/header/Menu.hpp"
#include "ProductView.hpp"
#include "CategoryView.hpp"
#include "CartView.hpp"
#include "../../services/header/HelperService.hpp"
#include "../../services/header/AuthService.hpp"

using std::string;
using std::vector;
using std::cout;
using std::cin;
class AuthView;

class MainView {
private:
    vector<Menu> menus;
    AuthService* authSrv;
    ProductView* productView;
    CategoryView* categoryView;
    CartView* cartView;
    AuthView* authView;

    void setMenus();

public:
    MainView();
    MainView(ProductView *productView, CategoryView* categoryView, AuthService* authSrv, CartView* cartView);
    void setAuthView(AuthView* authView);
    void showEntryPointMenu();
    void logout();
};

#endif