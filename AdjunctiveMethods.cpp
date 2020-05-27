#include "AdjunctiveMethods.h"

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
    char choice;

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

string AdjunctiveMethods::loadLines()
{
    string input = "";
    getline(cin, input);
    return input;
}
