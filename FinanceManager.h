#ifndef FINANCEMANAGER_H
#define FINANCEMANAGER_H

#include <iostream>
#include <iomanip>
#include <vector>
#include "Income.h"
#include "Expense.h"
#include "FilesForFinanceManager.h"
#include "AdjunctiveMethods.h"
//#include "DateMethods.h"

using namespace std;

class FinanceManager
{
    Income income;
    Expense expense;
    FilesForFinanceManager filesForFinanceManager;
    AdjunctiveMethods adjunctiveMethods;
    //DateMethods dateMethods;

    //const string NAME_OF_FILE_WITH_INCOMES;
    //const string NAME_OF_FILE_WITH_EXPENSES;
    vector <Income> incomes;
    vector <Expense> expenses;
    //int idOfLoggedInUser;

    public:

         FinanceManager (string nameOfFileWithIncomes, string nameOfFileWithExpenses)
        : filesForFinanceManager(nameOfFileWithIncomes,nameOfFileWithExpenses)
    {
        //users=filesWithUsers.loadUsersFromTheFile();
        //idOfLoggedInUser=0;
    };

    Income addNewIncome();
    void addNewExpense();
    void wyswietl(Income income);

};

#endif
