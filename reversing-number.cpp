#include<iostream>
using namespace std;
int reverse(int &n)
{
	int digit,rev=0;
	while(n!=0)
	{
		digit=n%10;
		rev=(rev*10)+digit;  //1234
		n=n/10;
	}
	return rev;
}
int main()
{
	int num,digit,rev=0;
	cin>>num;
	cout<<reverse(num);
	
}
