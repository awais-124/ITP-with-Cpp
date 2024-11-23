#include<iostream>
#include<string>
using namespace std;
int main()
{
	string comma=",";
	string str,place,temp;
	cout<<"STRING : ";
	getline(cin,str);
	int use_me;
	int i=0;
	temp=str;
	do{
	use_me=temp.find(comma);
	
	if(temp[use_me]==comma[0])
	{
		temp.erase(use_me,1);
	}
    place[i]=use_me;
	cout<<"\t"<<place[i];
    i++;
	}while(use_me!=-1);
    int l;
    l=place.length();
    return 0;
}
