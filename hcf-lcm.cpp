#include<iostream>
using namespace std;
int main()
{ 
	// multiples of no. upto a given range
	int n,range,m;
	cout<<"   FINDING MULTIPLES"<<endl;
	cout << " Enter a positive number :";
	cin >> n;
	cout << " Enter range of multiples :";
	cin >> range;
	cout << " Multiples of " << n << ":" << endl;
	for (int i = 1; i <= range; i++) 
	{
		m = n * i;
		cout <<" "<< m << endl;
	}
	// divisors or factors of a number
	int num;
	cout<<"   FINDING DIVISORS"<<endl;
	cout << " Enter a positive number :";
	cin >> num;
	cout << " Factors/Divisors of " << num<< " :" << endl;
	
	for (int i = 1; i <=num/2; i++) 
	{
		if (num % i == 0) 
		{
			cout<<" " << i << endl;
		}
	}
	// to find LCM of two numbers

	    int num1, num2, multiple;
	    cout<<"   FINDING LCM OF TWO NUMBERS"<<endl;
	    cout << " Enter value of num1 :";
		cin >> num1;
		cout << " Enter value of num2 :";
		cin >> num2;
		if (num1 > num2) 
		{
			multiple = num1;
        }
		else 
		{
			multiple = num2;
		}
		while (1) 
		{
			if (multiple % num1 == 0 && multiple % num2 == 0) 
			{
				break;
			}
			else 
			{
				multiple++;
			}
        }
		cout << " LCM of " <<" ( "<< num1 << "," << num2<<" )" << "=" << multiple<<endl;
		
		// to find hcf of two numbers
		int number1, number2,factor;
		cout<<"   FINDING HCF OF TWO NUMBERS"<<endl;
		cout << " Enter value of number1 :";
		cin >> number1;
		cout << " Enter value of number2 :";
		cin >> number2;
		if (number1 < number2) 
		{
			factor = number1;
		}
		else 
		{
			factor = number2;
		}
		while (1) 
		{
			if (number1 % factor==0 && number2 % factor==0) 
			{
				break;
			}
			else 
			{
				factor--;
			}
        }
		cout << " HCF of" << "( " << number1 <<","<< number2<<" )" << "=" << factor;


	return 0;
}
