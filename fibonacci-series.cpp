#include<iostream>
using namespace std;
const int s=5000;
int main()
{
	int array[s];
	int size;
	cout<<"Enter the size of series: ";
	cin>>size;
	cout<<"Enter first two elements to start with: "<<endl;
	cin>>array[0];
	cin>>array[1];
	for(int i=2;i<size;i++)
	{
		array[i]=array[i-1]+array[i-2];
	}
	cout<<"Fibonacci series is :"<<endl;
	for(int i=0;i<size;i++)
	{
		
		cout<<array[i]<<"\t";
	}
}
