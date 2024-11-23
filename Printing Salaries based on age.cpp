#include <iostream>
using namespace std;
int main()
{

    int age,pay,pension,hours;
    
    // For Retired
    
    cout<<"Enter the age of the Retired-employee: ";
    cin>>age;
if(age>=60 && age<=70)
    {
	pension=30000;
    cout<<"This is the Pension for the Retired-employee: "<<pension<<endl;
    }
else if (age>70)
{

    pension=40000;
    cout<<"This is the Pension for the Retired-employee: "<<pension<<endl;
}
    else
    {
    	cout<<"Invalid Age For Retired Employee\n";
	}
  
      
   //For Employees

     

  cout<<"Enter the no. of hours employee worked for: ";
  cin>>hours;
if (hours>=0 && hours<=8)
    {
	cout<<"This is the net pay for the employee: "<<1000*hours<<endl;
	}


else if(hours>8 && hours<=11)
   {
   cout<<"This is the net pay for the employee: "<<(1000*8)+(hours-8)*300<<endl;
   }
else if(hours>11)
  {
   cout<<"This is the net pay for the employee: "<<(1000*8)+(3*300)<<endl;
  }
else

  {
	cout<<"Invalid Number of hours entered"<<endl;
  }
    return 0;
}











 
 

