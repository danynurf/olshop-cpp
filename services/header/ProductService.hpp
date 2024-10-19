#ifndef PRODUCT_SERVICE_HPP
#define PRODUCT_SERVICE_HPP

#include <iostream>
#include <vector>
#include "../../models/header/Product.hpp"

using std::vector;

class ProductService {
private:
    vector<Product> products;

public:
    ProductService();
    void add(Product* product);
    bool isNameExist(string name);
    vector<Product> getAll();
    void update(Product* product, int idx);
    Product* findProduct(string id);
    void destroy();
    void dataSeeding();
};

#endif