#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
using namespace std;

class BankAccount
{
    public:
        BankAccount();
        BankAccount(double);
        setID(int);
        int getID();
        setbalance(double);
        double getbalance();
        double withdraw(double);
        double depoist(double);


  protected:
        int accountID;
        double balance;
};

#endif // BANKACCOUNT_H
