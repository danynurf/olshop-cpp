#ifndef USER_HPP
#define USER_HPP

#include <iostream>
#include <time.h>

using std::string;

class User {
private:
    string id;
    string name;
    string username;
    string password;
    string role;
    double balance;
    time_t createdAt;
    time_t editedAt;

public:
    User();
    User(string name, string username);
    User(string name, string username, string password, string role);
    void setId(string id);
    string getId();
    void setName(string name);
    string getName();
    void setUsername(string username);
    string getUsername();
    void setPassword(string password);
    string getPassword();
    void setRole(string role);
    string getRole();
    void setBalance(double balance);
    double getBalance();
    void setCreatedAt(time_t time);
    time_t getCreatedAt();
    void setEditedAt(time_t time);
    time_t getEditedAt();
};

#endif