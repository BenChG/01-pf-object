#ifndef DATEMETHODS_H
#define DATEMETHODS_H

#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <string>

using namespace std;

class DateMethods
{
 public:
 string checkIfDataIsCorrect(string date);
 string checkIfYearIsValid (int year, int currentYear);
 string checkIfMonthIsValid (int year, int currentYear, int month, int currentMonth);
 string checkIfDayIsValid (int year, int month, int day);
 string checkIfSignIsValid(char sign);

};

#endif
