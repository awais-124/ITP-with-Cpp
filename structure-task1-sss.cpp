#include<iostream>
#include<string>
const int size=5;
using namespace std;
struct book 
{
	int id;
	float price;
	string title,author;
	
};
int main () 
{
	
	book record[size];
	
	for (int i = 0; i < size; i++) 
	{
		cout<<"Enter Data of Book "<<i+1<<"..."<<endl;
//		cout << " Book ID : ";
//		cin >> record[i].id;
		cout << " Book title : ";
		cin >> record[i].title;
//		cout << " Book Price : ";
//		cin >> record[i]. price;
		cout << " Author Name : ";
		cin >> record[i].author;
	}
	int m=1;
	cout<<"Following books have same authors: "<<endl;
	for (int i = 0; i < size; i++)
	{
		for(int j=i+1; j<size; j++) 
		{
			if (record[i].author == record[j].author) 
			{
				cout <<m++<<". "<<  record[i].title << "  and  " << record[j].title << endl;
				
			}
		}
	}
}
