#include <iostream>

using namespace std;
int point(int *m)
{
	int sum=0;
	for(int i=0;i<3;i++)
	{
		sum+=*(m+i);
	}
	return sum;
}
int main()
{
    int a[3];
    for(int i=0;i<3;i++)
     cin>>*(a+i);
    cout<<"SUM of given numbers is "<<point(a);
	return 0;
}
