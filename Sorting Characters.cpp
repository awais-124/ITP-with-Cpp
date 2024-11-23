#include <iostream>
using namespace std;
int main()
{
	char char1, char2, char3,first,second,third;
	int Option;
	cout<<"Enter First Character: ";
	cin>>char1;
	cout<<"Enter Second Character: ";
	cin>>char2;
	cout<<"Enter Third Character: ";
	cin>>char3;
	cout<<" 1. Sort in Ascending Order"<<endl;
	cout<<" 2. Sort in Descending Order"<<endl;
	cout<<"Enter The Option as Described above: ";
	cin>>Option;


	
	if ((char1 < char2) && (char1 < char3)) 
		first = char1;

	else if ((char2 < char1) && (char2 < char3))
		first = char2;

	else
		first = char3;

	if ((char1 < char3) && (char1 > char2))
		second = char1;
	else if ((char2 < char3) && (char2 > char1))
		second = char2;
	else
		second = char3;


	

	if ((char1 > char2) && (char1 > char3))
		third = char1;
	else if ((char2 > char1) && (char2 > char3))
		third = char2;
	else
		third = char3;
	
	
	
	
	switch(Option)
	{
		case 1:
			    cout << "Characters in Ascending Order are as:" << endl;
	            cout << "The first number is: " << first << endl;
                cout << "The second number is: " << second << endl;
	            cout << "The third number is: " << third << endl;
			
			break;
		case 2:
			    cout << "Characters in Descending Order are as:" << endl;
	            cout << "The first number is: " << third << endl;
                cout << "The second number is: " << second << endl;
	            cout << "The third number is: " << first << endl;	
			
			break;
		default:
			cout<<"Invalid Input"<<endl;
			
	}
	
	
	return 0;
	
}
