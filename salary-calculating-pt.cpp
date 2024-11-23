#include<iostream>
using namespace std;
int main()
{
	int salary;
	float medical;
	int c;
	char choice;
	cout<<"1: Permanent Employee."<<endl;
	cout<<"2: Daily Wages Employee."<<endl;
	cout<<"Enter ur Choice: ";
	cin>>c;
	
	switch(c)
	{
		case 1: 
		{
		
		    cout<<"Enter Number of hours: ";
		    int hours;
		    cin>>hours;
		    salary=hours*800;
		    medical=(3/100)*salary;
		    cout<<"A: Calculate Salary."<<endl;
			cout<<"B: Calculate Medical Charges."<<endl;
			cout<<"Enter a Choice: ";
			cin>>choice;
	
				switch(choice)
				{
					case 'A': 
					case 'a':
					 cout<<"Salary is: "<<salary<<endl;		
					   break;
					case 'B':
					case 'b':	
						cout<<"Medical allowance is "<<medical;
						break;
					default:
						cout<<"Invalid Input"<<endl;
		
                }
            break;
        }
        
        
		case 2:
			{
			
			cout<<"Enter Number of hours: ";
		    int hours;
		    cin>>hours;
		    salary=hours*400;
		    medical=(3/100)*salary;
		    cout<<"A: Calculate Salary."<<endl;
			cout<<"B: Calculate Medical Charges."<<endl;
			cout<<"Enter a Choice: ";
			cin>>choice;
	
				switch(choice)
				{
					case 'A': 
					case 'a':
					 cout<<"Salary is: "<<salary<<endl;		
					   break;
					case 'B':
					case 'b':	
						cout<<"Medical allowance is "<<medical;
						break;
					default:
						cout<<"Invalid Input"<<endl;
						
				}
				break;
			}
		default:
			cout<<"Invalid Input"<<endl;
		}
}
