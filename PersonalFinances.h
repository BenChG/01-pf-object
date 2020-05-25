#ifndef PERSONALFINANCES_H
#define PERSONALFINANCES_H

#include <iostream>
#include "AdjunctiveMethods.h"

using namespace std;

class PersonalFinances
{
    AdjunctiveMethods adjunctiveMethods;

    public:
    char selectOptionFromLoggingMenu();
};

#endif

