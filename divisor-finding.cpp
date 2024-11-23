#include <iostream>
#include<stdlib.h> 
#include<time.h>
using namespace std;
int FIND_MAX_DIVISORS(int v[30])
{
	int mostDivisors=0, number_with_most_divisors=0;
    number_with_most_divisors = v[0];
    
    for(int d=1; d<=v[0]; d++)
	{
		if(v[0]%d == 0)
        {
           mostDivisors++;	
		}
	}
    
    for(int i=1; i<30; i++)
	{
		int currentDivisors=0;
		
        for(int d=1; d<=v[i]; d++)
        {
        	if(v[i]%d == 0)
            {
            	currentDivisors++;
			}
		}
		
        if(currentDivisors > mostDivisors)
		{
            mostDivisors = currentDivisors;
            number_with_most_divisors = v[i];
        }
    }
    return number_with_most_divisors;
}
int main()
{
    int mostDivisors=0, number_with_most_divisors=0;
    int v[30],a ;
    srand(time(NULL));
	for(int i=0; i<30; i++)
    {
//    	cout<<"Enter element no "<<i+1<<" : ";
//    	cin >> v[i];
        
        int a=rand()%500+1; 
        v[i]=a;
        cout<<"Element "<<i+1<<" = "<<v[i]<<endl;
	}
    a=FIND_MAX_DIVISORS(v);
    cout <<"\nNumber with most divisors : "<< FIND_MAX_DIVISORS(v);
    
    
    return 0;
}
