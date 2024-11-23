#include <iostream>
using namespace std;
int main()
{
	int a[20],b[20]={0};
	cout<<"Enter the elements of array1...\n";
	for(int i=0;i<20;i++)
	{
		cin>>a[i];
	}
	 for (int i = 0; i < 20; i++) 
	 {
       b[i]=(a[i] - 2) * (a[i] - 2);
      }
     cout<<"Elements of Array2 are...\n";
     for(int i=0;i < 20; i++) 
	 {
        cout<<b[i]<<" ";
     }
	 cout<<"\nOdd Values are: ";
     for (int i = 0; i < 20; i++) 
	 {
	 	if(b[i]%2!=0)
	 	{
	 		cout<<b[i]<<" ";
		}
	 	
	 }
  return 0;
}
