#include "FinanceManager.h"

Income FinanceManager::addNewIncome()
{
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

int FinanceManager::addIncomeFromSelectedPeriod(Income income, int beginningDate, int endingDate)
{
    int incomeDate=income.downloadIncomeDate();
    int userId=income.downloadUserId();
    if ((incomeDate>=beginningDate) && (incomeDate<=endingDate)&&(userId==ID_OF_LOGGED_IN_USER))
    {
        return income.downloadIncomeAmount();
    }
    return 0;
}

int FinanceManager::addExpenseFromSelectedPeriod(Expense expense, int beginningDate, int endingDate)
{
    int expenseDate=expense.downloadExpenseDate();
    int userId=expense.downloadUserId();
    if ((expenseDate>=beginningDate) && (expenseDate<=endingDate)&&(userId==ID_OF_LOGGED_IN_USER))
    {
        return expense.downloadExpenseAmount();
    }
    return 0;
}

void FinanceManager::showTheIncomes(Income income, int beginningDate, int endingDate)
{
    int incomeDate=income.downloadIncomeDate();
    int userId=income.downloadUserId();

    if ((incomeDate>=beginningDate) && (incomeDate<=endingDate)&&(userId==ID_OF_LOGGED_IN_USER))
    {
        cout << "Id: " << income.downloadIncomeId() << endl;
        cout << "Date: " <<income.downloadIncomeDate() << endl;
        cout << "Name: " <<income.downloadIncomeName() << endl;
        cout << "Amount: " << setprecision(16) << income.downloadIncomeAmount() << endl << endl;
        system ("pause");
    }
}

void FinanceManager::showTheExpenses(Expense expense, int beginningDate, int endingDate)
{
    int expenseDate=expense.downloadExpenseDate();
    int userId=expense.downloadUserId();

    if ((expenseDate>=beginningDate) && (expenseDate<=endingDate)&&(userId==ID_OF_LOGGED_IN_USER))
    {
        cout << "Id: " << expense.downloadExpenseId() << endl;
        cout << "Date: " <<  expense.downloadExpenseDate() << endl;
        cout << "Name: " <<  expense.downloadExpenseName() << endl;
        cout << "Amount: " <<  setprecision(16) << expense.downloadExpenseAmount() << endl << endl;
        system ("pause");
    }
}

bool sortIncomesByDate(Income &p1, Income &p2)
{
    return p1.downloadIncomeDate() < p2.downloadIncomeDate();
}

bool sortExpensesByDate(Expense &p1, Expense &p2)
{
    return p1.downloadExpenseDate() < p2.downloadExpenseDate();
}

void FinanceManager::displayBalance(int beginningDate, int endingDate)
{
 int sumOfIncomes = 0;
 int sumOfExpenses = 0;

    sort (incomes.begin(), incomes.end(), sortIncomesByDate);

    cout << "----------LIST OF INCOMES----------" << endl;

    for (vector <Income> :: iterator itr = incomes.begin(); itr != incomes.end(); itr++)
    {
        showTheIncomes(*itr, beginningDate, endingDate);
        sumOfIncomes=sumOfIncomes+addIncomeFromSelectedPeriod(*itr, beginningDate, endingDate);
    }

    sort (expenses.begin(), expenses.end(), sortExpensesByDate);


    cout << endl << "----------LIST OF EXPENSES----------" << endl;

    for (vector <Expense> :: iterator itr = expenses.begin(); itr != expenses.end(); itr++)
    {
        showTheExpenses(*itr, beginningDate, endingDate);
        sumOfExpenses=sumOfExpenses+addExpenseFromSelectedPeriod(*itr, beginningDate, endingDate);
    }

    cout << "Sum of incomes : " << sumOfIncomes << endl;
    cout << "Sum of expenses: " << sumOfExpenses << endl;
    cout << "Balance of selected period: " << sumOfIncomes + sumOfExpenses << endl;
    system ("pause");
}

void FinanceManager::balanceOfCurrentMonth()
{
    currentDate = dateMethods.loadCurrentDate();
    beginningDate = dateMethods.downloadBeginningDate(currentDate);
    endingDate = dateMethods.downloadEndingDate(currentDate);

    displayBalance(beginningDate, endingDate);
}

void FinanceManager::balanceOfPreviousMonth()
{
    currentDate = dateMethods.loadCurrentDate();
    choosenDate = dateMethods.changeDateIntoPreviousMonth(currentDate);
    beginningDate = dateMethods.downloadBeginningDate(choosenDate);
    endingDate = dateMethods.downloadEndingDate(choosenDate);

    displayBalance(beginningDate, endingDate);
}

void FinanceManager::balanceOfSelectedPeriod()
{
    string firstDate;
    string lastDate;
    cout << "Please provide beginning date (yyyy-mm-dd): ";
    cin >> firstDate;

    isDateCorrect=dateMethods.checkIfDateIsCorrect(firstDate);

    if (isDateCorrect=="YES")
    {
        cout << "Please provide ending date (yyyy-mm-dd): ";
        cin >> lastDate;
        isDateCorrect=dateMethods.checkIfDateIsCorrect(lastDate);

        if (isDateCorrect=="YES")
        {

            beginningDate=dateMethods.changeDateIntoNumericFormat(firstDate);
            endingDate=dateMethods.changeDateIntoNumericFormat(lastDate);
            if (beginningDate>endingDate)
            {
                cout << "Provided values are incorrect." << endl;
                cout << "Beginning date is higher, than ending date." << endl;
                cout << "Try again." << endl;
                system ("pause");
            }
            else
            {
                displayBalance(beginningDate, endingDate);
            }
        }
        else
        {
            cout << "Provided date is incorrect, try again." << endl;
            system ("pause");
        }
    }

    else
    {
        cout << "Provided date is incorrect, try again." << endl;
        system ("pause");
    }




}
