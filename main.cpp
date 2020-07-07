#include "PersonalFinances.h"

using namespace std;

int main()
{
    PersonalFinances personalFinances ("users.xml", "incomes.xml", "expenses.xml");

    int idOfLoggedInUser=0;
    char choice;

    while(true)
    {
        if (idOfLoggedInUser==0)
        {
            choice = personalFinances.selectOptionFromLoggingMenu();

            switch (choice)
            {
            case '1':
                personalFinances.userRegistration();
                break;

            case '2':
                personalFinances.logInUser();
                idOfLoggedInUser=personalFinances.getIdOfLoggedInUser();
                break;

            case '9':
                exit(0);
                break;

            default:
                cout << endl << "There is no such option in Menu" << endl << endl;
                system("pause");
                break;
            }
        }

        else
        {
            choice = personalFinances.selectOptionFromMainMenu();

            switch (choice)
            {
            case '1':
                personalFinances.addNewIncome();
                break;

            case '2':
                personalFinances.addNewExpense();
                break;

            case '3':
                cout << "Option 3 selected" << endl;
                system ("pause");
                personalFinances.balanceOfCurrentMonth();
                break;

            case '4':
                cout << "Option 4 selected" << endl;
                system ("pause");
                personalFinances.balanceOfPreviousMonth();
                break;

            case '5':
                cout << "Option 5 selected" << endl;
                system ("pause");
                personalFinances.balanceOfSelectedPeriod();
                break;

            case '6':
                cout << "Option 6 selected" << endl;
                system ("pause");
                personalFinances.changeThePassword();
                break;

            case '7':
                idOfLoggedInUser=personalFinances.logOffUser();
                break;

            default:
                cout << endl << "There is no such option in Menu" << endl << endl;
                system("pause");
                break;
            }
        }
    }
    return 0;
}
