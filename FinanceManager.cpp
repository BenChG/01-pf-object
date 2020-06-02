#include "FinanceManager.h"

Income FinanceManager::addNewIncome()
{
    Income income;
    AdjunctiveMethods adjunctiveMethods;

    string incomeDate;
    string incomeName;
    float incomeAmount;

    int incomeId=incomes.size()+1;

    cout << "Give me income date: " << endl;
    incomeDate = adjunctiveMethods.loadLines();

    cout << "Give me income name: " << endl;
    incomeName = adjunctiveMethods.loadLines();

    cout << "Give me income amount: " << endl;
    incomeAmount = adjunctiveMethods.loadValue();

    income.setIncomeId(incomeId);
    income.setIncomeDate(incomeDate);
    income.setIncomeName(incomeName);
    income.setIncomeAmount(incomeAmount);

    incomes.push_back(income);

      displayyy();

    filesForFinanceManager.addNewIncomeToTheFileWithIncomes(incomeId, incomeDate, incomeName, incomeAmount);
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

    cout << "Give me expense date: " << endl;
    expenseDate = adjunctiveMethods.loadLines();

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

