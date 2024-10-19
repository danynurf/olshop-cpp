#include "header/ProductView.hpp"
#include "header/MainView.hpp"

ProductView::ProductView() {
    this->setMenus();
}

ProductView::ProductView(ProductService* productSrv, AuthService* authSrv, CategoryService* categorySrv):
productSrv(productSrv), authSrv(authSrv), categorySrv(categorySrv) {
    this->setMenus();
}

void ProductView::setMainView(MainView* mainView) {
    this->mainView = mainView;
}

void ProductView::showMenus() {
    this->user = this->authSrv->getUser();
    vector<Menu> menus = HelperService::getMenusByRole(this->user->getRole(), this->productMenus);
    HelperService::showMenus(menus);

    int choosen = HelperService::inputNum("Input menu", menus.size());
    menus.at(choosen - 1).callback();
    this->showMenus();
}

void ProductView::add() {
    cout << endl << "ADD PRODUCT" << endl;

    string name;
    cout << "Input product name : ";
    getline(cin >> ws, name);
    if(this->productSrv->isNameExist(name)) {
        cout << endl << "Product name is exist" << endl;
        return;
    }

    string description;
    cout << "Input description : ";
    getline(cin >> ws, description);
    Product newProduct(name, description, 100, this->categorySrv->getAll());
    this->productSrv->add(&newProduct);
}

void ProductView::showAll() {
    cout << endl << "LIST PRODUCT" << endl;

    for(Product product : this->productSrv->getAll()) {
        cout << endl << "ID\t\t" << product.getId() << endl;
        cout << "Name\t\t" << product.getName() << endl;
        cout << "Description\t" << product.getDescription() << endl;
        cout << "Stock\t\t" << product.getStock() << endl;
    }
}

void ProductView::toMainMenu() {
    this->mainView->showEntryPointMenu();
}

void update();
void destroy();
void search();
void review();

void ProductView::setMenus() {
    Menu addMenu("Add Product", "admin", [this]() { this->add(); });
    Menu showMenu("Show Products", "all", [this]() { this->showAll(); });
    Menu back("Back to Main Menu", "all", [this]() { this->toMainMenu(); });
    this->productMenus = {
        addMenu, showMenu, back
    };
}

/*

[this]() { this->add(); } ini merupakan syntax dari lambda expression

*/