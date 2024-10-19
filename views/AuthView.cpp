#include "header/AuthView.hpp"

AuthView::AuthView() {}

AuthView::AuthView(AuthService* authSrv, HelperService* helperSrv, MainView* mainView):
authSrv(authSrv), helperSrv(helperSrv), mainView(mainView) {
    this->authMenus = {
        "Register", "Login", "Exit"
    };
}

void AuthView::showMenus() {
    int i = 0;
    for(string menu : this->authMenus) {
        cout << ++i << ". " << menu << endl;
    }
    int menu = this->helperSrv->inputNum("Input menu", this->authMenus.size());
    this->redirectTo(menu);
}

void AuthView::registration() {
    cout << endl << "REGISTRATION" << endl;

    string username;
    cout << "Input username : ";
    cin >> username;

    if(this->authSrv->isUsernameExist(username)) {
        cout << endl << "Error. Username is exist" << endl;
        cout << endl << "Click anything to continue" << endl;
        cin.ignore();
        cin.get();
        return;
    }

    string password;
    cout << "Input password : ";
    cin >> password;

    string name;
    cout << "Input Full Name : ";
    getline(cin >> ws, name);

    User newUser(name, username, password, "customer");
    this->authSrv->registration(&newUser);
}

void AuthView::login() {
    cout << endl << "LOGIN" << endl;

    string username;
    cout << "Input username : ";
    cin >> username;
    
    string password;
    cout << "Input password : ";
    cin >> password;

    User user(username, password);
    if(!this->authSrv->isSuccessLogin(&user)) {
        cout << endl << "Failed login" << endl;
        return;
    }
    this->mainView->showEntryPointMenu();
}

void AuthView::redirectTo(int main) {
    switch(main) {
        case 1: 
            this->registration();
            break;
        case 2:
            this->login();
            break;
        case 3:
            exit(0);
            break;
    }
    this->showMenus();
}