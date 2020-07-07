#include "FilesForFinanceManager.h"

void FilesForFinanceManager::addNewIncomeToTheFileWithIncomes(int incomeId, int userId, int incomeDate, string incomeName, string incomeAmount)
{
    cout << "incomeAmount" << incomeAmount << endl;

    CMarkup xml;

    bool fileExists = xml.Load(NAME_OF_FILE_WITH_INCOMES);

    if (!fileExists)
    {
        xml.SetDoc("<?xml version=\"1.0\" encoding=\"UTF-8\"?>\r\n");
        xml.AddElem(NAME_OF_FILE_WITH_INCOMES);
    }

    xml.FindElem();
    xml.IntoElem();
    xml.AddElem("Income");
    xml.IntoElem();
    xml.AddElem("incomeId", incomeId);
    xml.AddElem("userId", userId);
    xml.AddElem("incomeDate", incomeDate);
    xml.AddElem("incomeName", incomeName);
    xml.AddElem("incomeAmount", incomeAmount);

    xml.Save(NAME_OF_FILE_WITH_INCOMES);

    cout << endl << "New income added." << endl;
    cout << "Size of vector incomes: " << incomeId << endl << endl;

    system("pause");
}

void FilesForFinanceManager::addNewExpenseToTheFileWithExpenses(int expenseId, int userId, int expenseDate, string expenseName, string expenseAmount)
{
    CMarkup xml;

    bool fileExists = xml.Load(NAME_OF_FILE_WITH_EXPENSES);

    if (!fileExists)
    {
        xml.SetDoc("<?xml version=\"1.0\" encoding=\"UTF-8\"?>\r\n");
        xml.AddElem(NAME_OF_FILE_WITH_EXPENSES);
    }

    xml.FindElem();
    xml.IntoElem();
    xml.AddElem("Expense");
    xml.IntoElem();
    xml.AddElem("expenseId", expenseId);
    xml.AddElem("userId", userId);
    xml.AddElem("expenseDate", expenseDate);
    xml.AddElem("expenseName", expenseName);
    xml.AddElem("expenseAmount", expenseAmount);

    xml.Save(NAME_OF_FILE_WITH_EXPENSES);

    cout << endl << "New expense added." << endl;
    cout << "Size of vector expenses: " << expenseId << endl << endl;

    system("pause");
}

vector <Income> FilesForFinanceManager::loadIncomesFromTheFile ()
{
    CMarkup xml;
    bool fileExists = xml.Load( "incomes.xml" );

    xml.FindElem();
    xml.IntoElem();

    while (xml.FindElem("Income") )
    {
        xml.IntoElem();
        xml.FindElem( "incomeId" );
        int incomeId = adjunctiveMethods.changeStringIntoInt(xml.GetData());
        xml.FindElem( "userId" );
        int userId = adjunctiveMethods.changeStringIntoInt(xml.GetData());
        xml.FindElem( "incomeDate" );
        int incomeDate = adjunctiveMethods.changeStringIntoInt(xml.GetData());
        xml.FindElem( "incomeName" );
        string incomeName = xml.GetData();
        xml.FindElem( "incomeAmount" );
        float incomeAmount = adjunctiveMethods.changeStringIntoFloat(xml.GetData());
        xml.OutOfElem();

        income.setIncomeId(incomeId);
        income.setUserId(userId);
        income.setIncomeDate(incomeDate);
        income.setIncomeName(incomeName);
        income.setIncomeAmount(incomeAmount);
        incomes.push_back(income);
    }

    return incomes;
}

vector <Expense> FilesForFinanceManager::loadExpensesFromTheFile ()
{
    CMarkup xml;
    bool fileExists = xml.Load("expenses.xml" );

    xml.FindElem();
    xml.IntoElem();

    while (xml.FindElem("Expense") )
    {
        xml.IntoElem();
        xml.FindElem( "expenseId" );
        int expenseId = adjunctiveMethods.changeStringIntoInt(xml.GetData());
        xml.FindElem( "userId" );
        int userId = adjunctiveMethods.changeStringIntoInt(xml.GetData());
        xml.FindElem( "expenseDate" );
        int expenseDate = adjunctiveMethods.changeStringIntoInt(xml.GetData());
        xml.FindElem( "expenseName" );
        string expenseName = xml.GetData();
        xml.FindElem( "expenseAmount" );
        float expenseAmount = adjunctiveMethods.changeStringIntoFloat(xml.GetData());
        xml.OutOfElem();

        expense.setExpenseId(expenseId);
        expense.setUserId(userId);
        expense.setExpenseDate(expenseDate);
        expense.setExpenseName(expenseName);
        expense.setExpenseAmount(expenseAmount);
        expenses.push_back(expense);
    }

    return expenses;
}

