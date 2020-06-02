#ifndef FILESFORFINANCEMANAGER_H
#define FILESFORFINANCEMANAGER_H

#include <iostream>
#include <fstream>
//#include <stdlib.h>
#include <vector>
#include "Income.h"
#include "Expense.h"
#include "Markup.h"

using namespace std;

class FilesForFinanceManager
{
    const string NAME_OF_FILE_WITH_INCOMES;
    const string NAME_OF_FILE_WITH_EXPENSES;
    vector <Income> incomes;
    vector <Expense> expenses;
    Income income;
    Expense expense;
    fstream file;

public:
    FilesForFinanceManager(string nameOfFileWithIncomes, string nameOfFileWithExpenses)
        : NAME_OF_FILE_WITH_INCOMES (nameOfFileWithIncomes),
          NAME_OF_FILE_WITH_EXPENSES (nameOfFileWithExpenses)
        {};

  void addNewIncomeToTheFileWithIncomes(int id, string date, string name, float amount);
  void addNewExpenseToTheFileWithExpenses(int id, string date, string name, float amount);
  vector <Income> loadIncomesFromTheFile();
};

#endif
