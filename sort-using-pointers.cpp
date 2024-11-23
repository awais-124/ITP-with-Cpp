#include <iostream>
using namespace std;
int main()
{
	int a[10],temp,num,sum=0;	
	cout<<"\nEnter... \n "<<endl;
	for(int i=0;i<10;i++)
	{
	 cout<<"Value for index "<<i<<": ";
	 cin>>a[i];
	 sum+=a[i];
	 cout<<sum<<endl;
	}
		for(int i=0;i<10;i++)
	{
		for(int j=i+1;j<10;j++)
		{
			if(*(a+i)<*(a+j))
			{
				temp=*(a+i);
				*(a+i)=*(a+j);
				*(a+j)=temp;
			}
		}
	}
	cout<<"\n\nArray after sorting.... "<<endl;
	cout<<"In Descending order:   ";
	 for(int i=0;i<10;i++)
	{
		cout<<a[i]<<"\t";
	}
	return 0;
}
