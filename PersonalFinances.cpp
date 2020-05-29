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
