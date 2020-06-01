#ifndef USERMANAGER_H
#define USERMANAGER_H

#include <iostream>
#include "User.h"
#include "FilesWithUsers.h"
#include "AdjunctiveMethods.h"

using namespace std;

class UserManager
{
    User user;
    FilesWithUsers filesWithUsers;
    AdjunctiveMethods adjunctiveMethods;

    vector <User> users;
    int idOfLoggedInUser;

    public:

         UserManager(string nameOfFileWithUsers)
        : filesWithUsers(nameOfFileWithUsers)
    {
        users=filesWithUsers.loadUsersFromTheFile();
        idOfLoggedInUser=0;
    };

    User userRegistration();
    int logInUser();
    int findUser(User user, string login);
    int logOffUser();

};

#endif
