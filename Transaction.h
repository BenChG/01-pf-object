#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <iostream>

using namespace std;

class Transaction
{
    int transactionId;
    int userId;
    int transactionDate;
    string transactionName;
    float transactionAmount;

public:

    Transaction (int transactionId=123, int userId=123, int transDate=20000101, string transactionName="Transaction", float transactionAmount=123.45)
    {
        this->transactionId = transactionId;
        this->userId = userId;
        this->transactionDate = transactionDate;
        this->transactionName = transactionName;
        this->transactionAmount = transactionAmount;
    }

    void setTransactionId(int newTransactionId);
    void setUserId(int newUserId);
    void setTransactionDate (int newTransactionDate);
    void setTransactionName (string newTransactionName);
    void setTransactionAmount(float newTransactionAmount);

    int getTransactionId();
    int getUserId();
    int getTransactionDate();
    string getTransactionName();
    float getTransactionAmount();

};

#endif
