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

        cout << "Give me income name: " << endl;
        incomeName = adjunctiveMethods.loadLines();

        cout << "Give me income amount: " << endl;
        isAmountCorrect = adjunctiveMethods.verifyIfAmountIsCorrect();

        if (isAmountCorrect == "NO")
        {
            cout << "Amount provided is not a number, try again later" << endl;
            system ("pause");
        }

        else
        {
            incomeAmount = adjunctiveMethods.changeStringIntoFloat(isAmountCorrect);

            income.setIncomeId(incomeId);
            income.setIncomeDate(incomeDate);
            income.setIncomeName(incomeName);
            income.setIncomeAmount(incomeAmount);
            incomes.push_back(income);

            filesForFinanceManager.addNewIncomeToTheFileWithIncomes(incomeId, incomeDate, incomeName, incomeAmount);
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
    string isAmountCorrect;
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
        isAmountCorrect = adjunctiveMethods.verifyIfAmountIsCorrect();

        if (isAmountCorrect == "NO")
        {
            cout << "Amount provided is not a number, try again later" << endl;
            system ("pause");
        }

        else
        {
            expenseAmount = adjunctiveMethods.changeStringIntoFloat(isAmountCorrect);

            expense.setExpenseId(expenseId);
            expense.setExpenseDate(expenseDate);
            expense.setExpenseName(expenseName);
            expense.setExpenseAmount(expenseAmount);
            expenses.push_back(expense);

            filesForFinanceManager.addNewExpenseToTheFileWithExpenses(expenseId, expenseDate, expenseName, expenseAmount);

            return expense;
        }
    }
    else

    {
        cout << "Date is wrong !!!" << endl;
        system ("pause");
    }
}
