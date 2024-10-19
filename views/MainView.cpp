#include "header/MainView.hpp"
#include "header/AuthView.hpp"

MainView::MainView() {
    this->setMenus();
}

MainView::MainView(ProductView *productView, CategoryView* categoryView, AuthService* authSrv, CartView* cartView):
productView(productView), categoryView(categoryView), authSrv(authSrv), cartView(cartView) {
    this->setMenus();
}

void MainView::setAuthView(AuthView* authView) {
    this->authView = authView;
}

void MainView::showEntryPointMenu() {
    cout << endl << "MAIN MENU" << endl;
    vector<Menu> menus = HelperService::getMenusByRole(this->authSrv->getUser()->getRole(), this->menus);
    HelperService::showMenus(menus);
    int choosen = HelperService::inputNum("Input menu", menus.size());
    menus.at(choosen - 1).callback();
    this->showEntryPointMenu();
}

void MainView::logout() {
    this->authView->showMenus();
}

void MainView::setMenus() {
    Menu productMenu("Feature for Product", "all", [this]() { this->productView->showMenus(); });
    Menu categoryMenu("Feature for Category", "admin", [this]() { this->categoryView->showMenus(); });
    Menu cartMenu("Feature for cart", "customer", [this]() { this->cartView->showMenus(); });
    Menu logoutMenu("Logout", "all", [this]() { this->logout(); });
    
    this->menus = {
        productMenu, categoryMenu, cartMenu, logoutMenu
    };
}