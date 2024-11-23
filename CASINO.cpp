#include <iostream>
#include <string> 
#include <cstdlib> 
#include <ctime>
using namespace std;
	 
void drawLine(int n, char symbol);
void rulesOfGame();
 
int main()
	{
    int bettingAmount,guess,number,total;
	long amount; 
    char choice;
 
    srand(time(0)); 
    drawLine(65,'_');
    cout << "\n\n\n\n\t\t||<<<===CASINO GAME===>>>||\n\n\n\n";
    drawLine(65,'_');
    
    cout << "\n\nEnter Deposit amount to play game : Rs.";
    cin >> amount;	
	   
    do
    {
        system("cls");
        rulesOfGame();
        cout << "\n\nYour current balance is  " << amount << "/-\n";
			
        do
        {
            cout <<"Enter money to bet : Rs.";
            cin >> bettingAmount;
            if(bettingAmount > amount)
                cout << "Your betting amount is greater than your current balance\n"
                       <<"\nRe-enter betting amount\n ";
        }while(bettingAmount > amount);
        
        do
        {
	        cout << "Guess a number to bet(between 0 to 11) :";
	        cin >> guess;
	        if(guess < 1 || guess > 10)
	        {
	        	cout << "The number is not betweem 0 and 11!\n";
			}
                
        }while(guess < 1 || guess > 10);
        
        number = rand()%10 + 1; 
        
        if(number == guess)
        {
        	total = bettingAmount * 10;
            cout << "\n\nGood Luck!! You won Rs." << total;
            amount = amount + total;
        }
        
        else
        {
            cout << "Bad Luck this time !! You lost  "<< bettingAmount <<"/-\n";
            amount = amount - bettingAmount;
        }
        
        cout << "\nThe Winning number was : " << number <<"\n";
        
        cout << "\nYou have  " << amount << "/- remaining.\n";
        
        if(amount == 0)
        {
            cout << "You have no money to play! ";
            break;
        }
        
        cout << "\n\n-->Do you want to play again (y/n)? ";		
        cin >> choice;
        
    }while(choice =='Y'|| choice=='y');
    
    cout << "\n\n\n";
    drawLine(70,'=');
    
    cout << "\n\n\tThanks for playing game. Your balance amount is  " << amount << "/-\n\n";
    
    drawLine(70,'=');
 
    return 0;
    
	}
	 
	void drawLine(int n, char symbol)
	
	{
	    for(int i=0; i<n; i++)
	        cout << symbol;
	    
	}
	 
	void rulesOfGame()
	
	{
	    system("cls");
	    
	    cout << "\n\n|";
	    
	    drawLine(80,'=');
	    
	    cout << "|\n\t\t\t <<RULES OF THE GAME>>\n|";
	    
	    drawLine(80,'=');
	    
	    cout << "|\n\n   1. Guess any number between 1 to 10 and bet an amount.\n";
	    cout << "   2. If you bet on correct number, you will get 10 times of money you bet.\n";
	    cout << "   3. If you bet on wrong number you will lose your betting amount.\n\n|";
	    
	    drawLine(80,'=');
	    
	    cout<<"|\n";
	}
	 
