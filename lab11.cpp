#include <iostream>

using namespace std;
int point(int *m)
{
	int s=0;
	for(int i=0;i<3;i++)
	{
		s=*(m+i)+s;
	}
	return s;
}
int main()
{
    int a[3]={1,2,3};
    
    cout<<point(a);
	return 0;
}
