#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;


struct book {

char* author, * title, * publisher;
float* price;
int* stock;
book() {
author = new char[20];
title = new char[20];
publisher = new char[20];
price = new float;
stock = new int;
}
void feeddata();
void editdata();
void showdata();
int search(char[], char[]);
void buybook();

};

void book::feeddata() {
cin.ignore();
cout << " Enter Author Name: ";      
cin.getline(author, 20);

cout << "Enter Title Name: ";       
cin.getline(title, 20);

cout << "Enter Publisher Name: ";   
cin.getline(publisher, 20);

cout << "Enter Price: ";            
cin >> *price;

cout << "Enter Stock Position: ";   
cin >> *stock;

}

void book::editdata() {

cout << " Enter Author Name: ";      cin.getline(author, 20);
cout << "Enter Title Name: ";       cin.getline(title, 20);
cout << "Enter Publisher Name: ";   cin.getline(publisher, 20);
cout << "Enter Price: ";            cin >> *price;
cout << "Enter Stock Position: ";   cin >> *stock;

}

void book::showdata() {
cout << " Author Name: " << author;
cout << " Title Name: " << title;
cout << " Publisher Name: " << publisher;
cout << " Price: " << *price;
cout << " Stock Position: " << *stock;

}

int book::search(char tbuy[20], char abuy[20]) {
if (strcmp(tbuy, title) == 0 && strcmp(abuy, author) == 0)
return 1;
else return 0;

}

void book::buybook() {
int count;
cout << " Enter Number Of Books to buy: ";
cin >> count;
if (count <= *stock) {
*stock = *stock - count;
cout << " Books Bought Sucessfully";
cout << " Amount: Rs. " << (*price) * count;
}
else
cout << " Required Copies not in Stock";
}

int main() {
book* B[20];
int i = 0, r, t, choice;
char titlebuy[20], authorbuy[20];
while (1) {


      cout << "\n _______________________________________________________________________________" << endl;
        cout << "|______________________________             ____________________________________|\n" ;
        cout << "                               \\          /                                         " << endl;
        cout << "                                \\ 'MENU' /                                        " << endl;
        cout << "                                 \\______/                                   \n " << endl;

 
cout<< " \t\t\t1. Entry of New Book\n"
<< " \t\t\t2. Buy Book\n"
<< " \t\t\t3. Search For Book\n"
<< " \t\t\t4. Edit Details Of Book\n"
<< " \t\t\t5. Exit\n"
<< " \t\t\tEnter your Choice: ";

do{
	cin >> choice;
	if(choice<1 || choice >5)
	{
		cout<<"\n\t\tInvalid Input! Enter again: ";
	}
}while(choice<1 || choice >5);


switch (choice) {
case 1: B[i] = new book;
B[i]->feeddata();
i++; break;

case 2: cin.ignore();
cout << " Enter Title Of Book: "; cin.getline(titlebuy, 20);
cout << "Enter Author Of Book: ";  cin.getline(authorbuy, 20);
for (t = 0; t < i; t++) {
if (B[t]->search(titlebuy, authorbuy)) {
B[t]->buybook();
break;
}
}
if (t == 1)
cout << " This Book is Not in Stock";

break;
case 3: cin.ignore();
cout << " Enter Title Of Book: "; cin.getline(titlebuy, 20);
cout << "Enter Author Of Book: ";  cin.getline(authorbuy, 20);

for (t = 0; t < i; t++) {
if (B[t]->search(titlebuy, authorbuy)) {
cout << " Book Found Successfully";
B[t]->showdata();
break;
}
}
if (t == i)
cout << " This Book is Not in Stock";
break;

case 4: cin.ignore();
cout << " Enter Title Of Book: "; cin.getline(titlebuy, 20);
cout << "Enter Author Of Book: ";  cin.getline(authorbuy, 20);

for (t = 0; t < i; t++) {
if (B[t]->search(titlebuy, authorbuy)) {
cout << " Book Found Successfully";
B[t]->editdata();
break;
}
}
if (t == i)
cout << " This Book is Not in Stock";
break;

case 5: exit(0);
default: cout << " Invalid Choice Entered";

}
system("cls");
}




return 0;
}
