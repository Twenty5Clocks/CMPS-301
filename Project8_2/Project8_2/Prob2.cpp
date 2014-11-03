//---------------------------------------------------------------
//           Name         Jeremy Driesler
//           Course       CMPS-301
//           Due          November 3, 2014
//           Project No   No.8 Part 2
//           Professor    Ray Ahmadnia
//
//   This Program Displays
//------------Consulting Center---------------
//Let's see how you are doing in your classes.
//Please enter the number of students: 3
//What is your name?John
//John, please enter your score in two exams: 66 88
//        Your average is 77 and your grade is C
//
//What is your name?Bill
//Bill, please enter your score in two exams: 99 88
//        Your average is 93 and your grade is A
//
//What is your name?Arnold
//Arnold, please enter your score in two exams: 66 55
//        Your average is 60 and your grade is D
//
//Press any key to continue . . .
//
//
// 
//----------------------------------------------------------------
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
/*--------------------------Output---------------------------------
------------Consulting Center---------------
Let's see how you are doing in your classes.
Please enter the number of students: 3
What is your name?John
John, please enter your score in two exams: 66 88
        Your average is 77 and your grade is C

What is your name?Bill
Bill, please enter your score in two exams: 99 88
        Your average is 93 and your grade is A

What is your name?Arnold
Arnold, please enter your score in two exams: 66 55
        Your average is 60 and your grade is D

Press any key to continue . . .

------------------------------------------------------------------*/