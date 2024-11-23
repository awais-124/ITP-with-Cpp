#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
 int main()  
{
 int  Dice[4],Dice1, Dice2,Dice3, Dice4,total1,total2;
 char key,choice;
do{
	srand(time(0));
//	for(int i=0;i<4;i++)
//	{
//		Dice[i] = rand() % 6 + 1;
//	}
//	
//		total1=Dice[0]+Dice[1];
//		total2=Dice[2]+Dice[3];
	    Dice1 = rand() % 6 + 1;
		Dice2 = rand() % 6 + 1; 
		Dice3 = rand() % 6 + 1;
		Dice4 = rand() % 6 + 1;
		total1=Dice1+Dice2;
		total2=Dice3+Dice4;
		cout<<"\n\n     ____________________________________________________\n\n";
	cout<<"     ====================<DICE GAME>=====================";
	cout<<"\n     ____________________________________________________\n\n\n\n";
    cout<<"     Player 1,\n     Your turn. Press ANY key to roll a dice: ";
	cin>>key;
	cout<<"\n\n";
    cout<<"         _______     _______\n";
	cout<<"        |       |   |       |\n";
	cout<<"        |   "<<Dice1<<"   |   |   "<<Dice2<<"   |\n";
	cout<<"        |_______|   |_______|\n\n\n\n\n";
	
	cout<<"     Player 2,\n     Your turn. Press ANY key to roll a dice: ";
	cin>>key;
	cout<<"\n\n";

    cout<<"         _______     _______\n";
	cout<<"        |       |   |       |\n";
	cout<<"        |   "<<Dice3<<"   |   |   "<<Dice4<<"   |\n";
	cout<<"        |_______|   |_______|\n\n\n\n\n\n";
			
		if(total1>total2)
		{
			cout<<"     |||===<Player1 Won!>===|||";
			}	
		else if(total1<total2)
		{
			cout<<"     |||===<Player2 Won!>===|||";
			}	
         else
         {
         	cout<<"     |||===<Game Drawn!>===|||";
		 }
		 cout<<  "\n\n\n     Do you want to play again?(y/n): ";
		 cin>>choice;
		 if(choice=='y')
		 {
		 	system("cls");
		 }
		 else
		 {
		 	   cout<<"\n\n\n";
		 	   cout<<"    _______________________________\n\n";
		 	   cout<<"    |||...Thanks for PLaying...|||\n";
		 	   cout<<"    _______________________________";
		 }
	}while(choice=='y'|| choice=='Y');

		 
 return 0;
}

		
