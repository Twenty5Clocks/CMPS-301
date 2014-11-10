//---------------------------------------------------------------
//           Name         Jeremy Driesler
//           Course       CMPS-301
//           Due          November 10, 2014
//           Project No   No.9 Part 2
//           Professor    Ray Ahmadnia
//
//   This Program Displays
//Please enter the number of students: 5
//        Enter 5 scores: 85 75 55 95 88
//                Class Average: 79.60
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
	int NoStudents;
	int Grade, Total;
	float Average;
	Total = 0;
	//prompt user for input
	cout << "Please enter the number of students: "; cin >> NoStudents;
	cout << "	Enter 5 scores: ";

	//for loop for program
	for (int i = 0; i < NoStudents; i++)
	{
		cin >> Grade;
		Total += Grade;
	}

	//calculate total
	Average = (float)Total / NoStudents;
	cout << showpoint << fixed << setprecision(2);
	cout << "		Class Average: " << Average << endl << endl;


	//terminate program
	system("Pause");
	return 0;
}
/*--------------------------Output---------------------------------
Please enter the number of students: 5
        Enter 5 scores: 85 75 55 95 88
                Class Average: 79.60

Press any key to continue . . .
------------------------------------------------------------------*/