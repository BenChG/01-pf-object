#include "FinanceManager.h"

Income FinanceManager::addNewIncome()
{
    string incomeName;
    string isAmountCorrect;
    string date;
    float incomeAmount;
    int incomeId=incomes.size()+1;
    int userId=ID_OF_LOGGED_IN_USER;
    int incomeDate;
    char choice = adjunctiveMethods.chooseDateVariant();

    while ((choice!='1')&&(choice!='2'))
    {
        cout << "There is no such choice, try again." <<  endl;
        system ("pause");
        choice = adjunctiveMethods.chooseDateVariant();
    }

    if (choice == '1')
    {
        date=dateMethods.loadCurrentDate();
        isDateCorrect="YES";
        cout << "The current date is: " << date << endl;
        system ("pause");
    }

    else if (choice == '2')
    {
        cout << "Please provide the date: " << endl;
        date = adjunctiveMethods.loadLines();
        isDateCorrect=dateMethods.checkIfDateIsCorrect(date);
    }

    while (isDateCorrect=="NO")
    {
        cout << "Date is incorrect, try again!" << endl;
        system ("pause");
        system ("cls");
        date = adjunctiveMethods.loadLines();
        isDateCorrect=dateMethods.checkIfDateIsCorrect(date);
    }

    incomeDate=dateMethods.changeDateIntoNumericFormat(date);

    cout << "Give me income name: ";
    incomeName = adjunctiveMethods.loadLines();

    cout << "Give me income amount: ";
    isAmountCorrect = adjunctiveMethods.verifyIfAmountIsCorrect();

    while (isAmountCorrect == "NO")
    {
        cout << "Amount provided is not a number, try again." << endl;
        system ("pause");
        system ("cls");

        cout << "Give me income amount: ";
        isAmountCorrect = adjunctiveMethods.verifyIfAmountIsCorrect();
    }

    incomeAmount = adjunctiveMethods.changeStringIntoFloat(isAmountCorrect);

    income.setIncomeId(incomeId);
    income.setUserId(userId);
    income.setIncomeDate(incomeDate);
    income.setIncomeName(incomeName);
    income.setIncomeAmount(incomeAmount);
    incomes.push_back(income);

    filesForFinanceManager.addNewIncomeToTheFileWithIncomes(incomeId, userId, incomeDate, incomeName, isAmountCorrect);
    incomes=filesForFinanceManager.loadIncomesFromTheFile();

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

    while ((choice!='1')&&(choice!='2'))
    {
        cout << "There is no such choice, try again." <<  endl;
        system ("pause");
        choice = adjunctiveMethods.chooseDateVariant();
    }

    if (choice == '1')
    {
        date=dateMethods.loadCurrentDate();
        isDateCorrect="YES";
        cout << "The current date is: " << date << endl;
        system ("pause");
    }

    else if (choice == '2')
    {
        cout << "Please provide the date: " << endl;
        date = adjunctiveMethods.loadLines();
        isDateCorrect=dateMethods.checkIfDateIsCorrect(date);
    }

    while (isDateCorrect=="NO")
    {
        cout << "Date is incorrect, try again!" << endl;
        system ("pause");
        date = adjunctiveMethods.loadLines();
        isDateCorrect=dateMethods.checkIfDateIsCorrect(date);
    }

    expenseDate=dateMethods.changeDateIntoNumericFormat(date);

    cout << "Give me expense name: ";
    expenseName = adjunctiveMethods.loadLines();

    cout << "Give me expense amount: ";
    isAmountCorrect = adjunctiveMethods.verifyIfAmountIsCorrect();

    while (isAmountCorrect == "NO")
    {
        cout << "Amount provided is not a number, try again." << endl;
        system ("pause");
        system ("cls");

        cout << "Give me income amount: ";
        isAmountCorrect = adjunctiveMethods.verifyIfAmountIsCorrect();
    }

    expenseAmount = adjunctiveMethods.changeStringIntoFloat(isAmountCorrect);

    expense.setExpenseId(expenseId);
    expense.setUserId(userId);
    expense.setExpenseDate(expenseDate);
    expense.setExpenseName(expenseName);
    expense.setExpenseAmount(expenseAmount);
    expenses.push_back(expense);

    filesForFinanceManager.addNewExpenseToTheFileWithExpenses(expenseId, userId, expenseDate, expenseName, isAmountCorrect);
    expenses=filesForFinanceManager.loadExpensesFromTheFile();

    return expense;
}

int FinanceManager::addIncomeFromSelectedPeriod(Income income, int beginningDate, int endingDate)
{
    int incomeDate=income.getIncomeDate();
    int userId=income.getUserId();
    if ((incomeDate>=beginningDate) && (incomeDate<=endingDate)&&(userId==ID_OF_LOGGED_IN_USER))
    {
        return income.getIncomeAmount();
    }
    return 0;
}

int FinanceManager::addExpenseFromSelectedPeriod(Expense expense, int beginningDate, int endingDate)
{
    int expenseDate=expense.getExpenseDate();
    int userId=expense.getUserId();
    if ((expenseDate>=beginningDate) && (expenseDate<=endingDate)&&(userId==ID_OF_LOGGED_IN_USER))
    {
        return expense.getExpenseAmount();
    }
    return 0;
}

void FinanceManager::showTheIncomes(Income income, int beginningDate, int endingDate)
{
    int incomeDate=income.getIncomeDate();
    int userId=income.getUserId();

    if ((incomeDate>=beginningDate) && (incomeDate<=endingDate)&&(userId==ID_OF_LOGGED_IN_USER))
    {
        cout << "Id: " << income.getIncomeId() << endl;
        cout << "Date: " <<income.getIncomeDate() << endl;
        cout << "Name: " <<income.getIncomeName() << endl;
        cout << "Amount: " << setprecision(16) << income.getIncomeAmount() << endl << endl;
        system ("pause");
    }
}

void FinanceManager::showTheExpenses(Expense expense, int beginningDate, int endingDate)
{
    int expenseDate=expense.getExpenseDate();
    int userId=expense.getUserId();

    if ((expenseDate>=beginningDate) && (expenseDate<=endingDate)&&(userId==ID_OF_LOGGED_IN_USER))
    {
        cout << "Id: " << expense.getExpenseId() << endl;
        cout << "Date: " <<  expense.getExpenseDate() << endl;
        cout << "Name: " <<  expense.getExpenseName() << endl;
        cout << "Amount: " <<  setprecision(16) << expense.getExpenseAmount() << endl << endl;
        system ("pause");
    }
}

bool sortIncomesByDate(Income &p1, Income &p2)
{
    return p1.getIncomeDate() < p2.getIncomeDate();
}

bool sortExpensesByDate(Expense &p1, Expense &p2)
{
    return p1.getExpenseDate() < p2.getExpenseDate();
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

    cout << endl << "Sum of incomes : " << sumOfIncomes << endl;
    cout << "Sum of expenses: " << sumOfExpenses << endl;
    cout << "Balance of selected period: " << sumOfIncomes - sumOfExpenses << endl;
    system ("pause");
}

void FinanceManager::balanceOfCurrentMonth()
{
    currentDate = dateMethods.loadCurrentDate();
    beginningDate = dateMethods.getBeginningDate(currentDate);
    endingDate = dateMethods.getEndingDate(currentDate);

    displayBalance(beginningDate, endingDate);
}

void FinanceManager::balanceOfPreviousMonth()
{
    currentDate = dateMethods.loadCurrentDate();
    choosenDate = dateMethods.changeDateIntoPreviousMonth(currentDate);
    beginningDate = dateMethods.getBeginningDate(choosenDate);
    endingDate = dateMethods.getEndingDate(choosenDate);

    displayBalance(beginningDate, endingDate);
}

void FinanceManager::balanceOfSelectedPeriod()
{
    string firstDate;
    string lastDate;
    cout << "Please provide beginning date (yyyy-mm-dd): ";
    cin >> firstDate;

    isDateCorrect=dateMethods.checkIfDateIsCorrect(firstDate);

    while  (isDateCorrect=="NO")
    {
        cout << "Given date is incorrect, try again." << endl;
        system ("pause");
        system ("cls");
        cout << "Please provide beginning date (yyyy-mm-dd): ";
        cin >> firstDate;
        isDateCorrect=dateMethods.checkIfDateIsCorrect(firstDate);
    }

    cout << "Please provide ending date (yyyy-mm-dd): ";
    cin >> lastDate;
    isDateCorrect=dateMethods.checkIfDateIsCorrect(lastDate);

    while  (isDateCorrect=="NO")
    {
        cout << "Given date is incorrect, try again." << endl;
        system ("pause");
        system ("cls");
        cout << "Please provide ending date (yyyy-mm-dd): ";
        cin >> lastDate;
        isDateCorrect=dateMethods.checkIfDateIsCorrect(lastDate);
    }

    beginningDate=dateMethods.changeDateIntoNumericFormat(firstDate);
    endingDate=dateMethods.changeDateIntoNumericFormat(lastDate);

    if (beginningDate>endingDate)
    {
        cout << "Beginning date is higher, than ending date." << endl;
        cout << "Provided values are incorrect, try again later." << endl;
        system ("pause");
    }

    else
    {
        displayBalance(beginningDate, endingDate);
    }
}
