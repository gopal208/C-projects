#include<iostream>
using namespace std;
void show_menu()
{
cout<<"*********MENU**********"<<endl;
cout<<"1.Check Balance"<<endl;
cout<<"2.Deposite"<<endl;
cout<<"3.Withdraw"<<endl;
cout<<"4.Exit"<<endl;
cout<<"***********************"<<endl;
}

int main()
{
    int op;
    double balance=5000;
    while(1)
    {


    show_menu();
    cout<<"Option:";
    cin>>op;
    system("cls");
    switch(op)
    {
 case 1:
        cout<<"Total Balance is:"<<balance<<endl;
        break;
 case 2: double dep;
        cout<<"Enter Ammount to Deposite:";
        cin>>dep;
        balance=balance+dep;
        break;
 case 3: double withAm;
        cout<<"Enter Ammount to Withdraw:";
        cin>>withAm;
        if(withAm<balance)
        {
            balance=balance-withAm;
        }

        else
        {
            cout<<"Not enough money"<<endl;
        }
        break;
  case 4:exit(0);

    }

    }
  return 0;
}


