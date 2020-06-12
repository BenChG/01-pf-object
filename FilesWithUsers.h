#ifndef FILESWITHUSERS_H
#define FILESWITHUSERS_H

#include <fstream>
#include <vector>
#include "User.h"
#include "Markup.h"
#include "AdjunctiveMethods.h"

using namespace std;

class FilesWithUsers
{
    User user;
    AdjunctiveMethods adjunctiveMethods;
    const string NAME_OF_FILE_WITH_USERS;
    vector <User> users;
    fstream file;

public:

    FilesWithUsers(string nameOfFileWithUsers)
        : NAME_OF_FILE_WITH_USERS (nameOfFileWithUsers)
    {};

    void addNewUserToTheFileWithUsers(int id, string login, string password, string firstName, string lastName);
    void saveNewPasswordInTheFileWithUsers (string newPassword, int idOfLoggedInUser);
    vector <User> loadUsersFromTheFile();
};

#endif
