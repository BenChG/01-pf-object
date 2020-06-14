#include "FinanceManager.h"

Income FinanceManager::addNewIncome()
{
    Income income;
    AdjunctiveMethods adjunctiveMethods;


    string incomeName;
    string isAmountCorrect;
    string date;
    float incomeAmount;
    int incomeDate;
    int incomeId=incomes.size()+1;
    char choice = adjunctiveMethods.chooseDateVariant();

    if (choice == '1')
    {
        date=dateMethods.loadCurrentDate();
        isDateCorrect="YES";
    }

    else if (choice == '2')
    {
        date = adjunctiveMethods.loadLines();
        isDateCorrect=dateMethods.checkIfDateIsCorrect(date);
    }

    else
    {
        cout << "Wrong choice, try again later" << endl;
    }

    if (isDateCorrect=="YES")
    {
        incomeDate=dateMethods.changeDateIntoNumericFormat(date);

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

    string expenseName;
    string isAmountCorrect;
    string date;
    float expenseAmount;
    int expenseDate;
    int expenseId=expenses.size()+1;
    char choice = adjunctiveMethods.chooseDateVariant();

    if (choice == '1')
    {
        date=dateMethods.loadCurrentDate();
        isDateCorrect="YES";
    }

    else if (choice == '2')
    {
        date = adjunctiveMethods.loadLines();
        isDateCorrect=dateMethods.checkIfDateIsCorrect(date);
    }

    else
    {
        cout << "Wrong choice, try again later" << endl;
    }

    if (isDateCorrect=="YES")
    {
        expenseDate=dateMethods.changeDateIntoNumericFormat(date);

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
/*
void FinanceManager::showTheBalance(Income income)
{
string currentDate = dateMethods.loadCurrentDate();

 cout << currentDate << endl;
 cout << income.downloadIncomeId() << " ";
 cout << income.downloadIncomeDate() << " ";
 cout << setprecision(16) << income.downloadIncomeAmount() << " ";
 cout << income.downloadIncomeName() << endl;
 system ("pause");
}

void FinanceManager::balanceOfCurrentMonth()
{
 for (vector <Income> :: iterator itr = incomes.begin(); itr != incomes.end(); itr++)
 {
    showTheBalance(*itr);
 }

}
*/

