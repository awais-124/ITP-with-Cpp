#include<iostream>
using namespace std;
int main()
{
	int a[3][3], b[3][3],r[3][3];
	int n=1;
	for(int i=0; i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"Matrix 1  Value "<<n<<"=";
			cin>>a[i][j];
			cout<<"Matrix 2  Value "<<n<<"=";
			cin>>b[i][j];
			n++;
		}
	}
	int sum=0;
	for(int i=0; i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
		  sum=sum+a[i][j]*b[j][i];
		  for(int k=0;k<3;k++)
		  {
		  	r[j][k]=sum;
		    sum=0;
		  }
		  
		  
		}
		
		
	}
	
	cout<<"Resultant Matrix is: "<<endl;
	
	for(int i=0; i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
		  cout<<r[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
