#include "header/AuthService.hpp"

AuthService::AuthService() {
    this->dataSeeding();
}

void AuthService::registration(User* user) {
    this->users.push_back(*user);
}

bool AuthService::isSuccessLogin(User* user) {
    int idx = this->findIndex(user->getUsername());
    if(idx == -1) {
        return false;
    }

    string password = this->users.at(idx).getPassword();
    if(password != user->getPassword()) {
        return false;
    }
    this->loginedUser = this->users.at(idx);

    return true;
}

int AuthService::findIndex(string username) {
    for(int i = 0; i < this->users.size(); i++) {
        User user = this->users.at(i);
        if(user.getUsername() == username) {
            return i;            
        }
    }
    return -1;
}

bool AuthService::isUsernameExist(string username) {
    for(User user : this->users) {
        if(user.getUsername() == username) {
            return true;
        }
    }
    return false;
}

void AuthService::dataSeeding() {
    User user("Admin", "admin123", "admin123*", "admin");
    this->users.push_back(user);

    User cust("Jilka", "zilka", "zilka123", "customer");
    this->users.push_back(cust);
}

User* AuthService::getUser() {
    return &this->loginedUser;
}