#include<iostream>
using namespace std;
int main()
{
	int lines;
	cout<<"Enter Number of Lines: ";
	cin>>lines;
	for(int i=1;i<=lines;i++)
	{
		for(int j=1;j<=(lines-i);j++)
	     {
		  cout<<" ";
	     }
	    for(int k=1;k<=(2 * i - 1);k++)
	     {
		   cout<<"*";
	     }
	    cout<<endl;
	}

	return 0;
}
