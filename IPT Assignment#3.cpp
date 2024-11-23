#include <iostream>
using namespace std;
int main()
{
	int lines,choice,x,y,gap=1;
	cout<<"Enter 1. to print Half Pyramid shape."<<endl;
	cout<<"Enter 2. to print Inverted Half Pyramid shape."<<endl;
	cout<<"Enter 3. to print Triangle  shape."<<endl;
	cout<<"Enter 4. to print Diamond shape."<<endl;
	cout<<"Enter  your choice: ";
	cin>>choice;
	switch(choice)
	{
	   case 1: 	
	   	cout<<"Enter the Number of Lines: ";
         cin>>lines;
         for(int i=1;i<=lines;++i)
         {
    	  for(int j=1;j<=i;++j)
    	   {
    		cout<<j;
		   }
    	  cout<<endl;
	     }
	     break;
	   
	    case 2:
	     cout<<"Enter the Number of Lines: ";
	     cin>>lines;
		 for(int i=1;i<=lines;i++)
	     {
		 for(int j=1;j<=(lines-i);j++)
		 {
			cout<<" ";
		 }
		 for(int k=1;k<=i;k++)
		 {
			cout<<k;
		 }
		 cout<<endl;
         }
         break;
	    case 3:
		 cout<<"Enter the Number of Lines: ";
		 cin>>lines;
		 for(int i=1;i<=lines;i++)
		  {
			for(int j=1;j<=lines-i;j++)
			{
				cout<<" ";
				
			}
			for(int k=1;k<=i;k++)
			{
				cout<<"# ";
			}
		  cout<<endl;
		  
		}
		break;
		case 4:
			
			cout<<"Enter the Number of Lines: ";
			cin>>lines;
			if(lines%2!=0)
			{
			
			y=(lines/2)+1;
			
			for(int i=1;i<=y;i++)
			{
				for(int j=1;j<=y-i;j++)
				{
					cout<<" ";
					
				}
				for(int k=1;k<=i;k++)
				{
					cout<<"* ";
				}
			  cout<<endl;
			}
			x=y-1;
			for(int i=1;i<=x;i++)
			{
				for(int j=1;j<=gap;j++)
				{
					cout<<" ";
					
				}
				gap++;
				
				for(int k=1;k<=y-i;k++)
				{
					cout<<"* ";
				}
			  cout<<endl;
			  
			}
			
		}
		else
		{
			
			cout<<"Diamond shape has ODD number of rows.\nSo,Please enter ODD number of rows So that requested shape can be formed Successfully.\nThanks in advance."<<endl;
		}
		break;
		default:
			
			cout<<"Enter Valid choice from Given Menu!"<<endl;
	}
	
		

	return 0;
}
