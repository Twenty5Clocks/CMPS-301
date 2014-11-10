//---------------------------------------------------------------
//           Name         Jeremy Driesler
//           Course       CMPS-301
//           Due          November 10, 2014
//           Project No   No.9 Part 4
//           Professor    Ray Ahmadnia
//
//   This Program Displays
//Enter 10 Grades(A,B,C,D): AbbBCCAAdD
//        No. of "A" scores = 3
//        No. of "B" scores = 3
//        No. of "C" scores = 2
//        No. of "D" scores = 2
//Press any key to continue . . .
//
// 
//----------------------------------------------------------------
#include <iostream>
#include <string>



using namespace std;

int main()
{

	//declare variables
	string Grades;
	int NoA = 0, NoB = 0, NoC = 0, NoD = 0;

	//prompt user to input grades
	cout << "Enter 10 Grades(A,B,C,D): "; cin >> Grades;

	//for loop to count grades;
	for (int i = 0; i < Grades.length(); i++)
	{
		if (Grades[i] == 'A' || Grades [i] == 'a' )
		{
			NoA++;
		}
		if (Grades[i] == 'B' || Grades [i] == 'b' )
		{
			NoB++;
		}
		if (Grades[i] == 'C' || Grades [i] == 'c' )
		{
			NoC++;
		}
		if (Grades[i] == 'D' || Grades [i] == 'd' )
		{
			NoD++;
		}
	}
	
	//output results to screen
	cout << "	No. of \"A\" scores = " << NoA << endl;
	cout << "	No. of \"B\" scores = " << NoB << endl;
	cout << "	No. of \"C\" scores = " << NoC << endl;
	cout << "	No. of \"D\" scores = " << NoD << endl;
	system("pause");
	return 0;
}
/*--------------------------Output---------------------------------
Enter 10 Grades(A,B,C,D): AbbBCCAAdD
        No. of "A" scores = 3
        No. of "B" scores = 3
        No. of "C" scores = 2
        No. of "D" scores = 2
Press any key to continue . . .
------------------------------------------------------------------*/