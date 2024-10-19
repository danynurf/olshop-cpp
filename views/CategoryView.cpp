#include "header/CategoryView.hpp"
#include "header/MainView.hpp"

CategoryView::CategoryView() {}

CategoryView::CategoryView(CategoryService* categorySrv):
categorySrv(categorySrv) {
    this->setMenus();
}

void CategoryView::setMainMenu(MainView* mainView) {
    this->mainView = mainView;
}

void CategoryView::showMenus() {
    HelperService::showMenus(this->categoryMenus);
    int choosen = HelperService::inputNum("Input menu", this->categoryMenus.size());
    this->categoryMenus.at(choosen - 1).callback();
    this->showMenus();
}

void CategoryView::setMenus() {
    Menu add("Add Category", "admin", [this]() { this->add(); });
    Menu showAll("Show All Category", "admin", [this]() { this->showAll(); });
    Menu edit("Edit Category", "admin", [this]() { this->update(); });
    Menu destroy("Delete Category", "admin", [this]() { this->destroy(); });
    Menu back("Back to Main Menu", "all", [this]() { this->toMainMenu(); });
    this->categoryMenus = {
        add, showAll, edit, destroy, back
    };
}

void CategoryView::add() {
    cout << endl << "ADD CATEGORY" << endl;

    string name;
    cout << "Input name : ";
    getline(cin >> ws, name);

    if(this->categorySrv->isNameExist(name)) {
        cout << endl << "Name is exist" << endl;
        return;
    }

    string description;
    cout << "Input description : ";
    getline(cin >> ws, description);

    Category newCategory(name, description);
    this->categorySrv->add(&newCategory);
}

void CategoryView::showAll() {
    cout << endl << "LIST CATEGORIES" << endl;

    for(Category category : this->categorySrv->getAll()) {
        cout << endl << "ID\t" << category.getId() << endl;
        cout << "Name\t" << category.getName() << endl;
        cout << "Description\t" << category.getDescription() << endl;
    }
}

void CategoryView::update() {

}

void CategoryView::destroy() {

}

void CategoryView::toMainMenu() {
    this->mainView->showEntryPointMenu();
}