#ifndef EXPENSE_H
#define EXPENSE_H

#include <iostream>

using namespace std;

class Expense
{
    int expenseId;
    int userId;
    int expenseDate;
    string expenseName;
    float expenseAmount;

 public:

    Expense (int expenseId=123, int userId=123, int expenseDate=20000101, string expenseName="Expense", float expenseAmount=123.45)
    {
        this->expenseId = expenseId;
        this->userId = userId;
        this->expenseDate = expenseDate;
        this->expenseName = expenseName;
        this->expenseAmount = expenseAmount;
    }

    void setExpenseId(int newExpenseId);
    void setUserId(int newUserId);
    void setExpenseDate (int newExpenseDate);
    void setExpenseName (string newExpenseName);
    void setExpenseAmount(float newExpenseAmount);

    int downloadExpenseId();
    int downloadUserId();
    int downloadExpenseDate();
    string downloadExpenseName();
    float downloadExpenseAmount();
};

#endif
