#include <iostream>
using namespace std;
int main()
{
  string str;
  int vowel_count=0,a=0,e=0,i=0,o=0,u=0,l;
  cout<<"Please Enter A String: ";
  
  getline(cin,str);
  l=str.length();
  for(int j=0;j<l;j++)
  {
     if(str[j]=='a')
	 {
	 	a++;
	 	vowel_count++;
	  } 
	  if(str[j]=='e')
	 {
	 	e++;
	 	vowel_count++;
	  }
	  if(str[j]=='i')
	 {
	 	i++;
	 	vowel_count++;
	  }
	  if(str[j]=='o')
	 {
	 	o++;
	 	vowel_count++;
	  }
	  if(str[j]=='u')
	 {
	 	u++;
	 	vowel_count++;
	  }
  }
  

	cout<<"Total Vowels: "<<a+e+i+o+u<<endl;
	cout<<"A : "<<a<<endl;
	cout<<"E : "<<e<<endl;
	cout<<"I : "<<i<<endl;
	cout<<"O : "<<o<<endl;
	cout<<"U : "<<u<<endl;
    return 0;
}
