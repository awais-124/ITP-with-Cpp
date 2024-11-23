#include<iostream>
using namespace std;
int size=10;
void readarray(int array[])
{
	for(int i=0;i<size;i++)
	{
	 cin>>array[i];
	}
}
void findevensum(int array[])
{
int sum=0;
	for(int i=0;i<size;i++)
	{
		if(array[i]%2==0)
		{
		 sum=sum+array[i];
		
		
		}
	}
cout<<"Sum of the even integers in the array: "<<sum<<endl;
}
void searchthirdsmallest(int array[])
{
for(int i=0;i<size;i++)
{
	for(int j=0;j<size;j++)
	{
		if(array[i]<array[j])
			{
			
				int temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
}
cout<<"Third smallest element in the given array is = "<<array[2]<<endl;
}
void findgreater(int array[])
{
	int m,i;
	cout<<"Enter the no you want to compare the whole array elements with: ";
	cin>>m;
	cout<<"The elements that are greater than given no are: "<<endl;
	for(int i=0;i<size;i++)
	{
		if(array[i]>m)
		{
			cout<<array[i]<<endl;
		}
	}
}
void reversevalue(int array[])
{
int temp;
	for(int i=0;i<size/2;i++)
	{
		temp=array[i];
		array[i]=array[size-i-1];
		array[size-i-1]=temp;
	}
    cout<<"Reverse of the given given array is: "<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<array[i]<<endl;
	}
}
void displayaboveaverage(int array[])
{
int sum=0;
	for(int i=0;i<size;i++)
	{
		sum=sum+array[i];
	}
int average=sum/size;
cout<<"Average of the array elements is :"<<average<<endl;
cout<<"Elements of the array greater than average are:  "<<endl;
	for(int i=0;i<size;i++)
	{
		if(array[i]>average)
		{
			cout<<array[i]<<endl;
		}
	}
}
int main()
{
int array[size];
cout<<"Enter the elements of the array: "<<endl;
	readarray(array);
	findevensum(array);
	searchthirdsmallest(array);
	findgreater(array);
	reversevalue(array);
	displayaboveaverage( array);
return 0;
}


