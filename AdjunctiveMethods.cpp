#include "AdjunctiveMethods.h"

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
