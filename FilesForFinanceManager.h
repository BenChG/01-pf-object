#ifndef FILESFORFINANCEMANAGER_H
#define FILESFORFINANCEMANAGER_H

#include <fstream>
#include <vector>
#include "Income.h"
#include "Expense.h"
#include "Markup.h"
#include "AdjunctiveMethods.h"

using namespace std;

class FilesForFinanceManager
{
    Income income;
    Expense expense;
    AdjunctiveMethods adjunctiveMethods;

    const string NAME_OF_FILE_WITH_INCOMES;
    const string NAME_OF_FILE_WITH_EXPENSES;
    vector <Income> incomes;
    vector <Expense> expenses;
    fstream file;

public:

    FilesForFinanceManager(string nameOfFileWithIncomes, string nameOfFileWithExpenses)
        : NAME_OF_FILE_WITH_INCOMES (nameOfFileWithIncomes),
          NAME_OF_FILE_WITH_EXPENSES (nameOfFileWithExpenses)
    {};

    void addNewIncomeToTheFileWithIncomes(int id, int date, string name, float amount);
    void addNewExpenseToTheFileWithExpenses(int id, int date, string name, float amount);
    vector <Income> loadIncomesFromTheFile();
    vector <Expense> loadExpensesFromTheFile();
};

#endif
