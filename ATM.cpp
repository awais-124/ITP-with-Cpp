	
	#include <iostream>
	using namespace std;
	int main()
	{
	  int choice, initial_amount,deposit_amount,withdraw_amount,total_amount,balance ;
	  string option;
	  
	  cout<<"Press 1 to open Current Account"<<endl;
	  cout<<"Press 2 to open Saving Account"<<endl;
	  cout<<"Select the account you want to open:";
	  cin>>choice;
	  
	  switch(choice)
	  {
	  	case 1:
	  		cout<<"You have chosen to create Current Account."<<endl;
	  		cout<<"Enter the Initial Amount equal to 2000 :";
	  		cin>>initial_amount;
	  		if(initial_amount==2000)
	  		{
			  
	  		cout<<"Press a to Deposit Money"<<endl;
	  		cout<<"Press b to withdraw Money"<<endl;
	  		cout<<"Enter Your option: ";
	  		cin>>option;
	  		if(option=="a")
	  		{
	  			cout<<"Enter the amount you want to deposit: ";
        	     cin>>deposit_amount;
        	     total_amount = initial_amount + deposit_amount;
        	     cout<<"Dear customer you have successfully deposited "<<deposit_amount<<" into your current account and your balance is: "<<total_amount<<endl;
			     
			  }
			 else if(option=="b")
			 {
			 	cout<<"Enter The Amount You want to withdraw: ";
			 	cin>>withdraw_amount;
			 	balance = initial_amount - withdraw_amount;
        	if(withdraw_amount>10000)
        	{
        		cout<<"You can not withdraw more than 10000"<<endl;
			}
			else if(balance<500)
			{
				cout<<"You should have more than 500 in your account after transaction, please enter the amount again"<<endl;
			}
			else
			{
				cout<<"You have successfully withdrawn "<<withdraw_amount<<" from your Current Account, your Remaining Balance is "<<balance<<endl;
			}
		
			 	
			  }
			  else
			  {
			  	cout<<"Invalid Option";
			   }  
		}
		else
		{
			cout<<"Please enter the required amount."<<endl;
		}
			  break;
	  		
	
	  	case 2:
	  		cout<<"You have chosen to create Savings  Account."<<endl;
	  		cout<<"Enter the Initial Amount equal to 5000 :";
	  		cin>>initial_amount;
	  		if(initial_amount==5000)
	  		{
			  
	  		cout<<"Press a to Deposit Money"<<endl;
	  		cout<<"Press b to withdraw Money"<<endl;
	  		cout<<"Enter Your option: ";
	  		cin>>option;
	  		if(option=="a")
	  		{
	  			cout<<"Enter the amount you want to deposit: ";
        	     cin>>deposit_amount;
        	     total_amount = initial_amount + deposit_amount;
        	     cout<<"Dear customer you have successfully deposited "<<deposit_amount<<" into your savings account and your balance is: "<<total_amount<<endl;
			     
			  }
			 else if(option=="b")
			 {
			 	cout<<"Enter the Amount you want to withdraw: ";
			 	cin>>withdraw_amount;
			 	balance = initial_amount - withdraw_amount;
        	if(withdraw_amount>25000)
        	{
        		cout<<"You can not withdraw more than 10000"<<endl;
			}
			else if(balance<500)
			{
				cout<<"You should have more than 500 in your account after transaction, please enter the amount again"<<endl;
			}
			else
			{
				cout<<"You have successfully withdrawn "<<withdraw_amount<<" from your Savings Account, your Remaining Balance is "<<balance<<endl;
			}
		
			 	
			  }
			  else
			  {
			  	cout<<"Invalid Option";
			   } 
			   }
			   else
			   {
			   	cout<<"Please enter the Required Amount"<<endl;
			   }
			  break;
			default:
			  	cout<<"Invalid Choice";
	  }
	  
	  
	return 0;
	}

