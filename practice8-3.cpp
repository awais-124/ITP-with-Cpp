#include <iostream>
using namespace std;
int main()
{
	int a[5],temp,choice,sum=0,difference=0;
	
	cout<<"Enter the elements of array... "<<endl;
	for(int i=0;i<5;i++)
	{
	 cin>>a[i];
	}
	cout<<"|Enter 1 for Ascending  Order|\n";
	cout<<"|Enter 2 for Descending Order|\n";
	cout<<"Enter your choice(1 or 2): ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			 for(int i=0;i<5;i++)
				{
		    	for(int j=i+1;j<5;j++)
					{
						if(a[i]>a[j])
						{
							temp=a[i];
							a[i]=a[j];
							a[j]=temp;
						}
					}
	            }
	        cout<<"\nArray in Ascending order :  "<<endl;
	        for(int i=0;i<5;i++)
				{
				 cout<<a[i]<<"\n";
				}
			
	        for(int i=0;i<5;i++)
				{
				sum+=a[i];
				}	
			cout<<"Sum of array is: "<<sum;
				
				break;
		case 2:
			 for(int i=0;i<5;i++)
				{
		    	for(int j=i+1;j<5;j++)
					{
						if(a[i]<a[j])
						{
							temp=a[i];
							a[i]=a[j];
							a[j]=temp;
						}
					}
	            }
	            cout<<"\nArray in Descending order :  "<<endl;
	        for(int i=0;i<5;i++)
				{
				 cout<<a[i]<<"\n";
				}
			for(int i=0;i<5;i++)
				{
				difference=a[i]-difference;
				}	
			cout<<"Difference of array is: "<<difference;	
				break;	
			default:
			cout<<"\aEnter Valid Choice..";		
	
	}
  return 0;
}
