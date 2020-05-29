#ifndef ADJUNCTIVEMETHODS_H
#define ADJUNCTIVEMETHODS_H

#include <iostream>
#include <cstdlib>

using namespace std;

class AdjunctiveMethods
{
    char choice;
    public:
    char selectOptionFromLoggingMenu();
    char loadSign();
    string loadLines();
     char selectOptionFromMainMenu();
};

#endif
