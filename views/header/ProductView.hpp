#ifndef PRODUCT_VIEW_HPP
#define PRODUCT_VIEW_HPP

#include <iostream>
#include <vector>
#include "../../models/header/Product.hpp"
#include "../../models/header/Menu.hpp"
#include "../../models/header/User.hpp"
#include "../../services/header/ProductService.hpp"
#include "../../services/header/AuthService.hpp"
#include "../../services/header/HelperService.hpp"
#include "../../services/header/CategoryService.hpp"

using std::cout;
using std::cin;
using std::getline;
using std::ws;
using std::string;
using std::endl;
using std::vector;
class MainView;

class ProductView {
private:
    vector<Menu> productMenus;
    ProductService* productSrv;
    CategoryService* categorySrv;
    AuthService* authSrv;
    MainView* mainView;
    User* user;

    void setMenus();

public:
    ProductView();
    ProductView(ProductService* productSrv, AuthService* authSrv, CategoryService* categorySrv);
    void setMainView(MainView* mainView);
    void toMainMenu();
    void showMenus();
    void add();
    void showAll();
    void update();
    void destroy();
    void search();
    void review();
};

#endif