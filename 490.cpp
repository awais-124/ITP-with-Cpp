#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int counter = 0;
    int n;
    int max_len = 0;
    char all[100][100];
    string input;
    cout<<"Enter number of sentences(maximum can be 100): ";
    do{
    	
        cin>>n; 
	}while(n>101);

    int k=0;
    cout<<"Enter Sentences....\n";
    while (k<=n) 
	{ 
		getline(cin,input);
        int len = input.length();
        if (len > max_len)
            max_len = len;
        for (int i = 0; i < len; i++) 
		{
            all[counter][i] = input[i];
        }
        
        counter++;
        k++;
    }
    cout<<"\Rotated Sentences are as follow... "<<endl;
    for (int i = 0; i < max_len; i++) {
        for (int y = counter - 1; y >= 0; y--) {
            cout << all[y][i];
        }
        cout << endl;
    }
    
    return 0;
}
