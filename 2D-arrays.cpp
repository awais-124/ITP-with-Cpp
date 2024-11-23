#include <iostream>
using namespace std;
int main()
{
	int a[3][4],marks,sum=0;
	
	for(int i=0;i<3;i++)
	{
	 	if(i==0)
		 	{
		 		cout<<"Enter marks of First Student...\n";
		 		for(int j=0;j<4;j++)
				 {
		 			cin>>a[i][j];
				 }
			 }
		else if(i==1)
		 	{
		 		cout<<"\nEnter marks of Second Student...\n";
		 		for(int j=0;j<4;j++)
				 {
		 			cin>>a[i][j];
				 }
			 }
		else 
		 	{
		 		cout<<"\nEnter marks of Third Student...\n";
		 		for(int j=0;j<4;j++)
				 {
		 			cin>>a[i][j];
				 }
			 }
	}
	for(int i=0;i<3;i++)
	{
	 	if(i==0)
		 	{
		 		cout<<"\nTotal marks of First Student are: ";
		 		for(int j=0;j<4;j++)
				 {
		 			sum+=a[i][j];
				 }
				 cout<<sum;
				 sum=0;
			 }
			 
		else if(i==1)
		 	{
                cout<<"\nTotal marks of Second Student are: ";		 	
				for(int j=0;j<4;j++)
				 {
		 			sum+=a[i][j];
				 }
				 cout<<sum;
				 sum=0;
			 }
		else 
		 	{
                cout<<"\nTotal marks of Third Student are: ";		 		
				for(int j=0;j<4;j++)
				 {
		 			sum+=a[i][j];
				 }
				 cout<<sum;
			 }
	}

	
	

	return 0;
}
