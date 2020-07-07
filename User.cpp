#include "User.h"

void User::setUserId(int newUserId)
{
    if (newUserId >= 0)
        userId = newUserId;
}

void User::setUserLogin(string newUserLogin)
{
    userLogin = newUserLogin;
}

void User::setUserPassword (string newUserPassword)
{
    userPassword = newUserPassword;
}

void User::setUserFirstName (string newUserFirstName)
{
    userFirstName = newUserFirstName;
}

void User::setUserLastName (string newUserLastName)
{
    userLastName = newUserLastName;
}

int User::getUserId()
{
    return userId;
}

string User::getUserLogin()
{
    return userLogin;
}

string User::getUserPassword()
{
    return userPassword;
}

string User::getUserFirstName()
{
    return userFirstName;
}

string User::getUserLastName()
{
    return userLastName;
}
