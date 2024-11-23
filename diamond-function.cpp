#include<iostream>
using namespace std;
// function definition

void diamond(int &n)
{
for (int i = 1; i <= n; i++)
{
	for (int k = n - i; k > 0; k--) 
		{
			cout << " ";
		}
	for (int j = 1; j <= i; j++) 
		{
			cout << "* ";
		}
	cout << endl;
}
for (int i = n-1; i >= 1; i--) 
{
	for (int k = n - i; k > 0; k--) 
		{
			cout << " ";
		}
	for (int j = i; j >= 1; j--) 
		{
			cout << "* ";
		}
	cout << endl;
}
}


// function calling

int main()
{

int rows;
cout << " Enter no. of rows : ";
cin >> rows;
diamond(rows);

return 0;
}
