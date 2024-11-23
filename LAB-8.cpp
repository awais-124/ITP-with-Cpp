#include <iostream>
using namespace std;
int main()
{
	int a[10],temp;
	
	cout<<"Enter the elements of array... "<<endl;
	for(int i=0;i<10;i++)
	{
	  cin>>a[i];
	}
	for(int i=0;i<10;i++)
	{
		for(int j=i+1;j<10;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	for(int i=0;i<10;i++)
	{
		if(i==9){
			cout<<"Maximum Number is: "<<a[i];
		}
     }
return 0;
}
