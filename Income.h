#ifndef INCOME_H
#define INCOME_H

#include "Transaction.h"
#include <iostream>

using namespace std;

class Income :public Transaction{

    Transaction transaction;

public:

    void setIncomeId(int newIncomeId);
    void setUserId(int newUserId);
    void setIncomeDate (int newIncomeDate);
    void setIncomeName (string newIncomeName);
    void setIncomeAmount(float newIncomeAmount);

    int getIncomeId();
    int getUserId();
    int getIncomeDate();
    string getIncomeName();
    float getIncomeAmount();
};

#endif
