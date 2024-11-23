#include <iostream>
using namespace std;
int main()
{
	int i,j,a[5];
	
	for(i=0;i<5;i++)
	{
		cout<<"Element "<<i+1<<" = ";
	    cin>>a[i];
	}
	for(i=1;i<=5;i++)
	{
		for(j=2;j<=4;j++)
		{
			if(a[i]%j==0)
			{
				count++;
			}
		}
	}
	return 0;
}
