#include<iostream>
using namespace std;
struct Book
{
	string author;
	int pages;
	int price;
	
};
int main()
{
	system("cls");
	Book rec ;
	Book *ptr;
	ptr=&rec;
	cout<<"Enter author name: ";
	getline(cin,ptr->author);
	cout<<"Enter Pages: ";
	cin>>ptr->pages;
	cout<<"Enter Price: ";
	cin>>ptr->price;
	cout<<"Author: "<<ptr->author<<endl;
	cout<<"Pages: "<<ptr->pages<<endl;
	cout<<"Price: "<<ptr->price<<endl;
	return 0;
}
