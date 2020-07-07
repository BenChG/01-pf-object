#include "Income.h"

void Income::setIncomeId(int newIncomeId)
{
    if (newIncomeId >= 0)
        incomeId = newIncomeId;
}

void Income::setUserId(int newUserId)
{
    if (newUserId >= 0)
        userId = newUserId;
}

void Income::setIncomeDate(int newIncomeDate)
{
    incomeDate = newIncomeDate;
}

void Income::setIncomeName (string newIncomeName)
{
    incomeName= newIncomeName;
}

void Income::setIncomeAmount (float newIncomeAmount)
{
    incomeAmount = newIncomeAmount;
}

int Income::getIncomeId()
{
    return incomeId;
}

int Income::getUserId()
{
    return userId;
}

int Income::getIncomeDate()
{
    return incomeDate;
}

string Income::getIncomeName()
{
    return incomeName;
}

float Income::getIncomeAmount()
{
    return incomeAmount;
}

