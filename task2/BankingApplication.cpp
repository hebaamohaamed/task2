#include <iostream>


#include "Client.h"
#include"BankingApplication.h"
using namespace std;

BankingApplication::BankingApplication()
{
    cout<<" Welcome to FCI Banking Application "<<endl;
    cout<<" 1. Create a New Account "<<endl;
    cout<<" 2. List Clients and Accounts"<<endl;
    cout<<" 3. Withdraw Money "<<endl;
    cout<<"4. Deposit Money  "<<endl;
     cout<<"5. END "<<endl;
    cout<<"Please Enter Choice"<<endl;
    int choice_;
    cin>>choice_;
    while (true)
    {
        if(choice_==1)
        {
            addclient();
            numOfClients++;
        }
        else if(choice_==2)
        {
            for(unsigned int i=0;i<numOfClients;i++)
            {
                cout<<"client->"<<i+1<<endl;
                List[i].print();

            }
        }
        else if(choice_==3)
        {
            int _ID;
            cout<<"enter your ID:"<<endl;
            cin>>_ID;
            bool status=false;
            for(int i=0;i<numOfClients;i++)
            {
            if(_ID==List[i].ptr->getID())
            {

                cout<<"enter amount of money"<<endl;
                double money;
                cin>>money;
                List[i].ptr->withdraw(money);
                status=true;
                break;
            }
            }
            if(status==false)
            {
              cout<<"this ID doesn't exist!!"<<endl;
            }
        }
        else if(choice_==4)
        {
            int _ID;
            cout<<"enter your ID:"<<endl;
            cin>>_ID;
            bool status=false;
            for(int i=0;i<numOfClients;i++)
            {
            if(_ID==List[i].ptr->getID())
            {

                cout<<"enter amount of money"<<endl;
                double _money;
                cin>>_money;
                List[i].ptr->depoist(_money);
                status=true;
                break;
            }
            }
            if(status==false)
            {
              cout<<"this ID doesn't exist!!"<<endl;
            }
        }
       else if(choice_==5)
        {
            cout<<"you are DONE,thank you"<<endl;
            return;

        }
        else
        {
            cout<<"try again"<<endl;
        }

cout<<"enter another choice:"<<endl;
cin>>choice_;


    }

}

void BankingApplication:: addclient()
{
    Client c;


    c.ptr->setID(ID);
    cout<<"your ID:"<<c.ptr->getID()<<endl;


    ID++;
    List.push_back(c);

}

