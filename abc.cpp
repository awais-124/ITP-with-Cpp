#include <iostream>
#include<string.h>
using namespace std;
 int main()
 {
 	char str[500],guess[500],new_arr[500];
 	int i=0;
 	cout<<"Enter A Word: "<<endl;
 	while(true)
 	{
 		cout<<"Round No:"<<i+1<<endl;
 		cin>>str;
 		int l=strlen(str);
 		cin>>guess;
 		for(int k=0;k<l;k++)
 		{
 			for(int j=0;j<l;j++)
 			{
 			if(guess[k]==str[j])
 			{
 				guess[k] = new_arr[j];
			}
		}
		cout<<"You Won\n\n";
 		
	}
        
	 }
 	
 	return 0;
 	
 }
 	
 	
 	
 	
 	
 	
 	
 	
 	
 
