#include <iostream>
using namespace std;

int main() {
  int n1, n2, hcf;
  cout << "Enter two numbers: ";
  cin >> n1 >> n2;

  // swapping variables n1 and n2 if n2 is greater than n1.
  if ( n2 > n1) {   
    int temp = n2;
    n2 = n1;
    n1 = temp;
  }
    
  for (int i = 1; i <=  n2; ++i) {
    if (n1 % i == 0 && n2 % i ==0) {
      hcf = i;
    }
  }

  cout << "HCF = " << hcf;

  return 0;
}
	
	/*************/
//	int a=3,b=5;
//	swap(&a,&b);
//	cout<<a<<" "<<b<<endl;
	/******************/
//	int a[]={1,2,3,4,5,6,7,8,9};
//	int *b;
//	int *c=&(a[1]);
//	b=a;
//	b[2]=0;
//	cout<<b[1]<<c[0]<<c[1]<<a[2]<<endl;
/*********************************************/
    /*****************/
//int a[3]={1,3,5},b=23,c=48;
//int *p1=a;
//int *p2=&b;
//int *p3=0;
//p1++;
//(*p1)++;
//
//p3=p2;
//*p3=p1[1];
//for(int i=0;i<3;i++)
//{
//	cout<<a[i];
//}
//cout<<endl;
//cout<<b<<endl;
/*******************************************/
              /**************/
        
      















