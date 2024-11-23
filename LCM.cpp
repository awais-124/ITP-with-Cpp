#include<iostream>
using namespace std;
//int LCM(int,int); 
int main()
{
   	int num1, num2, multiple;
	    cout << "Enter value of num1 :";
		cin >> num1;
		cout << "Enter value of num2 :";
		cin >> num2;
		if (num1 > num2) {
			multiple = num1;
        }
		else {
			multiple = num2;
		}
		while (1) {
			if (multiple % num1 == 0 && multiple % num2 == 0) 
			{
				break;
			}
			else 
			{
				multiple++;
			}
        }
		cout << " LCM of " <<" ( "<< num1 << "," << num2<<" )" << "=" << multiple;
}

/* int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"LCM of "<<a<<" and "<<b<<" is "<<LCM(a,b);
}
int LCM(int a,int b)
{
    int i,j;
 
    i=a;
    j=b;
    
    while(i!=j)
    {
		if(i < j)
		 i+=a;
		
		else
		 j+=b;	
    }
 
   return i;//or return j bcz (i==j)*/
