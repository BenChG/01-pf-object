#ifndef INCOME_H
#define INCOME_H

#include <iostream>

using namespace std;

class Income
{
    int incomeId;
    int userId;
    int incomeDate;
    string incomeName;
    float incomeAmount;

public:

    Income (int incomeId=123, int userId=123, int incomeDate=20000101, string incomeName="Income", float incomeAmount=123.45)
    {
        this->incomeId = incomeId;
        this->userId = userId;
        this->incomeDate = incomeDate;
        this->incomeName = incomeName;
        this->incomeAmount = incomeAmount;
    }

    void setIncomeId(int newIncomeId);
    void setUserId(int newUserId);
    void setIncomeDate (int newIncomeDate);
    void setIncomeName (string newIncomeName);
    void setIncomeAmount(float newIncomeAmount);

    int downloadIncomeId();
    int downloadUserId();
    int downloadIncomeDate();
    string downloadIncomeName();
    float downloadIncomeAmount();

};

#endif
