#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    int c = a;
    a = b;
    b = c;
}
int main()
{
    int a , b ;
    cout<<"Enter two numbers..\n";
    cin>>a>>b;
    cout<<"Before swapping\t a = "<<a<<" b = "<<b;
    swap(a, b);
    cout<<"\nAfter swapping\t a = "<<a<<" b = "<<b;   
	return 0;
}
