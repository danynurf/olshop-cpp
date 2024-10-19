#ifndef CATEGORY_SERVICE_HPP
#define CATEGORY_SERVICE_HPP

#include <iostream>
#include <vector>
#include "../../models/header/Category.hpp"

using std::vector;
using std::string;

class CategoryService {
private:
    vector<Category> categories;
    void setCategories();

public:
    CategoryService();
    void add(Category *category);
    vector<Category> getAll();
    bool isNameExist(string name);
    void update(Category *category, int idx);
    void destroy(int idx);
};

#endif