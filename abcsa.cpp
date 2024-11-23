#include <iostream>
using namespace std;
int main()
{
	int currentDivisors=0;
//   for(int d=1; d<=v[0]; d++)
//	{
//        if(v[0]%d == 0)
//        {
//           mostDivisors++;	
//		}
//    }
//    for(int i=1; i<5; i++)
//	{
        for(int d=1; d<=9; d++)
        {
        	if(9%d == 0)
            {
            	currentDivisors++;
			}
		}
//   }
cout<<"==>>> "<<currentDivisors;
    return 0;
}
