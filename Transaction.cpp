#include "Transaction.h"

void Transaction::setTransactionId(int newTransactionId)
{
    if (newTransactionId >= 0)
        transactionId = newTransactionId;
}

void Transaction::setUserId(int newUserId)
{
    if (newUserId >= 0)
        userId = newUserId;
}

void Transaction::setTransactionDate(int newTransactionDate)
{
    transactionDate = newTransactionDate;
}

void Transaction::setTransactionName (string newTransactionName)
{
    transactionName= newTransactionName;
}

void Transaction::setTransactionAmount (float newTransactionAmount)
{
    transactionAmount = newTransactionAmount;
}

int Transaction::getTransactionId()
{
    return transactionId;
}

int Transaction::getUserId()
{
    return userId;
}

int Transaction::getTransactionDate()
{
    return transactionDate;
}

string Transaction::getTransactionName()
{
    return transactionName;
}

float Transaction::getTransactionAmount()
{
    return transactionAmount;
}

