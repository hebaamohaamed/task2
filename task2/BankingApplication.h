#ifndef BANKINGAPPLICATION_H
#define BANKINGAPPLICATION_H
#include<vector>
#include "Client.h"
#include"BankingApplication.h"

class BankingApplication : public Client
{
    public:
        BankingApplication();
        void addclient();


    protected:
    vector<Client>List;
    int choice;
    int ID=001;
    int numOfClients=0;
};

#endif // BANKINGAPPLICATION_H
