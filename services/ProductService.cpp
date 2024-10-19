#include "header/ProductService.hpp"

ProductService::ProductService() {
    this->dataSeeding();
}

void ProductService::add(Product* product) {
    this->products.push_back(*product);
}

bool ProductService::isNameExist(string name) {
    for(Product product : this->products) {
        if(product.getName() == name) {
            return true;
        }
    }
    return false;
}

vector<Product> ProductService::getAll() {
    return this->products;
}

Product* ProductService::findProduct(string id) {
    for(Product &product : this->products) {
        if(product.getId() == id) {
            return &product;
        }
    }
    return nullptr;
}

void ProductService::update(Product* product, int idx) {
    
}

void destroy();

void ProductService::dataSeeding() {
    Category category("Fruit", "buah buahan");
    vector<Category> categories = {category};
    Product mangga("Mangga", "mangga enak", 50, categories);
    Product manggis("Manggis", "Manggis enak", 50, categories);
    this->products = {
        mangga, manggis
    };
}