#include "header/User.hpp"

User::User() {}

User::User(string username, string password):
username(username), password(password) {}

User::User(string name, string username, string password, string role):
name(name), username(username), password(password), role(role) {
    this->balance = 0.0;
    this->createdAt = time(0);
    this->editedAt = time(0);
}

void User::setId(string id) {
    this->id = id;
}

string User::getId() {
    return this->id;
}

void User::setName(string name) {
    this->name = name;
}

string User::getName() {
    return this->name;
}

void User::setUsername(string username) {
    this->username = username;
}

string User::getUsername() {
    return this->username;
}

void User::setPassword(string password) {
    this->password = password;
}

string User::getPassword() {
    return this->password;
}

void User::setRole(string role) {
    this->role = role;
}

string User::getRole() {
    return this->role;
}

void User::setBalance(double balance) {
    this->balance = 0.0;
}

double User::getBalance() {
    return this->balance;
}

void User::setCreatedAt(time_t time) {
    this->createdAt = time;
}

time_t User::getCreatedAt() {
    return this->createdAt;
}

void User::setEditedAt(time_t time) {
    this->editedAt = time;
}

time_t User::getEditedAt() {
    return this->editedAt;
}