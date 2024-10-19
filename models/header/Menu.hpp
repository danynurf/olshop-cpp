#ifndef MENU_HPP
#define MENU_HPP

#include <iostream>
#include <functional>

using std::string;
using std::function;
using std::cout;
using std::endl;

class Menu {
private:
    string menu;
    string role;
    function<void()> callbackFunc;

public:
    Menu();
    Menu(string menu, string role, function<void()> callbackFunc);
    void setMenu(string menu);
    string getMenu();
    void setRole(string role);
    string getRole();
    void setCallback(function<void()> callbackFunc);
    void callback();
};

#endif