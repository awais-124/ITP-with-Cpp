#include<iostream>
using namespace std;
int hcf(int,int); 
int main()
{
    int p,q,a;
    cout<<"Enter two numbers: ";
    cin>>p>>q;
    a=hcf(p,q);
    cout<<"HCF = "<<a<<endl;
}
int hcf(int p,int q)
{
	int a;
	int hcf=1;
	if(p!=q)
	{
		if(p<q)
		 swap(p,q);
		do
		{
			if(p%q==0)
			{
				hcf=q;
				break;
			}
			else
			{
				a=q;
				q=p%q;
				p=a;
				hcf=q;
			}
		}while(p%q!=0);	
	}
	else
	{
		hcf=p;
	}
	return hcf;
}
 

