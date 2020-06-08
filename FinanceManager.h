#ifndef FINANCEMANAGER_H
#define FINANCEMANAGER_H

#include <iostream>
#include <iomanip>
#include <vector>
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
    AdjunctiveMethods adjunctiveMethods;
    DateMethods dateMethods;

    vector <Income> incomes;
    vector <Expense> expenses;
    //int idOfLoggedInUser;
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
    void display();
    void wyswietl(Expense expense);
    void displayyy();
    void wyswietlll(Income income);

};

#endif
