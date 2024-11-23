#include <iostream>
using namespace std;
int main()
{
	int i,j,k,lines;
	cout<<"Enter the Number of Lines: ";
	cin>>lines;
	for(i=1;i<=lines;i++)
	{
		for(j=1;j<=lines-i;j++)
		{
			cout<<" ";
	    }
		for(k=1;k=1;k++)
		{
		   if((i%2!=0)&&(i!=1)){
				break;
			}
			else
			{
             cout<<"*";
			}
		}
		for(int l=1; l<i; l++)
		{
			if((i%2!=0)&&(i!=1)){
				break;
			}
			else
			{
             cout<<" ";
			}
			
		}
		for(k=1;k=1;k++)
		{
		   if((i%2!=0)&&(i!=1)){
				break;
			}
			else
			{
             cout<<"*";
			}
		}
		
	  cout<<endl;
	}
	return 0;
}
