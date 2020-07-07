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

    User (int userId=123, string userLogin="ABC", string userPassword="qwerty", string userFirstName="A", string userLastName="BC")
    {
        this->userId = userId;
        this->userLogin = userLogin;
        this->userPassword = userPassword;
        this->userFirstName = userFirstName;
        this->userLastName = userLastName;
    }

    void setUserId (int newUserId);
    void setUserFirstName (string newUserFirstName);
    void setUserLastName (string newUserLastName);
    void setUserLogin (string newUserLogin);
    void setUserPassword (string newUserPassword);

    int getUserId();
    string getUserFirstName();
    string getUserLastName();
    string getUserLogin();
    string getUserPassword();
};

#endif
