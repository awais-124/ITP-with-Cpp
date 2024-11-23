#include<string>
#include<iostream>
using namespace std;


int main()
{		int x, *ptr;
*ptr = x;
*ptr=10;
cout<<ptr<<endl;
cout<<*ptr<<endl;
cout<<x<<endl;
cout<<&x<<endl;
}



//	char* str1="Self Conquest is the greatest Victory";
//	char str2[80];
//	char* src=str1;
//	char* dest=str2;
//	while(*src)
//	{
//		*dest++ = *src++;
//	}
//	*dest='\0';
//	cout<<str2<<endl;
//
//	

/*
char* str1 = “Self-conquest is the greatest victory.”;
char str2[80]; //empty string
char* src = str1;
char* dest = str2;

while( *src ) //until null character,
		*dest++ = *src++; //copy chars from src to dest
	
*dest = ‘\0’; //terminate dest

cout << str2 << endl; //display str2
*/
