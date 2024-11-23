#include <iostream>
using namespace std;

void zerosmaller(int& x, int& y)
{
    if(x < y)
    {
      x = 0;
	}
        
    else if(x>y)
	{
    	y = 0; 
	}
	else
	{
		cout<<"Both are equal.";	
	}
           
}
int main()
{
    
    int a , b ;
	cout<<"Enter two numbers..\n";
	cin>>a>>b;
    zerosmaller(a, b);
    cout << endl << "a = " << a << "\nb = " << b << endl;
    return 0;
}


