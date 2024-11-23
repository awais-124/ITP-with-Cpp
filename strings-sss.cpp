#include <iostream>
#include<string>
using namespace std;
int main() 
{
string str;
cout<<" enter a string"<<endl;
getline(cin, str);

int s_length= str.length();
cout<<" Length of string : "<<s_length<<endl;
string a = " Hello World";

string concate = str+a;
cout<<" Concatenation : "<< concate<< endl;

int count = 1;
for(int i=0; i< concate.length(); i++) 
{

	if( concate[i] ==' ') 
	{
	
		count++;
	
	}
}
cout<<" There are "<<count<<" words in the string."<<endl;
return 0;
}

