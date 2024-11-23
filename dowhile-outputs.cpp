#include<iostream>
using namespace std;
void F1();
void F2();

int main()
{
	F1();
}
void F1()
{
	F2();
}
void F2()
{
	cout<<"WELCOME";
}
/*char c='A';
	
	do{
		cout<<c<<" ";
		c+=2;
	}while(c<='T');
	cout<<endl;*/
