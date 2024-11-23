	
	#include <iostream>
	using namespace std;
	int main()
	{
	  int Options;
	  float salary,gasbill,ebill,fuel,house_rent;
	  
	  cout<<"Enter your Salary: ";
	  cin>>salary;
	  
	  cout<<"Press 1 to calculate gas bill charges."<<endl;
	  cout<<"Press 2 to calculate electricity bill charges."<<endl; 
	  cout<<"Press 3 to calculate fueling charges."<<endl;
	  cout<<"Press 4 to calculate house rent charges."<<endl;
	  cout<<"Enter your Option:";
	  cin>>Options;
	  
	  gasbill=0.1*salary;
	  ebill=0.05*salary;
	  fuel=0.1*salary;
	  house_rent=0.15*salary;
	  
	  switch(Options) 
	  {
	  	case 1:
	  		cout<<"Your Gas Bill Charges are: "<<gasbill<<endl;
	  		break;
	  	case 2:
	  		cout<<"Your Electricity Bill Charges are: "<<ebill<<endl;
	  		break;
	  	case 3:
	  		cout<<"Your Fuel Charges are: "<<fuel<<endl;
	  		break;
	  	case 4:
	  		cout<<"Your House Rent Charges are: "<<house_rent<<endl;
	  		break;
	  	default:
		  cout<<"Invalid Input";	
	  }
	       
	return 0;
	}

