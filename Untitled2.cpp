#include <iostream>
using namespace std;
int main()
{
	char a[5],dlt;
	
	cout<<"Enter 5 alphabets... "<<endl;
	for(int i=0;i<5;i++)
	{
	  cin>>a[i];
	}
	cout<<"Alphabet to be Deleted: ";
	cin>>dlt;
	
	for(int i=0;i<5;i++)
	{
		if(dlt==a[i]){
			break;
		}
		else
		{
		 cout<<a[i];

		}
	}
return 0;
}
