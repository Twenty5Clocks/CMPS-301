//---------------------------------------------------------------
//           Name         Jeremy Driesler
//           Course       CMPS-301
//           Due          November 10, 2014
//           Project No   No.9 Part 1
//           Professor    Ray Ahmadnia
//
//   This Program Displays
//------- Sunject's menu -------
//        1. Addition
//        2.Subtraction
//
//Enter your choice: 1
//How many problems do you want to practice: 5
//                51 + 49 =? 100
//                        Correct
//                83 + 80 =? 100
//                        Wrong
//                65 + 86 =? 151
//                        Correct
//                78 + 16 =? 75
//                        Wrong
//                84 + 34 =? 118
//                        Correct
//Press any key to continue . . .
// 
//----------------------------------------------------------------
#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	//declare variables
	int ProbChoice;
	int NoProbs;
	int Num1, Num2, Answer, UserAnswer;

	//output menu
	cout << "------- Sunject's menu -------" << endl;
	cout << "	1. Addition" << endl;
	cout << "	2.Subtraction" << endl << endl;
	cout << "Enter your choice: "; cin >> ProbChoice;
	cout << "How many problems do you want to practice: "; cin >> NoProbs;

	//seed random number generator
	srand(time(0));

	//for loop for running the game
	for(int i = 0; i < NoProbs; i++)
	{
		//generate random number
		Num1 = rand()%100;
		Num2 = rand()%100;

		//output equation
		cout << "		" << Num1;
		if (ProbChoice == 1)
		{
			cout << " + ";
		}
		if (ProbChoice == 2)
		{
			cout << " - ";
		}
		cout << Num2 << " =? "; cin >> Answer;
		if (ProbChoice == 1)
		{
			if (Answer == (Num1 + Num2))
			{
				cout << "			Correct" << endl;
			}
			else
			{
				cout << "			Wrong" << endl;
			}
		}
		if (ProbChoice == 2)
		{
			if (Answer == (Num1 - Num2))
			{
				cout << "			Correct" << endl;
			}
			else
			{
				cout << "			Wrong" << endl;
			}
		}



	}



	//terminate problem
	system("Pause");
	return 0;
}



/*--------------------------Output---------------------------------
------- Sunject's menu -------
        1. Addition
        2.Subtraction

Enter your choice: 1
How many problems do you want to practice: 5
                51 + 49 =? 100
                        Correct
                83 + 80 =? 100
                        Wrong
                65 + 86 =? 151
                        Correct
                78 + 16 =? 75
                        Wrong
                84 + 34 =? 118
                        Correct
Press any key to continue . . .
------------------------------------------------------------------*/