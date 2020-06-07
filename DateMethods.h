#ifndef DATEMETHODS_H
#define DATEMETHODS_H

#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <string>
#include "AdjunctiveMethods.h"

using namespace std;


class DateMethods
{
    AdjunctiveMethods adjunctiveMethods;
    string isDateCorrect;


public:

    string checkIfDateIsCorrect(string date);
    string checkIfYearIsValid (int year, int currentYear);
    string checkIfMonthIsValid (int year, int currentYear, int month, int currentMonth);
    string checkIfDayIsValid (int year, int month, int day);
    string checkIfSignIsValid(char sign);
    string loadCurrentDate();

};

#endif
