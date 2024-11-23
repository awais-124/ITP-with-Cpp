#include <iostream> 
const int size=5;     // change array size here
using namespace std;
int Find_Max_Divisors(int *array)
{
	int mostDivisors=0, number_with_most_divisors=0;
    number_with_most_divisors = *array; 
	/*suppose that first element of array has most divisors 
	so that later we can find divisors of remaining elements and compare with it.*/
    
    for(int i=1; i<=*array; i++)
	{
		if(*array%i == 0)
        {
           mostDivisors++;	
		}
	}
    
    for(int j=1; j<size; j++)
	{
		int currentDivisors=0;
		
        for(int k=1; k<=*(array+j); k++)
        {
        	if(*(array+j)%k == 0)
            {
            	currentDivisors++;    
			}
		}
		
        if(currentDivisors > mostDivisors) //comparing divisors of current element(array[j]) with most divisors
		{
            mostDivisors = currentDivisors;        
            number_with_most_divisors = *(array+j);
        }
    }
    return number_with_most_divisors;
}
int main()
{
    int mostDivisors=0, number_with_most_divisors=0;
    int array[size] ;
    int use_me;
    cout<<"Enter array elements..."<<endl;
	for(int i=0; i<size; i++)
    {
    	cout<<" Element no "<<i+1<<" : ";
    	cin >> array[i];
	}
    use_me=Find_Max_Divisors(array);
    cout <<"\n Number with most divisors is  "<< use_me;
    return 0;
}
