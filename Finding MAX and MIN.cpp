	
	#include <iostream>
	using namespace std;
	int main()
	{
	  int Salary1,Salary2,Salary3,Salary4,Salary5,Salary6,Salary7,Salary8,Salary9,Salary10,minimum,maximum;
	  cout<<"Salary1= ";
	  cin>>Salary1;
	  cout<<"Salary2= ";
	  cin>>Salary2;
	  cout<<"Salary3= ";
	  cin>>Salary3;
	  cout<<"Salary4= ";
	  cin>>Salary4;
	  cout<<"Salary5= ";
	  cin>>Salary5;
	  cout<<"Salary6= ";
	  cin>>Salary6;
	  cout<<"Salary7= ";
	  cin>>Salary7;
	  cout<<"Salary8= ";
	  cin>>Salary8;
	  cout<<"Salary9= ";
	  cin>>Salary9;
	  cout<<"Salary10= ";
	  cin>>Salary10;


	// Checking for maximum salary
	if(Salary1>Salary2 && Salary1>Salary3 && Salary1>Salary4 && Salary1>Salary5 && Salary1>Salary6 && Salary1>Salary7 && Salary1>Salary8 && Salary1>Salary9 && Salary1>Salary10)	
	{
		maximum=Salary1;
		}
	else if(Salary2>Salary1 && Salary2>Salary3 && Salary2>Salary4 && Salary2>Salary5 && Salary2>Salary6 && Salary2>Salary7 && Salary2>Salary8 && Salary2>Salary9 && Salary2>Salary10)	
	{
		maximum=Salary2;
		}
	else if(Salary3>Salary1 && Salary3>Salary2 && Salary3>Salary4 && Salary3>Salary5 && Salary3>Salary6 && Salary3>Salary7 && Salary3>Salary8 && Salary3>Salary9 && Salary3>Salary10)	
	{
		maximum=Salary3;
		}
	else if(Salary4>Salary1 && Salary4>Salary2 && Salary4>Salary3 && Salary4>Salary5 && Salary4>Salary6 && Salary4>Salary7 && Salary4>Salary8 && Salary4>Salary9 && Salary4>Salary10)	
	{
		maximum=Salary4;
		}
	else if(Salary5>Salary1 && Salary5>Salary2 && Salary5>Salary3 && Salary5>Salary4 && Salary5>Salary6 && Salary5>Salary7 && Salary5>Salary8 && Salary5>Salary9 && Salary5>Salary10)	
	{
		maximum=Salary5;
		}
	else if(Salary6>Salary1 && Salary6>Salary2 && Salary6>Salary3 && Salary6>Salary4 && Salary6>Salary5 && Salary6>Salary7 && Salary6>Salary8 && Salary6>Salary9 && Salary6>Salary10)	
	{
		maximum=Salary6;
		}
	else if(Salary7>Salary1 && Salary7>Salary2 && Salary7>Salary3 && Salary7>Salary4 && Salary7>Salary5 && Salary7>Salary6 && Salary7>Salary8 && Salary7>Salary9 && Salary7>Salary10)	
	{
		maximum=Salary7;
		}
	else if(Salary8>Salary1 && Salary8>Salary2 && Salary8>Salary3 && Salary8>Salary4 && Salary8>Salary5 && Salary8>Salary6 && Salary8>Salary7 && Salary8>Salary9 && Salary8>Salary10)	
	{
		maximum=Salary8;
		}
	else if(Salary9>Salary1 && Salary9>Salary2 && Salary9>Salary3 && Salary9>Salary4 && Salary9>Salary5 && Salary9>Salary6 && Salary9>Salary7 && Salary9>Salary8 && Salary9>Salary10)	
	{
		maximum=Salary9;
		}
	else 	
	{
		maximum=Salary10;
		}	
	
	cout<<"Maximum Salary is :  "<<maximum<<endl;
	
	
		// Checking for minimum salary
	if(Salary1<Salary2 && Salary1<Salary3 && Salary1<Salary4 && Salary1<Salary5 && Salary1<Salary6 && Salary1<Salary7 && Salary1<Salary8 && Salary1<Salary9 && Salary1<Salary10)	
	{
		minimum=Salary1;
		}
	else if(Salary2<Salary1 && Salary2<Salary3 && Salary2<Salary4 && Salary2<Salary5 && Salary2<Salary6 && Salary2<Salary7 && Salary2<Salary8 && Salary2<Salary9 && Salary2<Salary10)	
	{
		minimum=Salary2;
		}
	else if(Salary3<Salary1 && Salary3<Salary2 && Salary3<Salary4 && Salary3<Salary5 && Salary3<Salary6 && Salary3<Salary7 && Salary3<Salary8 && Salary3<Salary9 && Salary3<Salary10)	
	{
		minimum=Salary3;
		}
	else if(Salary4<Salary1 && Salary4<Salary2 && Salary4<Salary3 && Salary4<Salary5 && Salary4<Salary6 && Salary4<Salary7 && Salary4<Salary8 && Salary4<Salary9 && Salary4<Salary10)	
	{
		minimum=Salary4;
		}
	else if(Salary5<Salary1 && Salary5<Salary2 && Salary5<Salary3 && Salary5<Salary4 && Salary5<Salary6 && Salary5<Salary7 && Salary5<Salary8 && Salary5<Salary9 && Salary5<Salary10)	
	{
		minimum=Salary5;
		}
	else if(Salary6<Salary1 && Salary6<Salary2 && Salary6<Salary3 && Salary6<Salary4 && Salary6<Salary5 && Salary6<Salary7 && Salary6<Salary8 && Salary6<Salary9 && Salary6<Salary10)	
	{
		minimum=Salary6;
		}
	else if(Salary7<Salary1 && Salary7<Salary2 && Salary7<Salary3 && Salary7<Salary4 && Salary7<Salary5 && Salary7<Salary6 && Salary7<Salary8 && Salary7<Salary9 && Salary7<Salary10)	
	{
		minimum=Salary7;
		}
	else if(Salary8<Salary1 && Salary8<Salary2 && Salary8<Salary3 && Salary8<Salary4 && Salary8<Salary5 && Salary8<Salary6 && Salary8<Salary7 && Salary8<Salary9 && Salary8<Salary10)	
	{
		minimum=Salary8;
		}
	else if(Salary9<Salary1 && Salary9<Salary2 && Salary9<Salary3 && Salary9<Salary4 && Salary9<Salary5 && Salary9<Salary6 && Salary9<Salary7 && Salary9<Salary8 && Salary9<Salary10)	
	{
		minimum=Salary9;
		}
	else 	
	{
		minimum=Salary10;
		}	
	
	cout<<"Minimum Salary is :  "<<minimum<<endl;
	return 0;
	}

