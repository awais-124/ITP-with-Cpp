#include <iostream>
using namespace std;
 int main()
 {
     int amplitude, frequency;
         cout<<"Enter Amplitude of Wave (must be less than 10):  ";
         do{
         cin >> amplitude;
		 }while(amplitude>9);
         cout<<"Enter Frequency of Wave: ";
		 cin>> frequency;
         for (int i = 0; i < frequency; i++)
         {
            for (int j = 1; j <= amplitude; j++)
             {
                 for (int k = 0; k < j; k++)
                 {
                     cout << j;
                 }
                 cout << endl;
             }
             for (int j = amplitude - 1; j >= 1; j--)
             {
                 for (int k = 0; k < j; k++)
                 {
                     cout << j;
                 }
                 cout<<endl;	
			} 
             if(i<frequency-1)
             cout<<endl;
         }
    return 0;
 }
