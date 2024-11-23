#include<iostream>
using namespace std;
int main()
{
	/*           *
	            * *
	           *   *
	          *     * 
	         *       *
	          *     * 
	           *   *  
	            * *
	             * 
	         */
	int l,y;
	cout<<"Enter Number of Lines:  ";
	cin>>l;
	if(l%2!=0)
	{
		
	
	y=(l/2)+1;
	for(int i=0;i<y;i++)
	{
		for(int j=0;j<y-i-1;j++)
		{
			cout<<" ";
		}
		for(int k=1;k<=2*i+1;k++)
		{
			if(k==1 || k==2*i+1)
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
	for(int i=y-1;i>0;i--)
	{
		for(int j=0;j<y-i;j++)
		{
			cout<<" ";
		}
		for(int k=1;k<=2*i-1;k++)
		{
			
			if(k==1 || k==2*i-1)
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
}
	
	else 
	{
			for(int i=0;i<y;i++)
	{
		for(int j=0;j<y-i-1;j++)
		{
			cout<<" ";
		}
		for(int k=1;k<=2*i+1;k++)
		{
			if(k==1 || k==2*i+1)
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
	for(int i=y;i>0;i--)
	{
		for(int j=0;j<y-i;j++)
		{
			cout<<" ";
		}
		for(int k=1;k<=2*i-1;k++)
		{
			
			if(k==1 || k==2*i-1)
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
	}
	return 0;
	
}
