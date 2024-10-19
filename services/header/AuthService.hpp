#ifndef AUTH_SERVICE_HPP
#define AUTH_SERVICE_HPP

#include <iostream>
#include <vector>
#include "../../models/header/User.hpp"

using std::vector;

class AuthService {
private:
    vector<User> users;
    User loginedUser;
    void dataSeeding();

public:
    AuthService();
    void registration(User* user);
    bool isSuccessLogin(User* user);
    int findIndex(string username);
    bool isUsernameExist(string username);
    User* getUser();
};

#endif