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
    FinanceManager *financeManager;
    const string NAME_OF_FILE_WITH_INCOMES;
    const string NAME_OF_FILE_WITH_EXPENSES;


public:

    PersonalFinances(string nameOfFileWithUsers, string nameOfFileWithIncomes, string nameOfFileWithExpenses)
        : userManager(nameOfFileWithUsers),
          NAME_OF_FILE_WITH_INCOMES (nameOfFileWithIncomes),
          NAME_OF_FILE_WITH_EXPENSES (nameOfFileWithExpenses)
        {
    financeManager = NULL;
    };

    ~PersonalFinances()
    {
     delete financeManager;
     financeManager = NULL;
    };

    char selectOptionFromLoggingMenu();
    char selectOptionFromMainMenu();
    void userRegistration();
    void addNewIncome();
    void addNewExpense();
    void changeThePassword();
    void balanceOfCurrentMonth();
    void balanceOfPreviousMonth();
    int logInUser();
    int logOffUser();
};

#endif

