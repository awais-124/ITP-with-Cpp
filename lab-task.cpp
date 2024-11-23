#include <iostream>
using namespace std;
int main()
{
	int i,j,k,lines=5;
	
	for(i=0;i<lines;i++)
	{
		for(j=1;j<=lines-i-1;j++)
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
