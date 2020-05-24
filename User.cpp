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

int User::downloadUserId()
{
    return userId;
}

string User::downloadUserLogin()
{
    return userLogin;
}

string User::downloadUserPassword()
{
    return userPassword;
}

string User::downloadUserFirstName()
{
    return userFirstName;
}

string User::downloadUserLastName()
{
    return userLastName;
}
