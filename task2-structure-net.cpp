#include<iostream>
#include<string>

using namespace std;

struct StudentType
{
	string Fname;
	string Lname;
	int testScore;
	char Grade;
};


void ReadStud(StudentType* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		StudentType temp;
		cout << "Please, enter Fname of student " << i + 1 << ": ";
		cin >> temp.Fname;
		cout << "Please, enter Lname of student " << i + 1 << ": ";
		cin >> temp.Lname;
		arr[i] = temp;
	}
}


void GradeAssign(StudentType* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Please, enter testScore and grade for "
			<< arr[i].Fname << " " << arr[i].Lname << ":";
		cin >> arr[i].testScore >> arr[i].Grade;
	}
}


int HighestScore(StudentType* arr, int n)
{
	int high = arr[0].testScore;
	for (int i = 0; i < n; i++)
	{
		if (arr[i].testScore > high)
			high = arr[i].testScore;
	}
	return high;
}


void PrintHigh(StudentType* arr, int n)
{
	int high = HighestScore(arr, n);
	cout << "The highest testScore has(have) this students:\n";
	for (int i = 0; i < n; i++)
	{
		if (arr[i].testScore == high)
			cout << arr[i].Fname << " " << arr[i].Lname << endl;
	}
}


int main()
{
	const int N = 5;
	StudentType arrStd[N];
	ReadStud(arrStd, N);
	GradeAssign(arrStd, N);
	for (int i = 0; i < N; i++)
	{
		cout << arrStd[i].Fname << " " << arrStd[i].Lname<<" "
			<< arrStd[i].testScore << " " << arrStd[i].Grade <<endl;
	}


	PrintHigh(arrStd, N);
}
