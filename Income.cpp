#include "Income.h"

void Income::setIncomeId(int newIncomeId)
{
    transaction.setTransactionId(newIncomeId);
}

void Income::setUserId(int newUserId)
{
    transaction.setUserId(newUserId);
}

void Income::setIncomeDate(int newIncomeDate)
{
    transaction.setTransactionDate(newIncomeDate);
}

void Income::setIncomeName (string newIncomeName)
{
    transaction.setTransactionName(newIncomeName);
}

    void Income::setIncomeAmount (float newIncomeAmount)
    {
        transaction.setTransactionAmount(newIncomeAmount);
    }

    int Income::getIncomeId()
    {
        return transaction.getTransactionId();
    }

    int Income::getUserId()
    {
        return transaction.getUserId();
    }

    int Income::getIncomeDate()
    {
        return transaction.getTransactionDate();
    }

    string Income::getIncomeName()
    {
        return transaction.getTransactionName();
    }

    float Income::getIncomeAmount()
    {
        return transaction.getTransactionAmount();
    }


