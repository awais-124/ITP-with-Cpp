#include <iostream>
using namespace std;
int main()
{
	int i,j,k,lines;
	cout<<"Enter no of Lines: ";
	cin>>lines;
	for(i=0;i<lines;i++)
	{
		for(j=4;j<=1;j--)
		{
			cout<<" ";
		}
		for(k=1;k<=(i*2)+1;k++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
