#ifndef ADJUNCTIVEMETHODS_H
#define ADJUNCTIVEMETHODS_H

#include <iostream>
#include <cstdlib>
#include <sstream>
#include <string>

using namespace std;

class AdjunctiveMethods
{
    char choice;

public:

    char loadSign();
    char selectOptionFromLoggingMenu();
    char selectOptionFromMainMenu();
    char chooseDateVariant();
    string loadLines();
    string changeIntIntoString(int number);
    string verifyIfAmountIsCorrect();
    int changeStringIntoInt(string text);
    float loadValue();
    float changeStringIntoFloat (string str);
};

#endif
