#include <iostream>
using namespace std;
int main()
{
	int a[5];
	
	cout<<"Enter 5 elements... "<<endl;
	for(int i=0;i<5;i++)
	{
	  cin>>a[i];
	}
	for(int i=0;i<5;i++)
	{
		if(a[i]%3==0){
			a[i]=a[i]+1;
		}
		
	}
	cout<<"Updated array is...."<<endl;
	for(int i=0;i<5;i++)
	{
	  cout<<a[i]<<endl;
	}
return 0;
}
