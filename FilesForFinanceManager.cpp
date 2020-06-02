#include "FilesForFinanceManager.h"

void FilesForFinanceManager::addNewIncomeToTheFileWithIncomes(int id, string date, string name, float amount)
{
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
    xml.AddElem("Id", id);
    xml.AddElem("Date", date);
    xml.AddElem("Name", name);
    xml.AddElem("Amount", amount);

    xml.Save(NAME_OF_FILE_WITH_INCOMES);

    cout << endl << "New income added." << endl;
    cout << "Size of vector incomes: " << id << endl << endl;

    system("pause");
}

void FilesForFinanceManager::addNewExpenseToTheFileWithExpenses(int id, string date, string name, float amount)
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
    xml.AddElem("Id", id);
    xml.AddElem("Date", date);
    xml.AddElem("Name", name);
    xml.AddElem("Amount", amount);

    xml.Save(NAME_OF_FILE_WITH_EXPENSES);

    cout << endl << "New expense added." << endl;
    cout << "Size of vector expenses: " << id << endl << endl;

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
        xml.FindElem( "Id" );
        int incomeId = atoi(MCD_2PCSZ(xml.GetData()));
        xml.FindElem( "Date" );
        string date = xml.GetData();
        xml.FindElem( "Name" );
        string name = xml.GetData();
        xml.FindElem( "Amount" );
        float amount = atoi(MCD_2PCSZ(xml.GetData()));
        xml.OutOfElem();

        income.setIncomeId(incomeId);
        income.setIncomeDate(date);
        income.setIncomeName(name);
        income.setIncomeAmount(amount);

        incomes.push_back(income);
    }

    return incomes;
}

