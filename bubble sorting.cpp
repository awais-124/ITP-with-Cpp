#include<iostream>
using namespace std;
int main(){
	int my[10]={8,12,14,3,5,6,15,2,4,5};
	for(int i=0;i<10;i++){
		for(int j=i+1;j<10;j++){
			if(my[i]>my[j]){
				swap(my[i],my[j]);
			}
		}
	}
		for(int i=0;i<10;i++){
	cout<<my[i]<<"\t";
			}
		

	return 0;
}
