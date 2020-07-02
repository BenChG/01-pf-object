#ifndef FINANCEMANAGER_H
#define FINANCEMANAGER_H

#include <iomanip>
#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include "Income.h"
#include "Expense.h"
#include "FilesForFinanceManager.h"
#include "AdjunctiveMethods.h"
#include "DateMethods.h"

using namespace std;

class FinanceManager
{
    Income income;
    Expense expense;
    FilesForFinanceManager filesForFinanceManager;
    // AdjunctiveMethods adjunctiveMethods;
    // DateMethods dateMethods;
    int sumOfIncomes;
    int sumOfExpenses;

    vector <Income> incomes;
    vector <Expense> expenses;
    string isDateCorrect;
    const int ID_OF_LOGGED_IN_USER;

public:

    FinanceManager (string nameOfFileWithIncomes, string nameOfFileWithExpenses, int idOfLoggedInUser)
        : filesForFinanceManager (nameOfFileWithIncomes, nameOfFileWithExpenses),
          ID_OF_LOGGED_IN_USER (idOfLoggedInUser)
    {
        string isDateCorrect = "NO";
        incomes=filesForFinanceManager.loadIncomesFromTheFile();
        expenses=filesForFinanceManager.loadExpensesFromTheFile();
        sumOfIncomes=0;
        sumOfExpenses=0;
    };

    Income addNewIncome();
    Expense addNewExpense();
    void balanceOfCurrentMonth();
    void displayBalance(int beginningDate, int endDate);
    void showTheIncomes(Income income, int beginningDate, int endDate);
    void showTheExpenses(Expense expense, int beginningDate, int endDate);
    int addIncomeFromSelectedPeriod(Income income, int beginningDate, int endDate);
    int addExpenseFromSelectedPeriod(Expense expense, int beginningDate, int endDate);
};

#endif
