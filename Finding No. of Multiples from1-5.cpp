#include <iostream>
using namespace std;
int main()
{
	int i,j,m1,m2,m3,m4,m5,count;
	for(i=1;i<=5;i++)
	{
		for(j=2;j<=4;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		   
		}
	}
	return 0;
}
