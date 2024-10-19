#ifndef REVIEW_HPP
#define REVIEW_HPP

#include <iostream>
#include <time.h>
#include "User.hpp"
#include "Product.hpp"

using std::string;

class Review {
private:
    string id;
    User user;
    Product product;
    int rate;
    string comment;
    time_t createdAt;
    time_t editedAt;

public:
    Review();
    Review(int rate, string comment, User user, Product product);
    void setId(string id);
    string getId();
    void setRate(int rate);
    int getRate();
    void setComment(string comment);
    string getComment();
    void setUser(User user);
    User getUser();
    void setProduct(Product product);
    Product getProduct();
    void setCreatedAt(time_t time);
    time_t getCreatedAt();
    void setEditedAt(time_t time);
    time_t getEditedAt();
};

#endif