#include<string.h>
#include<iostream>
using namespace std;
int main()
{
    char c[500];
    int i,runtime=1;
    cin>>c;
   while(runtime=1)
    {
    int l=strlen(c); //assigning value of length of string to int variable l
    for(i=0;i<l;i++)
    {
        cout<<"%c",c[i]-7;
    }
    cout<<"\n";
    runtime=0;
    }
    return 0;
}
