#include<iostream>
using namespace std;
int main()
{
	double r[10],a[10];
	cout<<"Enter Values of Radii.....\n";
	for(int i=0;i<10;i++)
	{
		cout<<"Value "<<i+1<<":";
		cin>>*(r+i);
	}
	
	for(int i=0;i<10;i++)
	{
		*(a+i)=3.14*(*(r+i)*(*(r+i)));
	}
	cout<<"\nCalculated areas are ....\n";
	for(int i=0;i<10;i++)
	{
		cout<<"Area "<<i+1<<":  "<<*(a+i)<<endl;
	}
}
