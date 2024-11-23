#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
    char c[500];
    int i;
    while(scanf("%s",c)!=EOF)
    {
    int l=strlen(c);
    for(i=0;i<l;i++)
    {
        printf("%c",c[i]-7);
    }
    printf("\n");
     }
    return 0;
}
