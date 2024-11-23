#include <iostream>
using namespace std;
int main()
{
int i,j,k,x,y,lines=9,m=1,gap=0;

    y=(lines/2)+1;
	for(int i=1;i<=y;i++)
	{
		for(int j=1;j<=y-i;j++)
		{
			cout<<"  ";
			
		}
		for(int k=1;k<=i;k++)
		{
			if(i==5){
				cout<<m++<<"  ";
			}
			else {
		cout<<m++<<"   ";
		}
		}
	  cout<<endl;
	}
	x=y+1;
	for(int i=1;i<=x;i++)
	{
		for(int j=0;j<=gap;j++)
		{
			cout<<"  ";
			
		} 
		gap++;
		
		for(int k=1;k<=y-i;k++)
		{
			cout<<m++<<"  ";
			
		}
	  cout<<endl;
	  
	}
	

return 0;

}


