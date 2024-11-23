#include <iostream>
using namespace std;
int main()
{
	int i,j,k,y;
	cout<<"Enter the Number of Lines: ";
	cin>>y;
	for(i=1;i<=y;i++)
	{
		for(j=1;j<i;j++)
		{
			cout<<" ";	
		}
		for(k=y;k>=i;k--)
		{
			cout<<"* ";
		}
	  cout<<endl;
	}
	return 0;
}
