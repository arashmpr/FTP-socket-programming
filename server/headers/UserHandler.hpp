#ifndef USER_HANDLER_HPP
#define USER_HANDLER_HPP

#include <string>
#include <vector>
#include <iostream>

#include "User.hpp"
#include "ErrorHandler.hpp"

class UserHandler {
    public:
        static User* find_user(char* username);
        static std::vector<User*> users;
};

#endif