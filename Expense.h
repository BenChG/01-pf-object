#ifndef EXPENSE_H
#define EXPENSE_H

#include "Transaction.h"
#include <iostream>

using namespace std;

class Expense: public Transaction
{
    Transaction transaction;
};

#endif
