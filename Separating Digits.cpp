#include<iostream>
using namespace std;
int main()
{
  int num,a,b,c,d,highest,second_highest;
  cout<<"Enter a 4-Digit Number: ";
  cin>>num;
//  a=num/1000%10;
//  b=num/100%10;
//  c=num/10%10;
//  d=num%10;
 int m=1000;
 int sum=0;
 while( m!=0)
 {
 	int digit;
 	digit=num/m%10;
 	sum+=digit;
 	cout<<digit<<"\t";
 	m=m/10;
 	
 }
 cout<<endl<<sum<<endl;
// if(a>b && a>c && a>d){
// 	highest=a;
// } else if (b>a && b>c && b>d){
// 	highest=b;
// }
//   else if (c>a && c>b && c>d){
// 	highest=c;
// }
//   else {
//   	highest=d;
//   }
//   	if(a==highest && b>c && b>d){
//   		second_highest=b;
//	   }
//	   else if (a==highest && c>b && c>d){
//	   	second_highest=c;
//	   }
//	   else {
//	   	second_highest=d;
//	   }
//
//   	if(b==highest && a>c && a>d){
//   		second_highest=a;
//	   }
//	   else if (b==highest && c>a && c>d){
//	   	second_highest=c;
//	   }
//	   else {
//	   	second_highest=d;
//	   }
//	   
//   	if(c==highest && a>b && a>d){
//   		second_highest=a;
//	   }
//	   else if (c==highest && b>a && b>d){
//	   	second_highest=b;
//	   }
//	   else {
//	   	second_highest=d;
//	   }
//   
//   
//   	if(d==highest && a>b && a>c){
//   		second_highest=a;
//	   }
//	   else if (d==highest && b>a && b>c){
//	   	second_highest=b;
//	   }
//	   else {
//	   	second_highest=c;
//	   }
//   
//    cout<<"highest number : "<<highest<<endl;
//    cout<<"second highest number : "<<second_highest;
return 0;
}
