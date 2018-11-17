#ifndef SAVINGSBANKACCOUNT_H
#define SAVINGSBANKACCOUNT_H
#include"BankAccount.h"



class SavingsBankAccount : public BankAccount
{
    public:
        SavingsBankAccount();
        SavingsBankAccount(double);
        setID(int);
        int getID();
        setbalance(double);
        double getbalance();
        double withdraw(double);
        double depoist(double);



    private:
        double minimumBalance=1000;
};

#endif // SAVINGSBANKACCOUNT_H
