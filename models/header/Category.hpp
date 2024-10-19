#ifndef CATEGORY_HPP
#define CATEGORY_HPP

#include <iostream>
#include <time.h>
#include "../../services/header/HelperService.hpp"

using std::string;

class Category {
private:
    string id;
    string name;
    string description;
    time_t createdAt;
    time_t editedAt;

public:
    Category();
    Category(string name, string description);
    void setId(string id);
    string getId();
    void setName(string name);
    string getName();
    void setDescription(string description);
    string getDescription();
    void setCreatedAt(time_t time);
    time_t getCreatedAt();
    void setEditedAt(time_t time);
    time_t getEditedAt();
};

#endif