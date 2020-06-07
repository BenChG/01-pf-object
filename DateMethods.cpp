#include "DateMethods.h"


string DateMethods::loadCurrentDate()
{
/*
    SYSTEMTIME st;
    GetLocalTime(&st);
    int currentYear=st.wYear;
    int currentMonth=st.wMonth;
    int currentDay=st.wDay;


   string year = adjunctiveMethods.changeIntIntoString(currentYear);
    string month = adjunctiveMethods.changeIntIntoString(currentMonth);
    string day = adjunctiveMethods.changeIntIntoString(currentDay);
*/

string currentDate="Ooooo";
  return currentDate;
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
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
            daysInTheMonth = 29;

        else
        {
            cout << "Biezacy miesiac ma 28 dni" << endl;
        }


    }
    else
    {
        daysInTheMonth = 31;
    }

    if (day<=daysInTheMonth)
    {
        return "YES";
    }

    else
    {
        return "NO";
    }
}

string DateMethods::checkIfMonthIsValid(int year, int currentYear, int month, int currentMonth)
{
    if (0<month && month <=12)
    {
        if (year == currentYear && month>currentMonth)
        {
            return "NO";
        }
        else
        {
            return "YES";
        }
    }

    else
    {
        return "NO" ;
    }
}

string DateMethods::checkIfSignIsValid(char sign)
{
    if (sign==char(45))
        return "YES";

    else
    {
        return "NO" ;
    }
}


string DateMethods::checkIfYearIsValid(int year, int currentYear)
{
    if (1999<year && year<=currentYear)
    {
        return "YES";
    }

    else
    {
        return "NO";
    }
}

string DateMethods::checkIfDateIsCorrect(string date)
{
    /*
    if (date.length()==10)
    {
        string isYearValid = "NO";
        string isMonthValid = "NO";
        string isDayValid = "NO";
        string isSignValid = "NO";

        int year = atoi(date.substr(0,4).c_str());
        char sign = date[4];
        int month = atoi(date.substr(5,2).c_str());
        char sign2= date[7];
        int day = atoi(date.substr(8,2).c_str());

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
    */
}
