#include <iostream>
using namespace std;

int main()
{ int rev=0,num,digit;
	cin>>num;
	int n=num;
	do{
		
	
   digit=num%10;
   cout<<"digit-value"<<digit<<endl;
   
   num=num/10;
   cout<<"num-value"<<num<<endl;
   
}
       while(num!=0);
    if(n==rev)
    {
    	cout<<"a";
	}
	else
	{
		cout<<"b";
	}
    return 0;
}
