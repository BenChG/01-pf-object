#include "Expense.h"

void Expense::setExpenseId(int newExpenseId)
{
    if (newExpenseId >= 0)
        expenseId = newExpenseId;
}

void Expense::setUserId(int newUserId)
{
    if (newUserId >= 0)
        userId = newUserId;
}

void Expense::setExpenseDate(int newExpenseDate)
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

int Expense::getExpenseId()
{
    return expenseId;
}

int Expense::getUserId()
{
    return userId;
}

int Expense::getExpenseDate()
{
    return expenseDate;
}

string Expense::getExpenseName()
{
    return expenseName;
}

float Expense::getExpenseAmount()
{
    return expenseAmount;
}
