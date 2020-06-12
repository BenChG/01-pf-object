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

void FilesWithUsers::saveNewPasswordInTheFileWithUsers (string newPassword, int idOfLoggedInUser)
{
    CMarkup xml;
    bool fileExists = xml.Load( "users.xml" );

    xml.FindElem();
    xml.IntoElem();

    while (xml.FindElem("User") )
    {
        xml.IntoElem();
        xml.FindElem( "Id" );
        int userId = adjunctiveMethods.changeStringIntoInt(xml.GetData());
        cout << "userId" << userId << endl;
        if (userId == idOfLoggedInUser)
        {
            xml.FindElem( "Password" );
            xml.RemoveElem();
            xml.AddElem("Password", newPassword);
            xml.Save("users.xml");
        }
    }
}

vector <User> FilesWithUsers::loadUsersFromTheFile ()
{
    users.clear();

    CMarkup xml;
    bool fileExists = xml.Load( "users.xml" );

    xml.FindElem();
    xml.IntoElem();

    while (xml.FindElem("User") )
    {
        xml.IntoElem();
        xml.FindElem( "Id" );
        int userId = adjunctiveMethods.changeStringIntoInt(xml.GetData());
        xml.FindElem( "Login" );
        string login = xml.GetData();
        xml.FindElem( "Password" );
        string password = xml.GetData();
        xml.FindElem( "FirstName" );
        string firstName = xml.GetData();
        xml.FindElem( "LastName" );
        string lastName = xml.GetData();
        xml.OutOfElem();

        user.setUserId(userId);
        user.setUserLogin(login);
        user.setUserPassword(password);
        user.setUserFirstName(firstName);
        user.setUserLastName(lastName);
        users.push_back(user);
    }
    return users;
}
