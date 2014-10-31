#include <iostream>
#include <string>

using namespace std;

int main()
{
	//declare variables;
	int Average;
	int Exam1, Exam2, NoStudents;
	string Name;
	char Grade;

	//output prompt
	cout << "------------Consulting Center---------------" << endl;
	cout << "Let's see how you are doing in your classes. " << endl;
	cout << "Please enter the number of students: "; cin >> NoStudents;

	//loop for grades
	for (int i = 0;i < NoStudents; i++)
	{
		//prompt
		cout << "What is your name?"; cin >> Name;
		cout << Name << ", please enter your score in two exams: "; cin >> Exam1 >> Exam2;

		//calculations
		Average  = (Exam1 + Exam2) / 2;
		if (Average >= 90)
		{
			Grade = 'A';
		}
		if (Average >= 80 && Average <= 89)
		{
			Grade = 'B';
		}
		if (Average >= 70 && Average <= 79 )
		{
			Grade = 'C';
		}
		if (Average >= 60 && Average <= 69)
		{
			Grade = 'D';
		}
		if (Average <=59)
		{
			Grade = 'F';
		}

		cout << "\tYour average is " << Average << " and your grade is " << Grade << endl << endl;
	}



	system("pause");
	return 0;
}