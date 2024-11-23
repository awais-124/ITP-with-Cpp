#include <iostream>
using namespace std;
void function()
{
    static int count =0;
    count += 1;
    cout << "I have been called " << count << " times" << endl;
}

int main()
{
    char line;
    while (true) {
    	cout<<"\nDo you want to call the function ('y' or 'n') : ";
        cin >> line;
        if (line == 'y' || line == 'Y')
            function();
        if (line == 'n' || line == 'N')
            break;
        if (line != 'y' && line != 'Y' && line != 'n' && line != 'n')
        {
        	cout << "oops..." << endl;
        	
		}
            
    }
    return 0;
}
//write a program that displays the following output a message telling how many times it has been called :i have been called 3 times, for instance. Write a main() program that asks the user to ca;; the function,if user presses y the funcion is called otherwise if presses n the program terminates
