#include<iostream>
using namespace std;
int main()
{
	int i,value,check=0;
	cout<<"Enter the Value: ";
	cin>>value;
	if(value!=-1)
	{
	 do{
	
	   for(i=2; i<value; i++)
	     {
	      if(value%i==0)
	       {
	       check++;
	       break;
	       }
	     }
	
	   if(check==0 && value!=1 && value!=0)
	     {
		  cout<<value<<" is a Prime Value."<<endl;
	     }
	    
	     else
	     {
		   cout<<value<<" is not a Prime Value."<<endl;
	     }
	    cout<<"Enter the Value: ";
	    cin>>value;
      }while(value!=-1);
    }
        
    return 0; 
}

