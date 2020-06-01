#ifndef PERSONALFINANCES_H
#define PERSONALFINANCES_H

#include <iostream>
#include <vector>


#include "AdjunctiveMethods.h"
#include "UserManager.h"
#include "FinanceManager.h"
#include "DateMethods.h"

using namespace std;

class PersonalFinances
{
    AdjunctiveMethods adjunctiveMethods;
    UserManager userManager;
    FinanceManager financeManager;

public:
    PersonalFinances(string nameOfFileWithUsers, string nameOfFileWithIncomes, string nameOfFileWithExpenses)
        : userManager(nameOfFileWithUsers),
          financeManager (nameOfFileWithIncomes, nameOfFileWithExpenses)
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
    int logInUser();
    char selectOptionFromMainMenu();
    int logOffUser();
    void addNewIncome();
    void addNewExpense();
};

#endif

