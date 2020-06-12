#ifndef INCOME_H
#define INCOME_H

#include <iostream>

using namespace std;

class Income
{
    int incomeId;
    string incomeDate;
    string incomeName;
    float incomeAmount;

public:

    Income (int incomeId=123, string incomeDate="2000-01-01", string incomeName="Income", float incomeAmount=123.45)
    {
        this->incomeId = incomeId;
        this->incomeDate = incomeDate;
        this->incomeName = incomeName;
        this->incomeAmount = incomeAmount;
    }

    void setIncomeId(int newIncomeId);
    void setIncomeDate (string newIncomeDate);
    void setIncomeName (string newIncomeName);
    void setIncomeAmount(float newIncomeAmount);

    int downloadIncomeId();
    string downloadIncomeDate();
    string downloadIncomeName();
    float downloadIncomeAmount();

};
#endif
