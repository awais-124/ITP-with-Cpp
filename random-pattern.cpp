#include<iostream>
using namespace std;
int main()
{
	int row,col;
	cin>>row;
	col=row*2-1;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		
		{
			if(j==row-1-i || j==row-1+i)
			{
				cout<<"*";
			}
			else 
			{
				cout<<"#";
			}
		}
		cout<<endl;
	}
	
	
}
