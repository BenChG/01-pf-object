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

    //linieUzytkownikow=plikiZUzytkownikami.wczytajLinieZPlikuDoWektora();
    return user;
}
