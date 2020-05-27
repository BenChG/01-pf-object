#include "FilesWithUsers.h"

void FilesWithUsers::addNewUserToTheFileWithUsers(int id, string login, string password, string firstName, string lastName)
{
    CMarkup xml;

    bool fileExists = xml.Load(NAME_OF_FILE_WITH_USERS);

    if (!fileExists)
    {
        xml.SetDoc("<?xml version=\"1.0\" encoding=\"UTF-8\"?>\r\n");
        xml.AddElem(NAME_OF_FILE_WITH_USERS);
    }

    xml.FindElem();
    xml.IntoElem();
    xml.AddElem("User");
    xml.IntoElem();
    xml.AddElem("Id", id);
    xml.AddElem("Login", login);
    xml.AddElem("Password", password);
    xml.AddElem("FirstName", firstName);
    xml.AddElem("LastName", lastName);

    xml.Save(NAME_OF_FILE_WITH_USERS);

    cout << endl << "New user added." << endl;
    cout << "Size of vector users: " << id << endl << endl;

    system("pause");
}
