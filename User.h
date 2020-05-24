#ifndef USER_H
#define USER_H
#include <iostream>
using namespace std;

class User
{
    int userId;
    string userFirstName;
    string userLastName;
    string userLogin;
    string userPassword;

public:
    void setUserId (int newUserId);
    void setUserFirstName (string newUserFirstName);
    void setUserLastName (string newUserLastName);
    void setUserLogin (string newUserLogin);
    void setUserPassword (string newUserPassword);

    int downloadUserId();
    string downloadUserFirstName();
    string downloadUserLastName();
    string downloadUserLogin();
    string downloadUserPassword();

        User (int userId=1234, string userLogin="Everson", string userPassword="1234", string userFirstName="Ben", string userLastName="C")
    {
        this->userId = userId;
        this->userLogin = userLogin;
        this->userPassword = userPassword;
        this->userFirstName = userFirstName;
        this->userLastName = userLastName;
    }

};
#endif
