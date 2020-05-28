#include "PersonalFinances.h"

char PersonalFinances::selectOptionFromLoggingMenu()
{
    adjunctiveMethods.selectOptionFromLoggingMenu();
}

void PersonalFinances::userRegistration()
{
    userManager.userRegistration();
}

int PersonalFinances::loggInUser()
{
    userManager.loggInUser();
}
