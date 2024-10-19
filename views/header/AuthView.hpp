#ifndef AUTH_VIEW_HPP
#define AUTH_VIEW_HPP

#include <iostream>
#include <vector>
#include "../../services/header/AuthService.hpp"
#include "../../services/header/HelperService.hpp"
#include "../../models/header/User.hpp"
#include "ProductView.hpp"
#include "MainView.hpp"

using std::cout;
using std::cin;
using std::vector;
using std::string;
using std::endl;
using std::getline;
using std::ws;

class AuthView {
private:
    vector<string> authMenus;
    AuthService* authSrv;
    HelperService* helperSrv;
    MainView* mainView;    

    void registration();
    void login();
    void redirectTo(int main);

public:
    AuthView();
    AuthView(AuthService* authSrv, HelperService* helperSrv, MainView* mainView);
    void showMenus();
};

#endif