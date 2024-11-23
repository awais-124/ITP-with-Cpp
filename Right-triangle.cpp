#include <iostream>
using namespace std;
int main()
{
    int lines;
    cout<<"Enter the Number of Lines: ";
    cin>>lines;
    for(int i=1;i<=lines;++i)
    {
    	for(int j=1;j<=i;++j)
    	{
    		cout<<"*";
        }
    	cout<<endl;
	}
//	for(i=1;i<=lines;i++)
//	{
//		for(j=1;j<=lines-i;j++)
//		{
//			cout<<" ";
//		}
//		for(k=1;k<=i;k++)
//		{
//			cout<<"*";
//		}
//		cout<<endl;
//	}
	
	return 0;
	
}
