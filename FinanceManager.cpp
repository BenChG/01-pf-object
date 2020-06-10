#include "FinanceManager.h"

Income FinanceManager::addNewIncome()
{
    Income income;
    AdjunctiveMethods adjunctiveMethods;

    string incomeDate;
    string incomeName;
    string isAmountCorrect;
    float incomeAmount;

    int incomeId=incomes.size()+1;

    char choice = adjunctiveMethods.chooseDateVariant();

    if (choice == '1')
    {
        incomeDate=dateMethods.loadCurrentDate();
        isDateCorrect="YES";
        cout << incomeDate << endl;
        system ("pause");

    }

    else if (choice == '2')
    {
        incomeDate = adjunctiveMethods.loadLines();
        isDateCorrect=dateMethods.checkIfDateIsCorrect(incomeDate);
    }

else
    {
        cout << "Wrong choice, try again later" << endl;
    }

    if (isDateCorrect=="YES")
    {
        cout << "Date is correct" << endl;
        system ("pause");

        //cout << "Give me income name: " << endl;
        //incomeName = adjunctiveMethods.loadLines();

        cout << "Give me income amount: " << endl;
        isAmountCorrect = adjunctiveMethods.verifyIfAmountIsCorrect();
        if (isAmountCorrect == "NO")
        {
        cout << "Amount provided is not a number, try again later" << endl;
        system ("pause");
        }

        else
        {
        //incomeAmount = adjunctiveMethodschangeStringIntoFloat (isAmountCorrect);
        cout << "ooooo"<< endl;
         system ("pause");

/*
        income.setIncomeId(incomeId);
        income.setIncomeDate(incomeDate);
        income.setIncomeName(incomeName);
        income.setIncomeAmount(incomeAmount);

        incomes.push_back(income);

         displayyy();

        filesForFinanceManager.addNewIncomeToTheFileWithIncomes(incomeId, incomeDate, incomeName, incomeAmount);
       */
        }
}
    else

    {
        cout << "Date is wrong !!!" << endl;
        system ("pause");
    }
    return income;
}

Expense FinanceManager::addNewExpense()
{
    Expense expense;
    AdjunctiveMethods adjunctiveMethods;

    string expenseDate;
    string expenseName;
    float expenseAmount;

    int expenseId=expenses.size()+1;

    char choice = adjunctiveMethods.chooseDateVariant();

    if (choice == '1')
    {
        expenseDate=dateMethods.loadCurrentDate();
        isDateCorrect="YES";
        cout << expenseDate << endl;
        system ("pause");
    }

    else if (choice == '2')
    {
        expenseDate = adjunctiveMethods.loadLines();
        isDateCorrect=dateMethods.checkIfDateIsCorrect(expenseDate);
    }

else
    {
        cout << "Wrong choice, try again later" << endl;
    }

    if (isDateCorrect=="YES")
    {
        cout << "Date is correct" << endl;
        system ("pause");

        cout << "Give me expense name: " << endl;
        expenseName = adjunctiveMethods.loadLines();

        cout << "Give me expense amount: " << endl;
        expenseAmount = adjunctiveMethods.loadValue();

        expense.setExpenseId(expenseId);
        expense.setExpenseDate(expenseDate);
        expense.setExpenseName(expenseName);
        expense.setExpenseAmount(expenseAmount);

        expenses.push_back(expense);

        display();
        filesForFinanceManager.addNewExpenseToTheFileWithExpenses(expenseId, expenseDate, expenseName, expenseAmount);
        return expense;

    }
    else

    {
        cout << "Date is wrong !!!" << endl;
        system ("pause");
    }
}

void FinanceManager::wyswietlll(Income income)
{

    cout << income.downloadIncomeId() << endl;
    cout << income.downloadIncomeDate() << endl;
    cout << income.downloadIncomeName() << endl;
    cout << setprecision(2) << fixed << income.downloadIncomeAmount() << endl;
    system ("pause");
}

void FinanceManager::displayyy()
{

    for (vector <Income> :: iterator itr = incomes.begin(); itr != incomes.end(); itr++)
    {
        wyswietlll(*itr);
    }

}

void FinanceManager::wyswietl(Expense expense)
{

    cout << expense.downloadExpenseId() << endl;
    cout << expense.downloadExpenseDate() << endl;
    cout << expense.downloadExpenseName() << endl;
    cout << setprecision(2) << fixed << expense.downloadExpenseAmount() << endl;
    system ("pause");
}

void FinanceManager::display()
{

    for (vector <Expense> :: iterator itr = expenses.begin(); itr != expenses.end(); itr++)
    {
        wyswietl(*itr);
    }

}

