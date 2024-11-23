#include<iostream>
using namespace std;

int main()
{
int num;
cin>>num;
int rev=0;
int temp=num;
int i=0,array[10];
while(num>0)
{
	array[i]=num%10;
	num=num/10;
	i++;
}
int sum=0;
for(int j=0;j<i;j++)
{
	sum=sum+(array[j]*array[j]*array[j]);
	
}
if(sum==temp)
{
	cout<<"Number is armstrong"<<endl;
}
else
{
	cout<<"Number is not armstrong";
}
return 0;	
}
