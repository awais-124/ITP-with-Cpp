#include<iostream>

using namespace std;

void hcf(int,int);
 
int main()
{
    int p,q;
    cout<<"Enter two numbers: ";
    cin>>p>>q;
    int a;
	hcf(p,q); 
	
}

 void hcf(int p,int q)
 {
 	int h;
 	int hcf=1;
 	if(p>q)
 	{
 		h=q;
	 }
	 else
	 h=p;
	 int a=p;
	 int b=q;
 	for(int i=1;i<=h;i++)
 	{
 			if(a%i==0 && b%i==0)
	 		{
	 			hcf=i;	
			}
	}
	cout<<"HCF of "<<p<<" and "<<q<<" is "<<hcf<<endl;
 }
 

