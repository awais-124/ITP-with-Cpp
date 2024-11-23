#include<iostream>
using namespace std;
int isprime(int n)
{
	int count=0;
	for (int i = 2; i < n; i++) 
    {
        if (n % i == 0) 
        {
            count++;
            break;
        }
    }
    
    if (count ==0) 
    {
        return 1    ;             //if prime, value is 1
    }
    else
	{
        return 0;                    //if prime, value is 0
    }
}
int main()
{
	const int s=3;
	int a[s][s];
	int v=1;
	cout<<"Enter Value of array...\n";
	for(int i=0;i<s;i++)
	{
		for(int j=0;j<s;j++)
		{
			cout<<"Value "<<v<<": ";
			cin>>a[i][j];
			v++;
		}
	}
	for(int i=0;i<s;i++)
	{
		for(int j=0;j<s;j++)
		{
			cout<<a[i][j]<<"  ";
		}
		cout<<endl;
	}
	int count =0;
	for(int i=0;i<s;i++)
	{
		count=0;
		for(int j=0;j<s;j++)
		{
			if(isprime(a[i][j])==1)	
			{
				count++;
			}
		}
		if(count<=2)
		{
			cout<<"Row having index no: "<<i<<" has "<<count<<" prime numbers."<<endl;
		}
		
		
	}
}
