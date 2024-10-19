#ifndef CATEGORY_VIEW_HPP
#define CATEGORY_VIEW_HPP

#include <iostream>
#include <vector>
#include "../../services/header/CategoryService.hpp"
#include "../../services/header/HelperService.hpp"
#include "../../models/header/Category.hpp"
#include "../../models/header/Menu.hpp"

using std::cin;
using std::cout;
using std::string;
using std::getline;
using std::ws;
using std::endl;
using std::vector;
class MainView;

class CategoryView {
private:
    CategoryService* categorySrv;
    vector<Menu> categoryMenus;
    MainView* mainView;
    void setMenus();
    
public:
    CategoryView();
    CategoryView(CategoryService* categorySrv);
    void setMainMenu(MainView* mainView);
    void add();
    void showAll();
    void update();
    void destroy();
    void showMenus();
    void toMainMenu();
};

#endif