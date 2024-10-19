#include "header/Menu.hpp"

Menu::Menu() {};

Menu::Menu(string menu, string role, function<void()> callbackFunc):
menu(menu), role(role), callbackFunc(callbackFunc) {}

void Menu::setMenu(string menu) {
    this->menu = menu;
}

string Menu::getMenu() {
    return this->menu;
}

void Menu::setRole(string role) {
    this->role = role;
}

string Menu::getRole() {
    return this->role;
}

void Menu::setCallback(function<void()> callbackFunc) {
    this->callbackFunc = callbackFunc;
}

void Menu::callback() {
    if(this->callbackFunc) {
        this->callbackFunc();
    } else {
        cout << endl << "Ga ada" << endl;
    }
}