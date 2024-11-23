#include <iostream>
using namespace std;
int main()
{
	int i,j,k,lines,m;
	cout<<"Enter the Number of Lines: ";
	cin>>m;
	lines=(m/2)+1;
	for(i=1;i<=lines;i++)
	{
		for(j=1;j<=lines-i;j++)
		{
			cout<<" ";	
		}
		
		for(int k = 1; k <= i * 2 - 1; k++)
		{
			
			if(k == 1 || k == i * 2 - 1)
			{
				cout<<"*";
			}
			else
			{ 
				cout<<" ";
				
			}
			
	    }
		
	  cout<<endl;
	}
	
	for(i=lines-1;i>=1;i--)
	{
		for(j=1;j<=lines-i;j++)
		{
			cout<<" ";	
		}
		
		for(int k = 1; k <= i * 2 - 1; k++)
		{
			
			if(k == 1 || k == i * 2 - 1)
			{
				cout<<"*";
			}
			else
			{ 
				cout<<" ";
				
			}
			
	    }
	     cout<<endl;
	}
		
	 
	
	return 0;
}
