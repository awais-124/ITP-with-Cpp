#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main() 
{
   int dice1,dice2,dice3,sum_old,sum_new,runtime=1;
    char user_guess;
    string key;
    while(runtime==1)
	 {
        srand(time(NULL));
        dice1 = (rand() % 6) + 1;
        dice2 = (rand() % 6) + 1;
        dice3 = (rand() % 6) + 1;
        sum_old = dice1 + dice2 + dice3;
            cout<<"\n     Press any Key and Press Enter to Roll a Dice: ";
            cin>>key;
            	cout<<"\n\n";
			    cout<<"         _______     _______     _______\n";
				cout<<"        |       |   |       |   |       |\n";
				cout<<"        |   "<<dice1<<"   |   |   "<<dice2<<"   |   |   "<<dice3<<"   |\n";
				cout<<"        |_______|   |_______|   |_______|\n\n\n\n\n";
            cout<<"\n     You have rolled: <"<<dice1<<"> <"<<dice2<<"> <"<<dice3<<">"<<endl;
            cout<<"     Your total is : "<<sum_old;
            cout<<"\n\n     Will your next total be higher, lower or the same (q to quit)? (h/l/s/q): ";


        while(runtime==1) {
            cin>>user_guess;
            srand(time(NULL));
            dice1 = (rand() % 6) + 1;
            dice2 = (rand() % 6) + 1;
            dice3 = (rand() % 6) + 1;
            sum_new = dice1 + dice2 + dice3;
            if(user_guess=='q' || user_guess=='Q') {
                
//                  system("cls");
                  cout<<"\n\n     ||===<<Thanks for Playing>>===||";
                  runtime = 0;
                  return 0;
            }
            if(user_guess!='h' && user_guess!='H' && user_guess!='l' && user_guess!='L' && user_guess!='s' && user_guess!='S') {
                

                  cout<<"\n\n     INVALID INPUT";
                  
            }
            cout<<"\n     Press any Key and Press Enter to Roll a Dice: ";
            cin>>key;
        	cout<<"\n\n";
		    cout<<"         _______     _______     _______\n";
			cout<<"        |       |   |       |   |       |\n";
			cout<<"        |   "<<dice1<<"   |   |   "<<dice2<<"   |   |   "<<dice3<<"   |\n";
			cout<<"        |_______|   |_______|   |_______|\n\n\n\n\n";
            cout<<"\n     You have rolled: <"<<dice1<<"> "<<dice2<<"> <"<<dice3<<">"<<endl;
            cout<<"     Your total is : "<<sum_new;
            if(user_guess == 'h' || user_guess=='H')
			 {
            	if(sum_new > sum_old)
				{
            		cout<<"\n     YOUR PREDICTION WAS CORRECT!!\n";
				}
				else
				{
					cout<<"\n     YOUR PREDICTION WAS WRONG!!\n";
				}
                
            }
            else if(user_guess=='l' || user_guess=='L') 
			{
            	if(sum_new < sum_old){
            		cout<<"\n     YOUR PREDICTION WAS CORRECT!!\n";
				}
				else
				{
					cout<<"\n     YOUR PREDICTION WAS WRONG!!\n";
				}
                
            }
            else if(user_guess=='s' || user_guess=='S')
			{
            	if(sum_new == sum_old )
				{
            		cout<<"\n     YOUR PREDICTION WAS CORRECT!!\n";
				}
				else
				{
				cout<<"\n     YOUR PREDICTION WAS WRONG!!\n";
				}
                
            }
            else 
			{
                cout<<"\n     YOUR PREDICTION WAS WRONG!!\n";
            }
            sum_old = sum_new;
            cout<<"\n\n     Will your next total be higher, lower or the same (q to quit)? (h/l/s/q): ";
        }
    }
    cout<<"     Congratulations on completing the game!";
    return 0;
}
