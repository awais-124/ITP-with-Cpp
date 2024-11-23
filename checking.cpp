#include <iostream>
using namespace std;
void readarray(int p[4])
{
	
	for(int i=0;i<4;i++)
	{
		cout<<"INDEX "<<i<<": ";
		cin>>p[i];	
	}
	
}
void reversevalues(int p[4])
{
	int reverse[4];
	
	
	reverse[0]=p[3];
	reverse[1]=p[2];
	reverse[2]=p[1];
	reverse[3]=p[0];
    cout<<"Reversed Values are: ";
	for(int i=0;i<4;i++)
	{
		cout<<reverse[i]<<endl;
	}
}
int main()

{
	int p[4];
	cout<<"Enter Value for the ..."<<endl;
    readarray(p);
	
	reversevalues(p);

	return 0;
}
