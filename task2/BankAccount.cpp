#include "BankAccount.h"
#include <iostream>

using namespace std;

BankAccount::BankAccount()
{
balance=0;
}
BankAccount::BankAccount(double b)
{
    balance=b;
}

BankAccount:: setID(int i)
{
    accountID=i;
}

int BankAccount:: getID()
{
    return accountID;
}

BankAccount::setbalance(double b)
{
    balance=b;

}

double BankAccount::getbalance()
{
    return balance;
}
double BankAccount::withdraw(double w)
{
    if(balance>=w)
    {
        balance=balance-w;
        cout<<"done!"<<endl;

    }
    else{cout<<"your balance isn't sufficient."<<endl;

    }
    cout<<"your balance is"<<balance<<endl;
    return balance;

}
double BankAccount::depoist(double d)
{
    balance=balance+d;
    cout<<"your balance is"<<balance<<endl;
    return balance;
}
