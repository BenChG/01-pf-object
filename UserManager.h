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

    const string NAME_OF_FILE_WITH_USERS;
    vector <User> users;
    int idOfLoggedInUser;

    public:

         UserManager(string nameOfFileWithUsers)
        : filesWithUsers(nameOfFileWithUsers),
          NAME_OF_FILE_WITH_USERS (nameOfFileWithUsers)
    {
        users=filesWithUsers.loadUsersFromTheFile();
        idOfLoggedInUser=0;
    };

    User userRegistration();
    int loggInUser();
    int findUser(User user, string login);

};

#endif
