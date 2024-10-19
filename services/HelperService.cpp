#include "header/HelperService.hpp"

HelperService::HelperService() {}

int HelperService::inputNum(string message, int max) {
    int num;
    do {
        cout << message;
        printf(" (1-%d) : ", max);
        cin >> num;
    } while(num < 1 || num > max);
    return num;
}

string HelperService::generateUUID() {
    ostringstream oss;
    random_device rd; 
    mt19937 gen(rd());
    uniform_int_distribution<int> dis(0, 15);

    // Generate UUID format: 8-4-4-4-12
    for (int i = 0; i < 8; ++i) {
        oss << hex << dis(gen);
    }
    oss << '-';
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            oss << hex << dis(gen);
        }
        oss << '-';
    }
    for (int i = 0; i < 12; ++i) {
        oss << hex << dis(gen);
    }

    return oss.str();
}

void HelperService::showMenus(vector<Menu> menus) {
    int i = 0;
    for(Menu menu : menus) {
        cout << ++i << ". " << menu.getMenu() << endl;
    }
}

vector<Menu> HelperService::getMenusByRole(string role, vector<Menu> menus) {
    vector<Menu> filteredMenus;
    for(Menu menu : menus) {
        if(menu.getRole() == role || menu.getRole() == "all") {
            filteredMenus.push_back(menu);
        }
    }
    return filteredMenus;
}