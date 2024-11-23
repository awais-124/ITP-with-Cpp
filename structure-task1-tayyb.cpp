#include<iostream>
#include<string.h>
using namespace std;
const int size=5;
struct std1 {
	int id, price;
	string title, author;
}std1[size];
int main()
{
	for (int i = 0; i < size; i++) {
		cout << "Data Entering For Book " << i + 1 <<  endl;
		cout << " Enter Book Title: ";
		getline(cin,std1[i].title) ;
		cout << " Enter Book Author Name: ";
		getline(cin,std1[i].author) ;
//		cout << "Enter Book ID: ";
//		cin >> std1[i].id;
//		cout << "Enter Book Price: ";
//		cin >> std1[i].price;
		cout << endl;
	}
	cout<<" Books having same Authors are: "<<endl;
	int m=1;
	string s;
	for (int i = 0; i < size; i++) 
	{
		for (int j = 0; j < size; j++)
		 {
			if (std1[i].author == std1[j].author && i != j) 
			{
				s=std1[i].title;
				cout <<" "<<m<<"."<< std1[i].title <<endl;
				m++;
				break;
			}
		}
	}
	return 0;
}
