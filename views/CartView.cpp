#include "header/CartView.hpp"
#include "header/MainView.hpp"

CartView::CartView() {}

CartView::CartView(CartService* cartSrv, ProductView* productView, ProductService* productSrv, AuthService* authSrv):
cartSrv(cartSrv), productView(productView), productSrv(productSrv), authSrv(authSrv) {
    this->setMenus();
}

void CartView::setMainView(MainView* mainView) {
    this->mainView = mainView;
}

void CartView::showMenus() {
    cout << endl << "CART" << endl;
    HelperService::showMenus(this->menus);
    int choosen = HelperService::inputNum("Input menu", this->menus.size());
    this->menus.at(choosen - 1).callback();
    this->showMenus();
}

void CartView::setMenus() {
    Menu addMenu("Add to Cart", "customer", [this]() { this->add(); });
    Menu updateMenu("Edit Chart", "customer", [this]() { this->update(); });
    Menu showMenu("Show Charts", "customer", [this]() { this->showAll(); });
    Menu deleteMenu("Delete Chart", "customer", [this]() { this->destroy(); });
    Menu backMenu("Back to Main Menu", "customer", [this]() { this->toMainMenu(); });

    this->menus = {
        addMenu, showMenu, updateMenu, deleteMenu, backMenu
    };
}

void CartView::add() {
    cout << endl << "ADD TO CART" << endl;
    this->productView->showAll();

    string productId;
    cout << "Input Product ID : ";
    getline(cin >> ws, productId);

    Product* product = this->productSrv->findProduct(productId);
    if(!product) {
        cout << endl << "Product not found" << endl;
        return;
    }

    int quantity = HelperService::inputNum("Input quantity you want", product->getStock());
    Cart newCart(quantity, *this->authSrv->getUser(), *product);
    this->cartSrv->add(&newCart);
}

void CartView::update() {

}

void CartView::destroy() {

}

void CartView::showAll() {
    cout << endl << "CART LIST" << endl;

    for(Cart cart : this->cartSrv->getAll()) {
        cout << endl << "ID Cart\t\t" << cart.getId() << endl;
        cout << "Product\t\t" << cart.getProduct().getName() << endl;
        cout << "Quantity\t" << cart.getQuantity() << endl;
    }
}

void CartView::toMainMenu() {
    this->mainView->showEntryPointMenu();
}