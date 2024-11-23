#include<iostream>
using namespace std;
const int size=3;
struct bookdetails
{
	int bookid;
	string booktitle;
	string author;
	int price;
};
int main()
{
	bookdetails a[size];
	for(int i=0;i<size;i++)
	{
		cout<<"Details of Book No."<<i+1<<endl;
//		cout<<"Enter Book ID: ";
//		cin>>a[i].bookid;
		cout<<"Enter Book Title: ";
		cin>>a[i].booktitle;
		cout<<"Enter the name of Author: ";
		cin>>a[i].author;
//		cout<<"Enter Price of Book: ";
//		cin>>a[i].price;
        cout<<endl;
	}
	cout<<"Following Books have same authors: "<<endl;
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(a[i].author==a[j].author)
			{
				cout<<a[i].booktitle<<endl<<endl;
				break;	
			}
			
	    }
	}
	
}
