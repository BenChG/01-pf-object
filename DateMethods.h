#ifndef DATEMETHODS_H
#define DATEMETHODS_H

#include <windows.h>
#include "AdjunctiveMethods.h"

using namespace std;

class DateMethods
{
    AdjunctiveMethods adjunctiveMethods;
    string isDateCorrect;

    string checkIfYearIsValid (int year, int currentYear);
    string checkIfMonthIsValid (int year, int currentYear, int month, int currentMonth);
    string checkIfDayIsValid (int year, int month, int day);
    string checkIfSignIsValid(char sign);

public:
    string checkIfDateIsCorrect(string date);
    string loadCurrentDate();
    int changeDateIntoNumericFormat(string date);
};

#endif
