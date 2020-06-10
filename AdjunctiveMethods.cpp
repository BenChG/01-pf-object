#include "AdjunctiveMethods.h"

string AdjunctiveMethods::verifyIfAmountIsCorrect()
{
    string isDotFound = "NO";
    string dataToBeVeryfied = loadLines();
    int length = dataToBeVeryfied.length();

    for (int i=0; i<length; i++)
    {
        cout << dataToBeVeryfied [i] << endl;

        if ((dataToBeVeryfied[i] == char(44)) && (isDotFound == "NO"))
        {
            dataToBeVeryfied[i] = char(46);
            isDotFound = "YES";
        }

        else
        {
          if ((dataToBeVeryfied[i] == char(46)) && (isDotFound == "NO"))
            {
             isDotFound = "YES";
            }

        else if (!isdigit(dataToBeVeryfied[i]))
            {
                return "NO";
            }
        }


    }
         return dataToBeVeryfied;
}

char AdjunctiveMethods::chooseDateVariant()
{
    system("cls");
    cout << "Choose date variant:" << endl;
    cout << "1. Current date." << endl;
    cout << "2. Manual date." << endl;
    cout << "--------------------" << endl;
    cout << "Your choice: ";

    choice = loadSign();
    return choice;
}

int AdjunctiveMethods::changeStringIntoInt(string text)
{
    string str = text;
    int i;
    istringstream iss(str);
    iss >> i;

    return i;
}

string AdjunctiveMethods::changeIntIntoString(int number)
{
    int i = number;
    ostringstream ss;
    ss << i;
    string str = ss.str();

    return str;
}

char AdjunctiveMethods::loadSign()
{
    string input = "";
    char sign  = {0};

    while (true)
    {
        getline(cin, input);

        if (input.length() == 1)
        {
            sign = input[0];
            break;
        }
    }
    return sign;
}

char AdjunctiveMethods::selectOptionFromLoggingMenu()
{
    system("cls");
    cout << "    >>> LOGGING MENU<<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Registration." << endl;
    cout << "2. Log in." << endl;
    cout << "9. Exit program." << endl;
    cout << "---------------------------" << endl;
    cout << "Your choice: ";

    choice = loadSign();
    return choice;
}

char AdjunctiveMethods::selectOptionFromMainMenu()
{
    system("cls");
    cout << "    >>> MAIN MENU<<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Add income." << endl;
    cout << "2. Add expense." << endl;
    cout << "3. Balance of current month." << endl;
    cout << "4. Balance of previous month." << endl;
    cout << "5. Balance of selected period." << endl;
    cout << "6. Change the password." << endl;
    cout << "7. Log off." << endl;
    cout << "---------------------------" << endl;
    cout << "Your choice: ";

    choice = loadSign();
    return choice;
}

string AdjunctiveMethods::loadLines()
{
    string input = "";
    getline(cin, input);
    return input;
}

float AdjunctiveMethods::loadValue()
{
    float input = 0;
    cin >> input;
    return input;
}
