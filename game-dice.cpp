#include <cstdlib>
#include <time.h>
#include <iostream>

using namespace std;
int throw1, throw2, throw3, throw4;
int bet1 = 100;
int bet2 = 300;
int bet3 = 500;
int bet=(bet1, bet2, bet3);
int deposit;
int account;

int main(){
    int count = 0;

    while(count < 3){
    	cout<<"Enter Deposit money: ";
        cin>>deposit;

        while(deposit>5000 || deposit<0){                //Makes sure so that my deposit is between 0-5000
            cout<<"Deposit failed\n"<<endl;
            cin>>deposit;

        }
        account = deposit;
        cout<<"\nYou have deposited " <<deposit<<" Swedish Krona.\n\nYou have "<<account<<" Swedish Krona in your account"<<endl;

        if (account>499){  
		 cout<<"Bet1=100\tBet2=300\tBet3=500"<<endl;               //Makes sure so that i have the money to bet, and if i dont have the money, i can just put in more 
            cout<<"Please place your bet: "<<endl;
            
            cin>>bet1;
            cin>>bet2;
            cin>>bet3;
            account = (deposit - bet);
            cout<<"\n\nYou have this much cash on your account: "<<account<<" Swedish Krona."<<endl;
        }
        else if(account>299){
            cout<<" Please place your bet"<<endl;
            cout<<" Bet1=100, Bet2=300"<<endl;     
            cin>>bet1;
            cin>>bet2;
            account =(deposit - bet);
            cout<<"You have this much cash on your account :"<<account<<" Swedish Krona"<<endl;
        }
        else if(account>99){
            cout<<" Please place your bet"<<endl;
            cout<<" bet1=100"<<endl;
            cin>>bet1;
            cout<<" You have placed your bet"<<bet<<"Swedish Krona"<<endl;
        }

        while (account<100 || deposit>5000){
            cout<<" Insufficient funds"<<endl;
            cin>>deposit;
            account=deposit;
        }

        {
            cout<<" Throw dice"<<endl;
            srand(time(0)); 
            throw1 = rand() % 6 + 1;
            throw2 = rand() % 6 + 1;
            throw3 = rand() % 6 + 1;
            throw4 = rand() % 6 + 1;
            cout<<" You rolled "<<throw1<<endl;
            cout<<" You rolled "<<throw2<<endl<<endl;
            cout<<" Computer rolled "<<throw3<<endl;
            cout<<" Computer rolled "<<throw4<<endl;
        }
    }
    count++;

    system ("pause");
}
