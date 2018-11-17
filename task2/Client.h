#ifndef CLIENT_H
#define CLIENT_H
#include <bits/stdc++.h>
#include "SavingsBankAccount.h"


class Client : public SavingsBankAccount
{
public:
    Client();

    void print();
    BankAccount *ptr;

    int type;



protected:
    string name;
    string address;
    long phoneNumber;


};

#endif // CLIENT_H
