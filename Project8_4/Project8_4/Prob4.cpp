//---------------------------------------------------------------
//           Name         Jeremy Driesler
//           Course       CMPS-301
//           Due          November 3, 2014
//           Project No   No.8 Part 4
//           Professor    Ray Ahmadnia
//
//   This Program Displays
//How many problems would you like to practice? 3
//Problem #1      Enter a fraction: 1/2
//                Enter another fraction: 3/4
//                Enter an arithmetic operation (+,-,*): +
//                        1/2 + 3/4 = 10/8
//
//Problem #2      Enter a fraction: 2/3
//                Enter another fraction: 4/5
//                Enter an arithmetic operation (+,-,*): *
//                        2/3 * 4/5 = 8/15
//
//Problem #3      Enter a fraction: 2/5
//                Enter another fraction: 4/5
//                Enter an arithmetic operation (+,-,*): +
//                        2/5 + 4/5 = 30/25
//
//Press any key to continue . . .
//
// 
//----------------------------------------------------------------
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//declare variables
	int Num1, Den1, Num2, Den2, Num3, Den3;
	char temp, operation;
	int NoProbs;

	//output prompt
	cout << "How many problems would you like to practice? "; cin >> NoProbs;
	for (int i = 0; i < NoProbs; i++)
	{
		cout << "Problem #" << (i+1) << "\tEnter a fraction: "; cin >> Num1 >> temp >> Den1;
		cout << "\t\tEnter another fraction: "; cin >> Num2 >> temp >> Den2;
		cout << "\t\tEnter an arithmetic operation (+,-,*): "; cin >> operation;
		//calculations

		switch(operation)
		{
		case '+':
			Num3 = (Num1 * Den2) + (Num2 * Den1);
			Den3 = Den1 * Den2;
			break;
		case '-':
			Num3 = (Num1 * Den2) - (Num2 * Den1);
			Den3 = Den1 * Den2;
			break;
		case '*':
			Num3 = Num2 * Num1;
			Den3 = Den2 * Den1;
			break;
		default:
			cout << "Cannot do this operation.... sorry.";
		}

		//output results to user
		cout << "\t\t\t" << Num1 << "/" << Den1 << " " << operation << " " << Num2 << "/" << Den2 << " = " << Num3 << "/" << Den3 << endl << endl;
	}


	system("pause");
	return 0;
}
/*--------------------------Output---------------------------------
How many problems would you like to practice? 3
Problem #1      Enter a fraction: 1/2
                Enter another fraction: 3/4
                Enter an arithmetic operation (+,-,*): +
                        1/2 + 3/4 = 10/8

Problem #2      Enter a fraction: 2/3
                Enter another fraction: 4/5
                Enter an arithmetic operation (+,-,*): *
                        2/3 * 4/5 = 8/15

Problem #3      Enter a fraction: 2/5
                Enter another fraction: 4/5
                Enter an arithmetic operation (+,-,*): +
                        2/5 + 4/5 = 30/25

Press any key to continue . . .
------------------------------------------------------------------*/