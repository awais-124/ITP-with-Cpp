#include<iostream>
using namespace std;

int main()

{
  int x,arr[10];
  cout<<"Enter elememts of array ..."<<endl;
  for(int i=0;i<10;i++)
  {
  	cin>>(*(arr+i));
  }
  for(int i=0;i<10;i++)
  {
  	if(*(arr+i)%2!=0)
  	{
  		if(*(arr+i)>0)
  		{
  			*(arr+i)=*(arr+i)+1;
		}
		else
  		  {
  			*(arr+i)=*(arr+i)-1;
		  }
	  }
  }
  
 for(int i=0;i<10;i++)
  {
  	cout<<*(arr+i)<<" ";
  }
}


