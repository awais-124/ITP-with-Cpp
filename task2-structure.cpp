#include<iostream>
using namespace std;
const int size=2;
struct studentType
{
	string studentFname;
	string studentLname;
	int testscore;
	char grade;
};
void readData(studentType* array)
{
	for(int i=0;i<size;i++)
	{
		cout<<"Data of Student "<<i+1<<endl;
		cout<<"Enter First name: ";
		cin>>array[i].studentFname;
		cout<<"Enter Last name: ";
		cin>>array[i].studentLname;
		cout<<"Enter your Score(1-100): ";
		cin>>array[i].testscore;
		
	}
}
void calculategrade(studentType* array)
{
	char grade[size];
	for(int i=0;i<size;i++)
	{
		
		if(array[i].testscore > 80)
		{
			grade[i]='A';
		}
		else if(array[i].testscore > 70  && array[i].testscore<=80)
		{
			grade[i]='B';
		}
		else if(array[i].testscore > 60  && array[i].testscore<=70)
		{
			grade[i]='C';
		}
		else if(array[i].testscore > 50  && array[i].testscore<=60)
		{
			grade[i]='D';
		}
		else if(array[i].testscore < 50)
		{
			grade[i]='E';
		}
		
		else
		{
			cout<<"Invalid Score Range."<<endl;
		}
		
		cout<<"Student No "<<i+1<<" :"<<endl;
		cout<<"Score: "<<array[i].testscore<<endl;
		cout<<"Grade: "<<grade[i]<<endl<<endl;
	}
	
}

int calculatehighest(studentType* array)
{
	int max;
	max=array[0].testscore;
	for(int i=1;i<size;i++)
	{
		if(array[i].testscore > max)
		{
			max=array[i].testscore;
		}
		
	}
	return max;
	
}
void displayhighest(studentType* array)
{
	int use;
	use=calculatehighest(array);
	cout<<"Highest score is "<<use<<".\n";
	cout<<"Student who got highest marks are: "<<endl;
	
	for(int i=0;i<size;i++)
	{
		if(array[i].testscore == use)
		{
			cout<<array[i].studentFname<<" "<<array[i].studentLname<<endl;
		}
	
	}
	
}


int main()
{
	studentType std_array[size];
	readData(std_array);
	calculategrade(std_array);
	calculatehighest(std_array);
	displayhighest(std_array);

    return 0;
}



