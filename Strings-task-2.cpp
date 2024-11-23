#include<iostream>
#include<string>

using namespace std;
int main()
{
	string phone_No;
	int l;
	char a;
	do{
	
	do{
		cout<<"Enter your Phone No as(+92345678910):  ";
	cin>>phone_No;
	l=phone_No.length();
	
	
	if(l!=12 || phone_No[0]!='+')
	{
		cout<<"Enter again as prescribed above!"<<endl;
		
	}
	}while(l!=12 || phone_No[0]!='+');
	
	
	if(phone_No[1]!='9' || phone_No[2]!='2')
	{
		cout<<"Unknown Number!"<<endl;
	}
	else if(phone_No[3]=='5' && phone_No[4]=='1')
	{
		cout<<"ISLAMABAD NUMBER"<<endl;
	}
	else if(phone_No[3]=='4' && phone_No[4]=='2')
	{
		cout<<"KARACHI NUMBER!"<<endl;
	}
	else if(phone_No[3]=='2' && phone_No[4]=='1')
	{
		cout<<"LAHORE NUMBER!"<<endl;
	}
	else
	{
		cout<<"Unknown Number";
	}	
	
	
	
	cout<<"\n\nDo You want to check another number: ";
	cin>>a;
	}while(a =='y' || a =='Y');
	cout<<"EnD of Program.\nBye!"<<endl;
}
