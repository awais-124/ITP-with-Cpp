#include <iostream>
using namespace std;
int main()
{
	int a[10],temp,num;
	
	cout<<"\nEnter the elements of array... \n "<<endl;
	for(int i=0;i<10;i++)
	{
	 cout<<"Enter value for index "<<i<<": ";
	 cin>>a[i];
	}
	
	

//	a[10]={1,2,3,4,5,6,7,8,9,0};

	for(int i=0;i<10;i++)
	{
		for(int j=i+1;j<10;j++)
		{
			if(a[i]<a[j])
			{
				swap(a[i],a[j]);
			}
		}
	}
	cout<<"\n\nArray after sorting.... "<<endl;
	cout<<"In Descending order:   ";
	 for(int i=0;i<10;i++)
	{
		cout<<a[i]<<"\t";
	}
		for(int i=0;i<10;i++)
	{
		for(int j=i+1;j<10;j++)
		{
			if(a[i]>a[j])
			{
				swap(a[i],a[j]);
			}
		}
	}
		cout<<"\n\nIn Ascending order:    ";
	 for(int i=0;i<10;i++)
	{
		cout<<a[i]<<"\t";
	}

	


	
	

	return 0;
}
