#include "header/Product.hpp"

Product::Product() {}

Product::Product(string name, string description, int stock, vector<Category> categories):
name(name), description(description), stock(stock), categories(categories) {
    this->id = HelperService::generateUUID();
    this->createdAt = time(0);
    this->editedAt = time(0);
}

void Product::setId(string id) {
    this->id = id;
}

string Product::getId() {
    return this->id;
}

void Product::setName(string name) {
    this->name = name;
}

string Product::getName() {
    return this->name;
}

void Product::setDescription(string description) {
    this->description = description;
}

string Product::getDescription() {
    return this->description;
}

void Product::setStock(int stock) {
    this->stock = stock;
}

int Product::getStock() {
    return this->stock;
}

void Product::setCreatedAt(time_t time) {
    this->createdAt = time;
}

time_t Product::getCreatedAt() {
    return this->createdAt;
}

void Product::setEditedAt(time_t time) {
    this->editedAt = time;
}

time_t Product::getEditedAt() {
    return this->editedAt;
}