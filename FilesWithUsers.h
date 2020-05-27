#ifndef FILESWITHUSERS_H
#define FILESWITHUSERS_H

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <vector>
#include "User.h"
#include "Markup.h"

using namespace std;

class FilesWithUsers
{
    const string NAME_OF_FILE_WITH_USERS;
    vector <User> users;
    User user;
    fstream file;

public:
    FilesWithUsers(string nameOfFileWithUsers)
        : NAME_OF_FILE_WITH_USERS (nameOfFileWithUsers){};

  void addNewUserToTheFileWithUsers(int id, string login, string password, string firstName, string lastName);
};

#endif
