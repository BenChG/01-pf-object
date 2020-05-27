#ifndef PERSONALFINANCES_H
#define PERSONALFINANCES_H

#include <iostream>
#include <vector>

#include "AdjunctiveMethods.h"
#include "UserManager.h"

using namespace std;

class PersonalFinances
{
    AdjunctiveMethods adjunctiveMethods;
    UserManager userManager;
    const string NAME_OF_FILE_WITH_USERS;

public:
    PersonalFinances(string nameOfFileWithUsers)
        : userManager(nameOfFileWithUsers),
          NAME_OF_FILE_WITH_USERS (nameOfFileWithUsers)
    {
        //adresatMenedzer = NULL;
    };

    ~PersonalFinances()
    {
        //delete adresatMenedzer;
        //adresatMenedzer = NULL;
    };

    char selectOptionFromLoggingMenu();
    void userRegistration();
};

#endif

