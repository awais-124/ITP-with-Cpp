#include<iostream>
using namespace std;
int prime(int *n)
{
	int check;
	for(int i=2; i<*n; i++)
	     {
	      if(*n%i==0)
	       {
	       check++;
	       break;
	       }
	     }
	   if(check==0 && *n!=1 && *n!=0)
	     {
		  return 1;
	     }
	    
	     else
	     {
		   return 0;
	     }
	    
}
int main()
{
	int use_me,num,check=0;
	cout<<"Enter a Number: ";
	cin>>num;
	use_me=prime(&num);
	if(use_me==1)
	{
		cout<<num<<" is a Prime Number."<<endl;
	}
	else
	 cout<<num<<" is not a Prime Number."<<endl;     
    return 0; 
}

