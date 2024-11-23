#include <iostream>
using namespace std;
int main()
{
	int i,j,k,lines,m=0;
	cout<<"Enter the Number of Lines: ";
	cin>>lines;
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
			else if(i == lines)
			{
                cout<<"*";
			}

			else
			{ 
				cout<<" ";
				
			}
			
	    }
		
	  cout<<endl;
//	  m++;
	}
	return 0;
}
