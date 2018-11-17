#include "SavingsBankAccount.h"
#include <iostream>
#include "BankAccount.h"

using namespace std;
SavingsBankAccount::SavingsBankAccount()
{
    balance=0;
}
SavingsBankAccount::SavingsBankAccount(double b)
{
    if(b>=minimumBalance)
    {
        balance=b;
    }
    else
    {
        cout<<"it's less than 1000"<<endl;
    }

}
SavingsBankAccount:: setID(int i)
{
    accountID=i;
}

int SavingsBankAccount:: getID()
{
    return accountID;
}

SavingsBankAccount::setbalance(double b)
{
     if(b>=minimumBalance)
    {
        balance=b;
    }
    else
    {
        cout<<"it's less than 1000"<<endl;
    }
}

double SavingsBankAccount::getbalance()
{
    return balance;
}
double SavingsBankAccount::withdraw(double w)
{
    if(balance-w>=minimumBalance)
    {
        balance=balance-w;
        cout<<"done!"<<endl;
        return balance;
    }
    else
    {
        cout<<"your balance isn't sufficient."<<endl;
        return balance;
    }
}
double SavingsBankAccount::depoist(double d)
{
    if(d>=100)
    {
        balance=balance+d;
    }
    else
    {
        cout<<"it's less than 100"<<endl;
    }
    return balance;
}
