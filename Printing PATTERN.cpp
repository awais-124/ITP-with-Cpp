#include<iostream>
using namespace std;

int main(){
int list=10; 
 for (int i = 0; i < 5; i++)
{
for (int j = 0; j < 5; j++)
{
list = 2 * i + 5;
if (i % 2 == 0)
list = list - 3;
}
}
for (int i = 0; i < 5; i++)
{
cout<<list<<endl;
}
return 0;
}

