#ifndef EXPENSE_H
#define EXPENSE_H

#include "Transaction.h"
#include <iostream>

using namespace std;

class Expense: public Transaction
{
    Transaction transaction;

public:
    void setExpenseId(int newExpenseId);
    void setUserId(int newUserId);
    void setExpenseDate (int newExpenseDate);
    void setExpenseName (string newExpenseName);
    void setExpenseAmount(float newExpenseAmount);

    int getExpenseId();
    int getUserId();
    int getExpenseDate();
    string getExpenseName();
    float getExpenseAmount();
};

#endif
