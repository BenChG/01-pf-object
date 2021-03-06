#include "DateMethods.h"

string DateMethods::checkIfYearIsValid(int year, int currentYear)
{
    return (1999<year && year<=currentYear)? "YES" : "NO";
}

string DateMethods::checkIfMonthIsValid(int year, int currentYear, int month, int currentMonth)
{
      if (0<month && month <=12)
    {
        return (year == currentYear && month>currentMonth)? "NO" : "YES";
    }
    else
    {
        return "NO" ;
    }
}

string DateMethods::checkIfDayIsValid(int year, int month, int day)
{
    int daysInTheMonth = 0;

    if (month==4||month==6||month==9||month==11)
    {
        daysInTheMonth = 30;
    }

    else if (month==2)
    {
        daysInTheMonth =(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)? 29 : 28;
    }

    else
    {
        daysInTheMonth = 31;
    }

    return (day<=daysInTheMonth)? "YES" : "NO";
}

string DateMethods::checkIfSignIsValid(char sign)
{
    return (sign==char(45)) ? "YES" : "NO";
}

string DateMethods::checkIfDateIsCorrect(string date)
{
    SYSTEMTIME st;
    GetLocalTime(&st);

    int currentYear=st.wYear;
    int currentMonth=st.wMonth;
    int currentDay=st.wDay;

    if (date.length()==10)
    {
        string isYearValid = "NO";
        string isMonthValid = "NO";
        string isDayValid = "NO";
        string isSignValid = "NO";

        int year = adjunctiveMethods.changeStringIntoInt(date.substr(0,4));
        char sign = date[4];
        int month = adjunctiveMethods.changeStringIntoInt(date.substr(5,2));
        char sign2= date[7];
        int day = adjunctiveMethods.changeStringIntoInt(date.substr(8,2));

        isYearValid = checkIfYearIsValid(year, currentYear);
        if (isYearValid=="YES")
        {
            isSignValid = checkIfSignIsValid(sign);

            if (isSignValid=="YES")
            {
                isMonthValid = checkIfMonthIsValid(year, currentYear, month, currentMonth);

                if (isMonthValid=="YES")
                {
                    isSignValid = checkIfSignIsValid(sign2);

                    if (isSignValid=="YES")
                    {
                        isDayValid = checkIfDayIsValid(year, month, day);

                        if (isDayValid=="YES")
                        {
                            return "YES";
                        }
                    }
                }
            }
        }
    }
    return  "NO";
}

string DateMethods::loadCurrentDate()
{
    SYSTEMTIME st;
    GetLocalTime(&st);

    int currentYear=st.wYear;
    int currentMonth=st.wMonth;
    int currentDay=st.wDay;
    string zeroToBeAddedBeforeMonth = "NO";
    string zeroToBeAddedBeforeDay = "NO";

    if (currentMonth<10)
    {
        zeroToBeAddedBeforeMonth = "YES";
    }

    if (currentDay<10)
    {
        zeroToBeAddedBeforeDay = "YES";
    }

    string year = adjunctiveMethods.changeIntIntoString(currentYear);
    string month = adjunctiveMethods.changeIntIntoString(currentMonth);

    if (zeroToBeAddedBeforeMonth =="YES")
    {
        month = "0" + month;
    }

    string day = adjunctiveMethods.changeIntIntoString(currentDay);

    if (zeroToBeAddedBeforeDay =="YES")
    {
        day = "0" + day;
    }

    string currentDate = year + "-" + month + "-" + day;

    return currentDate;
}

string DateMethods::changeDateIntoPreviousMonth(string date)
{
    string year = date.substr(0,4);
    string month = date.substr(5,2);
    string day = date.substr(8,2);
    int yearInNumbers = adjunctiveMethods.changeStringIntoInt(year);
    int monthInNumbers=adjunctiveMethods.changeStringIntoInt(month);
    string previousMonthDate = "blad";

    if (monthInNumbers==1)
    {
        monthInNumbers=12;
        yearInNumbers=yearInNumbers-1;
    }

    else
    {
        monthInNumbers=monthInNumbers-1;
    }

    year=adjunctiveMethods.changeIntIntoString(yearInNumbers);
    month=adjunctiveMethods.changeIntIntoString(monthInNumbers);

    return (monthInNumbers<10)? year + "-" + "0" + month + "-" + day : year + "-" + month + "-" + day;
}

int DateMethods::changeDateIntoNumericFormat(string date)
{
    int incomeDate;
    string dateWithoutDashes = "";
    string year = date.substr(0,4);
    string month = date.substr(5,2);
    string day = date.substr(8,2);

    dateWithoutDashes = year + month + day;

    incomeDate = adjunctiveMethods.changeStringIntoInt(dateWithoutDashes);

    return incomeDate;
}

int DateMethods::getBeginningDate(string date)
{
    int beginningDate;
    string dateWithoutDashes = "";
    string year = date.substr(0,4);
    string month = date.substr(5,2);
    string day = "01";

    dateWithoutDashes = year + month + day;

    beginningDate = adjunctiveMethods.changeStringIntoInt(dateWithoutDashes);

    return beginningDate;
}

int DateMethods::getEndingDate(string date)
{
    int endDate;
    string dateWithoutDashes = "";
    string year = date.substr(0,4);
    string month = date.substr(5,2);
    string day = "31";

    if (month=="04"||month=="06"||month=="09"||month=="11")
    {
        day="30";
    }

    else if (month=="02")
    {
        int yearInNumbers = adjunctiveMethods.changeStringIntoInt(year);

        day = (yearInNumbers % 4 == 0 && yearInNumbers % 100 != 0 || yearInNumbers % 400 == 0) ? "29":"28";
    }

    dateWithoutDashes = year + month + day;

    endDate = adjunctiveMethods.changeStringIntoInt(dateWithoutDashes);

    return endDate;
}

