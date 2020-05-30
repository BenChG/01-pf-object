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
    void setIncomeId(int newIncomeId);
    void setIncomeDate (string newIncomeDate);
    void setIncomeName (string newIncomeName);
    void setIncomeAmount(float newIncomeAmount);

    int downloadIncomeId();
    string downloadIncomeDate();
    string downloadIncomeName();
    float downloadIncomeAmount();

        Income (int incomeId=123, string incomeDate="yyyy-mm-dd", string incomeName="ABC", float incomeAmount=123.50)
    {
        this->incomeId = incomeId;
        this->incomeDate = incomeDate;
        this->incomeName = incomeName;
        this->incomeAmount = incomeAmount;
    }
};
#endif
