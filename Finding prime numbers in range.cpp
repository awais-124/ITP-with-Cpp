#include<iostream>
using namespace std;
int main()
{
	int i,j,lr,ur,check=0;
	/*cout<<"Prime Numbers Between 1 to 100 are:\n";*/
	cout<<"Enter lower range: ";
	cin>>lr;
	cout<<"Enter upper range: ";
	cin>>ur;
	
	for(i=lr; i<=ur; i++)
	{
	    for(j=2; j<i; j++)
	    {
	       if(i%j==0)
	       {
	           check++;
	           break;
	       }
	    }
	    if(check==0 && i!=1)
	        cout<<i<<endl;
	    check = 0;
	}
	cout<<endl;
	return 0;
}
