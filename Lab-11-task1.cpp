#include <iostream>

using namespace std;
void readarray(int p[30])
{
	int a;
	
	for(int i=0;i<30;i++)
	{
		
		cout<<"Element No "<<i+1<<": ";
		cin>>p[i];
    }	
}
void findevensum(int p[30])
{
	int sum=0;
	for(int i=0;i<30;i++)
	{
		if(p[i]%2==0)
		{
			sum+=p[i];
		}	
	}
	cout<<"\nSum of Even Numbers is: "<<sum;
}
int findthirdsmallest(int p[30])

{
	int thirdsmallest,temp,array[30];
		for(int i=0;i<30;i++)
	{
	  array[i]=p[i];
	}
	for(int i=0;i<30;i++)
	{
	  for(int j=i+1;j<30;j++)
		{
			if(array[i]>array[j])
			{
				temp=array[i];
				array[i]=p[j];
				array[j]=temp;
			}
		}
	}
		for(int i=0;i<30;i++)
	{
		if(i==2)
		{
			thirdsmallest=array[i];
		}
	}
	return thirdsmallest;
}
void findgreater(int p[30])
{
	int x;
	cout<<"\n\nEnter a Value to compare with: ";
	cin>>x;
	cout<<"Numbers Greater than "<<x<<" are: \n";
	for(int i=0;i<30;i++)
	{
		if(p[i]>x)
		{
			cout<<p[i]<<endl;
		}
	}
	
}
void reversevalues(int p[30])
{
	int reverse[30],temp,i,j;
	  for (  i = 0,  j = 30 - 1; i < 30/2; i++, j--)  
    {     
        temp = p[i];  
        p[i] = p[j];  
        p[j] = temp;  
    } 
    cout<<"Reversed Values are: ";
	for(int i=0;i<30;i++)
	{
		cout<<p[i]<<"\t";
	}
}
void displayAboveAverage(int p[30])
{
	int sum=0;
	float average;
	for(int i=0;i<30;i++)
	{
		sum+=p[i];
	}
	average=sum/30;
//	cout<<"\nAverage: "<<average;
	cout<<"\n\nNumbers above average are: ";
	for(int i=0;i<30;i++)
	{
		if(p[i]>average)
		{
			cout<<p[i]<<endl;
		}
	}
}
int main()
{
    int p[30],use_me;
    
	cout<<"Enter Value of.."<<endl;
	readarray(p);//function 1
	
	findevensum(p);//function 2
	
	use_me=findthirdsmallest(p);// function 3
	
	cout<<"\n\nThird Smallest Value is "<<use_me;
	findgreater(p);//function 4
	
	reversevalues(p); //function 5
	
	displayAboveAverage(p); //function 6
	
	return 0;
}
