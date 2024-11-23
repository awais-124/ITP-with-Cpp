#include<iostream>
#include<string>

using namespace std;
int main()
{
	int a[10];
	cout<<"Enter Values.....\n";
	for(int i=0;i<10;i++)
	{
		cout<<"Value "<<i+1<<":";
		cin>>*(a+i);
	}
	
	for(int i=0;i<10;i++)
	{
		if(*(a+i)%2!=0)
		{
			if(*(a+i)>0)
			{
				*(a+i)+=1;
			}
			else if(*(a+i)<0)
			{
				*(a+i)+=(-1);
			}
			else
			cout<<"Number is zero"<<endl;
		}
	}
	cout<<"\nUpdated Array is....\n";
	for(int i=0;i<10;i++)
	{
		cout<<"Value "<<i+1<<":  "<<*(a+i)<<endl;
	}
}
