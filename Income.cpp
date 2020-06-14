#include "Income.h"

void Income::setIncomeId(int newIncomeId)
{
    if (newIncomeId >= 0)
        incomeId = newIncomeId;
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

int Income::downloadIncomeId()
{
    return incomeId;
}

int Income::downloadIncomeDate()
{
    return incomeDate;
}

string Income::downloadIncomeName()
{
    return incomeName;
}

float Income::downloadIncomeAmount()
{
    return incomeAmount;
}

