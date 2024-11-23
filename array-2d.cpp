#include<iostream>
using namespace std;

int main()
{
	int matrix[5][5];
	int k=1,count=0;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cout<<"Value: "<<k<<" ";
			cin>>matrix[i][j];
			k++;
		}
	}
	cout<<endl<<endl;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cout<<matrix[i][j]<<"     ";
		}
		cout<<endl;
	}
	int m=0;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(i==m)
			{
				count=0;
				for(int m=2;m<matrix[i][j];m++)
				{
					if(matrix[i][j]%m==0)
					{
						break;
					}
					else
					{
						count++;
					}
				}
				if(count<2)
				{
					cout<<"Row Number "<<i<<" has less than two prime numbers."<<endl;
					break;
				}
				else
				{
					cout<<"Row Number "<<i<<" does not have less than two prime numbers."<<endl;
					break;
				}
				
			}
			m++;
			}
		}
	}
	
	

