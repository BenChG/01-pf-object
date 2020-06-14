#ifndef PERSONALFINANCES_H
#define PERSONALFINANCES_H

#include "AdjunctiveMethods.h"
#include "UserManager.h"
#include "FinanceManager.h"

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
    {};

    char selectOptionFromLoggingMenu();
    char selectOptionFromMainMenu();
    void userRegistration();
    void addNewIncome();
    void addNewExpense();
    void changeThePassword();
    void balanceOfCurrentMonth();
    void showTheBalance(Income income);
    int logInUser();
    int logOffUser();
};

#endif

