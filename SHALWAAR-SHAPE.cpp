#include <iostream>
using namespace std;
int main()
{
	int i,j,k,m,y,lines;
	cout<<"Enter the Number of Lines: ";
	cin>>lines;
	y=(lines*2);
	for(i=1;i<=lines;i++)
	{
			for(j=1;j<=i;j++)
			{
			 cout<<"*";
			}
		
			for(m=y-2;m>=(i*2)-1;m--)
			{
				cout<<" ";
				
			}
			for(j=1;j<=i;j++)
			{
				
				cout<<"*";
			}
		cout<<endl;
	}


	return 0;
}
