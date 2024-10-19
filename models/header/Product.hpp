#ifndef PRODUCT_HPP
#define PRODUCT_HPP

#include <iostream>
#include <time.h>
#include <vector>
#include "Category.hpp"
#include "../../services/header/HelperService.hpp"

using std::string;
using std::vector;

class Product {
private:
    string id;
    string name;
    vector<Category> categories;
    int stock;
    string description;
    time_t createdAt;
    time_t editedAt;

public:
    Product();
    Product(string name, string description, int stock, vector<Category> categories);
    void setId(string id);
    string getId();
    void setName(string name);
    string getName();
    void setDescription(string description);
    string getDescription();
    void setStock(int stock);
    int getStock();
    void addCategory(Category category);
    vector<Category> getCategories();
    void setCreatedAt(time_t time);
    time_t getCreatedAt();
    void setEditedAt(time_t time);
    time_t getEditedAt();
};

#endif