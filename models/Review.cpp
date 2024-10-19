#include "header/Review.hpp"

Review::Review() {}

Review::Review(int rate, string comment, User user, Product product):
rate(rate), comment(comment), user(user), product(product) {}

void Review::setId(string id) {
    this->id = id;
}

string Review::getId() {
    return this->id;
}

void Review::setRate(int rate) {
    this->rate = rate;
}

int Review::getRate() {
    return this->rate;
}

void Review::setComment(string comment) {
    this->comment = comment;
}

string Review::getComment() {
    return this->comment;
}

void Review::setUser(User user) {
    this->user = user;
}

User Review::getUser() {
    return this->user;
}

void Review::setProduct(Product product) {
    this->product = product;
}

Product Review::getProduct() {
    return this->product;
}

void Review::setCreatedAt(time_t time) {
    this->createdAt = time;
}

time_t Review::getCreatedAt() {
    return this->createdAt;
}

void Review::setEditedAt(time_t time) {
    this->editedAt = time;
}

time_t Review::getEditedAt() {
    return this->editedAt;
}