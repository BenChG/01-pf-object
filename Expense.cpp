#include "Expense.h"


void Expense::setExpenseId(int newExpenseId)
{
  transaction.setTransactionId(newExpenseId);
}

void Expense::setUserId(int newUserId)
{
   transaction.setUserId(newUserId);
}

void Expense::setExpenseDate(int newExpenseDate)
{
     transaction.setTransactionDate(newExpenseDate);
}

void Expense::setExpenseName (string newExpenseName)
{
   transaction.setTransactionName(newExpenseName);
}

void Expense::setExpenseAmount (float newExpenseAmount)
{
      transaction.setTransactionAmount(newExpenseAmount);
}

int Expense::getExpenseId()
{
    return transaction.getTransactionId();
}

int Expense::getUserId()
{
    return transaction.getUserId();
}

int Expense::getExpenseDate()
{
    return transaction.getTransactionDate();
}

string Expense::getExpenseName()
{
     return transaction.getTransactionName();
}

float Expense::getExpenseAmount()
{
     return transaction.getTransactionAmount();
}


