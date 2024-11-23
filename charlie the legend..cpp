#include<iostream>
using namespace std;
int main()
{
	int array[5];
		for(int i=0;i<5;i++)
	{
		cin>>array[i];
}
for(int i=0;i<array[i];i++)
{
if(array[i]%3==0)
{
	array[i]=array[i]+1;
	
}
	
}
	for(int i=0;i<5;i++)
	{
			for(int j=0;j<5;j++)
			{
				if(array[i]<array[j])
				{
					swap(array[i],array[j]);
				}
			}
	}
	for(int i=0;i<5;i++)
	{
		cout<<array[i]<<"  ";
}


}
