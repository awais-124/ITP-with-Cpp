#include <iostream>
#include <string>
#include <cmath>
using namespace std;
 int main()
 {
    
     int a, b;
         cout<<"Enter Amplitude of Wave:(less than 9):  ";
         cin >> a;
		 cout<<"Enter Frequency of Wave: ";
		 cin>> b;
         for (int i = 0; i < b; i++)
         {
            
             for (int j = 1; j <= a; j++)
             {
                 for (int k = 0; k < j; k++)
                 {
                     cout << j;
                 }
                 cout << endl;
             }
             for (int j = a - 1; j >= 1; j--)
             {
                 for (int k = 0; k < j; k++)
                 {
                     cout << j;
                 }
                 cout << endl;
             } 
         }
         
         
            cout << endl;
         
     
    return 0;
 }
