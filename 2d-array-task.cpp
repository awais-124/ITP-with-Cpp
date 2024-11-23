#include<iostream>
using namespace std;
int main()
{
	int a[5][5],v=1;
	
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		
		{
			cout<<"Value "<<v<<": ";
			cin>>a[i][j];
			v++;
		}
	}
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	int s=a[0][0];
	int row=0,col=0;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(a[i][j]<s)
			{
				s=a[i][j];
				row=i;
				col=j;
			}
		}
	}
	int count=0;
for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(a[i][j]==s)
			{
				count++;
			}
		}
	}
	cout<<"Smallest Value is "<<s<<endl;
	cout<<"Row Number is "<<row<<endl;
	cout<<"Column Number is "<<col<<endl;
	cout<<"Count of smallest Value is "<<count;
	return 0;
	
	
}

