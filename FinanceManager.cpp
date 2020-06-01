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

    //filesWithUsers.addNewUserToTheFileWithUsers(userId, userLogin, userPassword, userFirstName, userLastName);
    return income;
}

void FinanceManager::wyswietl(Income income)
{

    cout << income.downloadIncomeId() << endl;
    cout << income.downloadIncomeDate() << endl;
    cout << income.downloadIncomeName() << endl;
    cout << setprecision(2) << fixed << income.downloadIncomeAmount() << endl;
    system ("pause");
}

void FinanceManager::addNewExpense()
{

for (vector <Income> :: iterator itr = incomes.begin(); itr != incomes.end(); itr++)
{
           wyswietl(*itr);
}

}

