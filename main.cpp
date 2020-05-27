#include <iostream>
#include "PersonalFinances.h"

using namespace std;

int main()
{
  PersonalFinances personalFinances ("users.xml");

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
                 cout << "Choosen option 2." << endl;
                   system("pause");
               //idOfLoggedInUser=personalFinances.loggInUser();
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
            /*char wybor;

            wybor = personalFinances.wybierzOpcjeZMenuGlownego();

            switch (wybor)
            {
            case '1':
                personalFinances.dodajAdresata();
                break;
            case '2':
                personalFinances.wyszukajPoImieniu();
                break;
            case '3':
                personalFinances.wyszukajPoNazwisku();
                break;
            case '4':
                personalFinances.wyswietlWszystkichAdresatow();
                break;
            case '5':
                personalFinances.usunAdresata();
                break;
            case '6':
                personalFinances.wyszukajAdresataDoEdycji();
                break;
            case '7':
                personalFinances.zmianaHaslaUzytkownika();
                break;
            case '8':
                personalFinances.wylogujUzytkownika();
                break;
            case '9':
                exit(0);
                break;
            default:

                cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                system("pause");
                break;
            }*/
    }
        }

    return 0;
}



