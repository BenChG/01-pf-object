#ifndef EXPENSE_H
#define EXPENSE_H

#include <iostream>

using namespace std;

class Expense
{
    int expenseId;
    int expenseDate;
    string expenseName;
    float expenseAmount;

public:

    Expense (int expenseId=123, int expenseDate=20000101, string expenseName="Expense", float expenseAmount=123.45)
    {
        this->expenseId = expenseId;
        this->expenseDate = expenseDate;
        this->expenseName = expenseName;
        this->expenseAmount = expenseAmount;
    }

    void setExpenseId(int newExpenseId);
    void setExpenseDate (int newExpenseDate);
    void setExpenseName (string newExpenseName);
    void setExpenseAmount(float newExpenseAmount);

    int downloadExpenseId();
    int downloadExpenseDate();
    string downloadExpenseName();
    float downloadExpenseAmount();
};

#endif
