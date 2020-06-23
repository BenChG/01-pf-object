#include "FinanceManager.h"

Income FinanceManager::addNewIncome()
{
    Income income;
    AdjunctiveMethods adjunctiveMethods;
    DateMethods dateMethods;
    string incomeName;
    string isAmountCorrect;
    string date;
    float incomeAmount;
    int incomeId=incomes.size()+1;
    int userId=ID_OF_LOGGED_IN_USER;
    cout << "userId" << userId << endl;
    system ("pause");
    int incomeDate;
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
            income.setIncomeId(userId);
            income.setIncomeDate(incomeDate);
            income.setIncomeName(incomeName);
            income.setIncomeAmount(incomeAmount);
            incomes.push_back(income);

            filesForFinanceManager.addNewIncomeToTheFileWithIncomes(incomeId, userId, incomeDate, incomeName, incomeAmount);
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
    DateMethods dateMethods;

    string expenseName;
    string isAmountCorrect;
    string date;
    float expenseAmount;
    int expenseId=expenses.size()+1;
   int userId=ID_OF_LOGGED_IN_USER;
    int expenseDate;
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
            expense.setExpenseId(userId);
            expense.setExpenseDate(expenseDate);
            expense.setExpenseName(expenseName);
            expense.setExpenseAmount(expenseAmount);
            expenses.push_back(expense);

            filesForFinanceManager.addNewExpenseToTheFileWithExpenses(expenseId, userId, expenseDate, expenseName, expenseAmount);

            return expense;
        }
    }
    else

    {
        cout << "Date is wrong !!!" << endl;
        system ("pause");
    }
}



void FinanceManager::showTheIncomes(Income income, int beginningDate, int endDate)
{
int incomeDate=income.downloadIncomeDate();

if ((incomeDate>=beginningDate) && (incomeDate<=endDate))
{
 cout << "Id: " << income.downloadIncomeId() << endl;
 cout << "Date: " <<income.downloadIncomeDate() << endl;
 cout << "Name: " <<income.downloadIncomeName() << endl;
 cout << "Amount: " << setprecision(16) << income.downloadIncomeAmount() << endl << endl;
 system ("pause");
}
}

  bool sortByDate(const Expense &p1,const Expense &p2)
{
    return p1.expenseDate < p2.expenseDate;
}


void FinanceManager::showTheExpenses(Expense expense, int beginningDate, int endDate)
{

cout << "Id: " << expense.downloadExpenseId() << endl;
 cout << "Date: " <<  expense.downloadExpenseDate() << endl;
 cout << "Name: " <<  expense.downloadExpenseName() << endl;
 cout << "Amount: " <<  setprecision(16) << expense.downloadExpenseAmount() << endl << endl;
 system ("pause");
/*
int expenseDate=expense.downloadExpenseDate();

if ((expenseDate>=beginningDate) && (expenseDate<=endDate))
{
 cout << "Id: " << expense.downloadExpenseId() << endl;
 cout << "Date: " <<  expense.downloadExpenseDate() << endl;
 cout << "Name: " <<  expense.downloadExpenseName() << endl;
 cout << "Amount: " <<  setprecision(16) << expense.downloadExpenseAmount() << endl << endl;
 system ("pause");
}
*/

}

void FinanceManager::balanceOfCurrentMonth()
{
DateMethods dateMethods;
string currentDate = dateMethods.loadCurrentDate();
int beginningDate = dateMethods.downloadBeginningDate(currentDate);
int endDate = dateMethods.downloadEndDate(currentDate);

/*
cout << "----------LIST OF INCOMES----------" << endl;

 for (vector <Income> :: iterator itr = incomes.begin(); itr != incomes.end(); itr++)
 {
    showTheIncomes(*itr, beginningDate, endDate);

 }
 */
 cout << endl << "----------LIST OF EXPENSES----------" << endl;

  for (vector <Expense> :: iterator itr = expenses.begin(); itr != expenses.end(); itr++)
 {
    showTheExpenses(*itr, beginningDate, endDate);
 }

  sort (expenses.begin(), expenses.end(), sortByDate);


  cout << endl << "----------LIST OF EXPENSES AFTER SORTING----------" << endl;

  for (vector <Expense> :: iterator itr = expenses.begin(); itr != expenses.end(); itr++)
 {
    showTheExpenses(*itr, beginningDate, endDate);
 }

}



