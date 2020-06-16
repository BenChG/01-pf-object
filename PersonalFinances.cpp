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
    financeManager.addNewIncome();
}

void PersonalFinances::addNewExpense()
{
    financeManager.addNewExpense();
}

void PersonalFinances::changeThePassword()
{
    userManager.changeThePassword();
}

void PersonalFinances::balanceOfCurrentMonth()
{
  financeManager.balanceOfCurrentMonth();
}

int PersonalFinances::logInUser()
{
    userManager.logInUser();
}

int PersonalFinances::logOffUser()
{
    userManager.logOffUser();
}


