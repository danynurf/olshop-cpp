#include "header/Category.hpp"

Category::Category() {}

Category::Category(string name, string description):
name(name), description(description) {
    this->id = HelperService::generateUUID();
    this->createdAt = time(0);
    this->editedAt = time(0);
}

void Category::setId(string id) {
    this->id = id;
}

string Category::getId() {
    return this->id;
}

void Category::setName(string name) {
    this->name = name;
}

string Category::getName() {
    return this->name;
}

void Category::setDescription(string description) {
    this->description = description;
}

string Category::getDescription() {
    return this->description;
}

void Category::setCreatedAt(time_t time) {
    this->createdAt = time;
}

time_t Category::getCreatedAt() {
    return this->createdAt;
}

void Category::setEditedAt(time_t time) {
    this->editedAt = time;
}

time_t Category::getEditedAt() {
    return this->editedAt;
}