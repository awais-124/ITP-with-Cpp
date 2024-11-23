#include<iostream>
using namespace std;

int main()
{
int num;
cin>>num;
int rev=0;
int digit;
int n=num;
while(num>0)
{
	digit=num%10;
	rev=(rev*10)+digit;
	num=num/10;
	
}

cout<<rev;
	
}
