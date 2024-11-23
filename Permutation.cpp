#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1,str2;
	int l1,l2;
	cout<<"Enter String 1:";
	getline(cin,str1);
	cout<<"Enter String 2:";
	getline(cin,str2);
	l1=str1.length();
	l2=str2.length();
	
	for(int i=0;i<l1;i++)
	{
		for(int j=i+1;j<l1;j++)
		{
			if(str1[i]<str1[j])
			{
				swap(str1[i],str1[j]);
			}
			
		}
	}
	
	
	for(int i=0;i<l2;i++)
	{
		for(int j=i+1;j<l2;j++)
		{
			if(str2[i]<str2[j])
			{
				swap(str2[i],str2[j]);
			}
			
		}
	}

	if(str1==str2)
	{
		cout<<"String are permutation.\n";
	}
	else
	{
		cout<<"Strings are not permutation.\n";
	}
	
	return  0;
	
}

