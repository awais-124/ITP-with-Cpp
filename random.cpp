#include<iostream>
using namespace std;
int main()
{
	int row,col,m=1;
//	cin>>row;
//	col=row*2-1;
	for(int i=0;i<6;i++)
	{
		m=1;
		int n=6-i;
		if(i==0)
		 cout<<"1 2 3 4 5 6 7 6 5 4 3 2 1\n";
		for(int k=0;k<6-i;k++)
		{
			cout<<m<<" ";
			m++;
			
		}
		for(int j=0;j<2*i+1;j++)
		{
			cout<<"  "; 
		}
		for(int l=0;l<6-i;l++)
		{
			cout<<n<<" ";
			n--;
			
		}
		cout<<endl;
	}
	
	
}
