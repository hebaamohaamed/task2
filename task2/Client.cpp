#include <iostream>
#include "BankAccount.h"
#include "SavingsBankAccount.h"
#include "Client.h"
Client::Client()
{
    cout<<"enter name:";
    cin>>name;
    cout<<endl;
    cout<<"enter address:";
    cin>>address;
    cout<<endl;
    cout<<"enter your phone number:";
    cin>>phoneNumber;
    cout<<endl;
    cout<<"what is the account type?"<<endl;
    cout<<"1.basic bank account"<<endl;
    cout<<"2.savings bank account"<<endl;
    cin>>type;
    double Balance;
    while(true)
    {
        if(type==1)
        {
            cout<<"enter your balance"<<endl;
            cin>>Balance;
            ptr=new BankAccount(Balance);
            break;
        }
        else if(type==2)
        {

        cout<<"enter your balance"<<endl;
        cin>>Balance;
        ptr=new SavingsBankAccount(Balance);

        if(Balance>=1000){
        break;
        }
            }
            else
            {
                cout<<"try again"<<endl;
                cin>>type;

            }
        }
    }
    void Client::print()
    {


        cout<<"name:"<<name<<endl;
        cout<<"address:"<<address<<endl;
        cout<<"phone number:"<<phoneNumber<<endl;
        cout<<"ID:"<<ptr->getID()<<endl;
        cout<<"balance:"<<ptr->getbalance()<<endl;
    }
