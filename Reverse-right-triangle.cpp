#include <iostream>
using namespace std;
int main()
{
	int i,j,k,lines;
	cout<<"Enter no of Lines: ";
	cin>>lines;
	int num=1;
	for(i=1;i<=lines;i++)
	{
		for(j=1;j<=lines-i;j++)
		{
			cout<<" ";
		}
		for(k=1;k<=i;k++)
		{
			cout<<"*";
//			num++;
		}
		cout<<endl;
		
	}
	return 0;
}
