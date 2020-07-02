#include "PersonalFinances.h"

char PersonalFinances::selectOptionFromLoggingMenu()
{
    adjunctiveMethods.selectOptionFromLoggingMenu();
}

char PersonalFinances::selectOptionFromMainMenu()
{
    adjunctiveMethods.selectOptionFromMainMenu();
}

void PersonalFinances::userRegistration()
{
    userManager.userRegistration();
}

void PersonalFinances::addNewIncome()
{
    financeManager->addNewIncome();
}

void PersonalFinances::addNewExpense()
{
    financeManager->addNewExpense();
}

void PersonalFinances::changeThePassword()
{
    userManager.changeThePassword();
}

void PersonalFinances::balanceOfCurrentMonth()
{
  financeManager->balanceOfCurrentMonth();
}

int PersonalFinances::logInUser()
{
    userManager.logInUser();

    financeManager = new FinanceManager (NAME_OF_FILE_WITH_INCOMES, NAME_OF_FILE_WITH_EXPENSES, userManager.downloadIdOfLoggedInUser());
}

int PersonalFinances::logOffUser()
{
    userManager.logOffUser();
}
