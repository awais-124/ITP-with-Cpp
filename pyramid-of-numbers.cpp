#include <iostream>
using namespace std;
int main()
{
	int i,j,k,lines,x,y;
	cout<<"Enter the Number of Lines: ";
	cin>>lines;
	
	y=(lines/2)+1;
	int v=1;
	for(i=1;i<=y;i++)
	{
		for(j=1;j<=y-i;j++)
		{
			cout<<" ";
			
		}
		for(k=1;k<=i;k++)
		{
			cout<<v<<" ";
			v++;
		}
	  cout<<endl;
	  
	}
	
	for(i=1;i<=y;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<" ";
			
		}
		
		for(k=1;k<=y-i;k++)
		{
			cout<<v<<" ";
			v++;
		}
	  cout<<endl;
	  
	}
	


	return 0;
}
