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
    void setExpenseId(int newExpenseId);
    void setExpenseDate (string newExpenseDate);
    void setExpenseName (string newExpenseName);
    void setExpenseAmount(float newExpenseAmount);

    int downloadExpenseId();
    string downloadExpenseDate();
    string downloadExpenseName();
    float downloadExpenseAmount();

        Expense (int expenseId=123, string expenseDate="yyyy-mm-dd", string expenseName="ABC", float expenseAmount=123.50)
    {
        this->expenseId = expenseId;
        this->expenseDate = expenseDate;
        this->expenseName = expenseName;
        this->expenseAmount = expenseAmount;
    }
};
#endif
