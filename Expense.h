#ifndef EXPENSE_H
#define EXPENSE_H

#include <iostream>

using namespace std;

class Expense
{
    int expenseId;
    string expenseDate;
    string expenseName;
    float expenseAmount;

public:

    Expense (int expenseId=123, string expenseDate="2000-01-01", string expenseName="Expense", float expenseAmount=123.45)
    {
        this->expenseId = expenseId;
        this->expenseDate = expenseDate;
        this->expenseName = expenseName;
        this->expenseAmount = expenseAmount;
    }

    void setExpenseId(int newExpenseId);
    void setExpenseDate (string newExpenseDate);
    void setExpenseName (string newExpenseName);
    void setExpenseAmount(float newExpenseAmount);

    int downloadExpenseId();
    string downloadExpenseDate();
    string downloadExpenseName();
    float downloadExpenseAmount();
};

#endif
