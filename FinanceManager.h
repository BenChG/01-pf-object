#ifndef FINANCEMANAGER_H
#define FINANCEMANAGER_H

#include <iomanip>
#include "Income.h"
#include "Expense.h"
#include "FilesForFinanceManager.h"
#include "AdjunctiveMethods.h"
#include "DateMethods.h"
#include "UserManager.h"

using namespace std;

class FinanceManager
{
    Income income;
    Expense expense;
    FilesForFinanceManager filesForFinanceManager;
    AdjunctiveMethods adjunctiveMethods;
    DateMethods dateMethods;
    //UserManager userManager;

    vector <Income> incomes;
    vector <Expense> expenses;
    string isDateCorrect;

public:

    FinanceManager (string nameOfFileWithIncomes, string nameOfFileWithExpenses)
        : filesForFinanceManager(nameOfFileWithIncomes,nameOfFileWithExpenses)
    {
        string isDateCorrect = "NO";
        incomes=filesForFinanceManager.loadIncomesFromTheFile();
        expenses=filesForFinanceManager.loadExpensesFromTheFile();
    };

    Income addNewIncome();
    Expense addNewExpense();
    void balanceOfCurrentMonth();
    void showTheBalance(Income incomes, int beginningDate, int endDate);
};

#endif
