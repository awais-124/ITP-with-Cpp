#include<iostream>
using namespace std;
int main(){
	int my[10];
	
	for(int i=0;i<10;i++)
{
	cin>>my[i];
}
for(int i=0;i<10/2;i++)
{
	swap(my[i],my[9-i]);
}
for(int i=0;i<10;i++)
{
	cout<<my[i]<<"  ";
}
	return 0;
}-
