#ifndef HELPER_SERVICE_HPP
#define HELPER_SERVICE_HPP

#include <iostream>
#include <random>
#include <sstream>
#include <iomanip>
#include <vector>
#include "../../models/header/Menu.hpp"

using std::cout;
using std::cin;
using std::string;
using std::ostringstream;
using std::random_device;
using std::mt19937;
using std::uniform_int_distribution;
using std::hex;
using std::vector;

class HelperService {
public:
    HelperService();
    static int inputNum(string message, int max);
    static string generateUUID();
    static void showMenus(vector<Menu> menus);
    static vector<Menu> getMenusByRole(string role, vector<Menu> menus);
};

#endif