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
    char selectOptionFromLoggingMenu();
    char loadSign();
    string loadLines();
    float loadValue();
    char selectOptionFromMainMenu();
    string changeIntIntoString(int number);
    int changeStringIntoInt(string text);
    char chooseDateVariant();
    string verifyIfAmountIsCorrect();
    float changeStringIntoFloat (string str);
};

#endif
