#include <iostream>
#include <stdlib.h>
#include <time.h>
#include<string.h>
using namespace std;
void rules();
void drawLine(int n, char symbol);
int main() 
{
   string color[4]={"RED","GREEN","BLUE","YELLOW"},comp[50],temp[50];
   int a,choice,run=1,i=1,k=0;
   char key;
   rules();
   cout<<"     Press any key to start th Game: ";
   cin>>key;
   while(run==1){
   srand(time(0));
   a=rand()%4;
    cout<<"POP-UP: ";
    cout<<color[a];
    comp[k]=color[a];//
    cout<<"\nRED == 0 \nGREEN == 1 \nBLUE == 2 \nYELLOW == 3 \n";
    for(int j=0; j<i;j++){
   	 
   	 cin>>choice;
   	 temp[j]=color[choice];
   }
   	for(int j=0;j<i;j++){
	   if(temp[j]==comp[j])
	   {
   		run=1;
	   }
	   else
	   {
	   	run=0;
	   	j=50;
	   }
   }
   i++;
   k++;
   }
    return 0;
    
}
void drawLine(int n, char symbol)
	{
	    for(int i=0; i<n; i++)
	        cout << symbol;
	    
	}
void rules()
	{
	    system("cls");
	    cout << "\n\n";
	    cout<<"\t|";
	    drawLine(60,'=');
	    cout<<"|\n";
	    cout<<"\t\t   ||<<<===FOLLOW THE PATTERN===>>>||\n";
	    cout<<"|";
	    drawLine(80,'=');
	    cout<<"|\n";
	    cout << "\t\t\t <<RULES OF THE GAME>>\n";
	    cout<<"|";
	    drawLine(80,'=');
	    cout<<"|\n\n";
	    cout << "\t 1. Choose any number between 1 to 10.\n";
	    cout << "\t 2. If you win, you will get 10 times of money you bet.\n";
	    cout << "\t 3. If you bet on wrong number you will lose your betting amount.\n\n";
	    cout<<"|";
	    drawLine(80,'=');
	    cout<<"|\n";
	}
