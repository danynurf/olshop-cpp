#include "header/CategoryService.hpp"

CategoryService::CategoryService() {}

void CategoryService::add(Category *category) {
    this->categories.push_back(*category);
}
vector<Category> CategoryService::getAll() {
    return this->categories;
}

bool CategoryService::isNameExist(string name) {
    for(Category category : this->categories) {
        if(category.getName() == name) {
            return true;
        }
    }
    return false;
}

void CategoryService::update(Category *category, int idx) {}
void CategoryService::destroy(int idx) {}

void CategoryService::setCategories() {
    Category category1("Tech", "Technology");
    this->categories = {
        category1
    };
}