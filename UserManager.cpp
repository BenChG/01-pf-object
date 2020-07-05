#include "UserManager.h"

User UserManager::userRegistration()
{
    User user;
    AdjunctiveMethods adjunctiveMethods;

    string userLogin;
    string userPassword;
    string userFirstName;
    string userLastName;

    int userId=users.size()+1;

    cout << "Give me user login: " << endl;
    userLogin = adjunctiveMethods.loadLines();

    cout << "Give me user password: " << endl;
    userPassword = adjunctiveMethods.loadLines();

    cout << "Give me user first name: " << endl;
    userFirstName = adjunctiveMethods.loadLines();

    cout << "Give me user last name: " << endl;
    userLastName = adjunctiveMethods.loadLines();

    user.setUserId(userId);
    user.setUserLogin(userLogin);
    user.setUserFirstName(userFirstName);
    user.setUserLastName(userLastName);
    users.push_back(user);

    filesWithUsers.addNewUserToTheFileWithUsers(userId, userLogin, userPassword, userFirstName, userLastName);
    users=filesWithUsers.loadUsersFromTheFile();

    return user;
}

int UserManager::findUser(User user, string login)
{
    string password;
    string isPasswordCorrect="NO";

    if (user.downloadUserLogin() == login)
    {
        for (int i = 0; i < 3; i++)
        {
            cout << "What is your password: ";
            cin >> password;
            if (user.downloadUserPassword() == password)
            {
                cout << "You are logged in!" << endl;
                system ("pause");

                isPasswordCorrect = "YES";
                idOfLoggedInUser=user.downloadUserId();
                i=2;
            }
        }

        if (isPasswordCorrect=="NO")
        {
            cout << "Password provided three times wrong, try again later!!!" << endl;
            system ("pause");
            exit (0);
        }
    }

    return idOfLoggedInUser;
}

int UserManager::logInUser()
{
    if (!users.empty())
    {
        string isUserFound = "NO";
        string login;
        cout << "What is your login: ";
        cin >> login;

        for (vector <User> :: iterator itr = users.begin(); itr != users.end(); itr++)
        {
            idOfLoggedInUser=findUser(*itr, login);

            if (idOfLoggedInUser!=0)
            {
                isUserFound = "YES";
                idOfLoggedInUser=downloadIdOfLoggedInUser();
                return idOfLoggedInUser;
            }
        }

        if(isUserFound=="NO")
        {
            cout << "User with provided login does not exist." << endl;
            system ("pause");
        }
    }

    else
    {
        cout << "File with users is empty, select 1 to add first user." << endl;
        system ("pause");
        return idOfLoggedInUser;
    }
}

int UserManager::logOffUser()
{
    idOfLoggedInUser=0;
    return idOfLoggedInUser;
}

int UserManager::downloadIdOfLoggedInUser()
{
    return idOfLoggedInUser;
}

void UserManager::changeThePassword()
{
    string newPassword;
    string newPassword2;
    cout << "Please provide the new password: " << endl;
    cin >> newPassword;
    cout << "Please repeat the new password: " << endl;
    cin >> newPassword2;

    if (newPassword==newPassword2)
    {
        cout << "Password for user " << idOfLoggedInUser << " is changed." << endl;
        system ("pause");
        filesWithUsers.saveNewPasswordInTheFileWithUsers(newPassword, idOfLoggedInUser);
        users=filesWithUsers.loadUsersFromTheFile();
    }

    else
    {
        cout << "Repeated password does not match the first one, try again later." << endl;
        system ("pause");
    }
}
