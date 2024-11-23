#include<iostream>
using namespace std;
int main()
{
  int num,ones,tens,hundreds,thousands;
  cout<<"Enter a 4-Digit Number: ";
  cin>>num;
  thousands=num/1000%10;
  hundreds=num/100%10;
  tens=num/10%10;
  ones=num%10;
 
  cout<<thousands<<endl;
  cout<<hundreds<<endl;
  cout<<tens<<endl;
  cout<<ones<<endl;
return 0;
}
