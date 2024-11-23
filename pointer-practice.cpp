#include<iostream>
using namespace std;
int main()
{
	int NUM[10]={2,4,6,8,9,7,5,3,1,0};
	int *ptr;
	ptr=NUM;
//	cout<<ptr<<endl;
//	ptr++;
//	cout<<*ptr<<endl;
	
	for(int i=0;i<10;i++)
	{
		
		cin>>*ptr;
		ptr++;
		
	}
	
}
