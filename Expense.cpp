#include "Expense.h"

void Expense::setExpenseId(int newExpenseId)
{
    if (newExpenseId >= 0)
        expenseId = newExpenseId;
}

void Expense::setExpenseDate(string newExpenseDate)
{
    expenseDate = newExpenseDate;
}

void Expense::setExpenseName (string newExpenseName)
{
    expenseName= newExpenseName;
}

void Expense::setExpenseAmount (float newExpenseAmount)
{
    expenseAmount = -newExpenseAmount;
}

int Expense::downloadExpenseId()
{
    return expenseId;
}

string Expense::downloadExpenseDate()
{
    return expenseDate;
}

string Expense::downloadExpenseName()
{
    return expenseName;
}

float Expense::downloadExpenseAmount()
{
    return expenseAmount;
}

