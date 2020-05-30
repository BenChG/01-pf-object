#include "PersonalFinances.h"

char PersonalFinances::selectOptionFromLoggingMenu()
{
    adjunctiveMethods.selectOptionFromLoggingMenu();
}

void PersonalFinances::userRegistration()
{
    userManager.userRegistration();
}

int PersonalFinances::logInUser()
{
    userManager.logInUser();
}

char PersonalFinances::selectOptionFromMainMenu()
{
    adjunctiveMethods.selectOptionFromMainMenu();
}

int PersonalFinances::logOffUser()
{
    userManager.logOffUser();
}

void PersonalFinances::addNewIncome()
{
    cout << income.downloadIncomeId() << endl;
    cout << income.downloadIncomeDate() << endl;
    cout << income.downloadIncomeName() << endl;
    cout << setprecision(2) << fixed << income.downloadIncomeAmount() << endl;
    system ("pause");
}
