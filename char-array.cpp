#include <iostream>
using namespace std;
int main()
{
char a[5];
char del;
for(int i=0;i<5;i++)
{
	cout<<"Character "<<i+1<<": ";
	cin>>a[i];
}
cout<<"Enter character to delete: ";
cin>>del;
for(int i=0;i<5;i++)
{
	if(a[i]==del)
	{
		continue;
	}
	else 
	cout<<a[i];
}

	return 0;
}
