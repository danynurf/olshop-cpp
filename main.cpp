#include "views/header/AuthView.hpp"
#include "views/header/ProductView.hpp"
#include "views/header/MainView.hpp"
#include "views/header/CategoryView.hpp"
#include "views/header/CartView.hpp"

#include "services/header/AuthService.hpp"
#include "services/header/HelperService.hpp"
#include "services/header/ProductService.hpp"
#include "services/header/CategoryService.hpp"
#include "services/header/CartService.hpp"
#include "services/header/PaymentService.hpp"

int main() {
    HelperService helperSrv;
    AuthService authSrv;
    ProductService productSrv;
    CategoryService categorySrv;
    CartService cartSrv(&authSrv);
    PaymentService paymentService;

    CategoryView categoryView(&categorySrv);
    ProductView productView(&productSrv, &authSrv, &categorySrv);
    CartView cartView(&cartSrv, &productView, &productSrv, &authSrv);
    MainView mainView(&productView, &categoryView, &authSrv, &cartView);
    AuthView authView(&authSrv, &helperSrv, &mainView);
    
    productView.setMainView(&mainView);
    categoryView.setMainMenu(&mainView);
    mainView.setAuthView(&authView);
    cartView.setMainView(&mainView);

    authView.showMenus();
}