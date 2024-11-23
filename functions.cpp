#include<iostream>
using namespace std;
void change();
int main()
{
	int size;
	
	change();
	
	
}
void change()
{
	int size;
	cout<<"Enter size of Array: ";
	cin>>size;
	int array[size];
	cout<<"Enter elements of array..."<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>array[i];
	}
	
	for(int i=0;i<size;i++)
	{
		if(array[i]%5==0)
		{
			array[i]=array[i]/5;
		}
		else
		{
			array[i]*=2;
		}
	}
	cout<<"Updated array is ..."<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<array[i]<<" ";
	}
}
