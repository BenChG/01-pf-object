#ifndef FINANCEMANAGER_H
#define FINANCEMANAGER_H

#include <iomanip>
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
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
    DateMethods dateMethods;
    AdjunctiveMethods adjunctiveMethods;

    string currentDate;
    string choosenDate;
    int beginningDate;
    int endingDate;

    vector <Income> incomes;
    vector <Expense> expenses;
    string isDateCorrect;
    const int ID_OF_LOGGED_IN_USER;

    void displayBalance(int beginningDate, int endingDate);
    void showTheIncomes(Income income, int beginningDate, int endingDate);
    void showTheExpenses(Expense expense, int beginningDate, int endingDate);
    int addIncomeFromSelectedPeriod(Income income, int beginningDate, int endingDate);
    int addExpenseFromSelectedPeriod(Expense expense, int beginningDate, int endingDate);

public:

    FinanceManager (string nameOfFileWithIncomes, string nameOfFileWithExpenses, int idOfLoggedInUser)
        : filesForFinanceManager (nameOfFileWithIncomes, nameOfFileWithExpenses),
          ID_OF_LOGGED_IN_USER (idOfLoggedInUser)
    {
        string isDateCorrect = "NO";
        incomes=filesForFinanceManager.loadIncomesFromTheFile();
        expenses=filesForFinanceManager.loadExpensesFromTheFile();
        currentDate="";
        choosenDate="";
        beginningDate=0;
        endingDate=0;
    };

    Income addNewIncome();
    Expense addNewExpense();
    void balanceOfCurrentMonth();
    void balanceOfPreviousMonth();
    void balanceOfSelectedPeriod();
};

#endif
