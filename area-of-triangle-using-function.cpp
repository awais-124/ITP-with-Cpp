#include<iostream>
#include<cmath>
using namespace std;
int area(int a,int b,int c)
{
	    int s=(a+b+c)/2;
	    int use_me;
		use_me=s*(s-a)*(s-b)*(s-c);
	    int area;
	    area=sqrt(use_me); 
	    return area;	    
}
int main()
{
	int a,b,c;
	cout<<"Enter sides of triangle: "<<endl;
	cout<<"Side A: ";
	cin>>a;
	cout<<"Side B: ";
	cin>>b;
	cout<<"Side C: ";
	cin>>c;
	
	cout<<"Area of Triangle: "<<area(a,b,c);	
	
}

