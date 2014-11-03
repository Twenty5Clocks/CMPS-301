//---------------------------------------------------------------
//           Name         Jeremy Driesler
//           Course       CMPS-301
//           Due          November 3, 2014
//           Project No   No.8 Part 3
//           Professor    Ray Ahmadnia
//
//   This Program Displays
//Enter the table size: 10
//        $       Yen       B.Pound     Euro
//        ------------------------------------
//         1    113.83        0.63      0.80
//         2    227.66        1.26      1.60
//         3    341.49        1.89      2.40
//         4    455.32        2.52      3.20
//         5    569.15        3.15      4.00
//         6    682.98        3.78      4.80
//         7    796.81        4.41      5.60
//         8    910.64        5.04      6.40
//         9   1024.47        5.67      7.20
//        10   1138.30        6.30      8.00
//Press any key to continue . . .
//
// 
//----------------------------------------------------------------
#include <iostream>
#include <iomanip>

using namespace std;

const float DOLLAR_YEN = 113.83;
const float DOLLAR_POUND = 0.63;
const float DOLLAR_EURO = 0.80;


int main()
{
	//declare variables
	int Size;

	//ask for user input
	cout << "Enter the table size: "; cin >> Size;

	cout << fixed << showpoint << setprecision(2);

	//output title bar
	cout << "\t" << left << setw(8) << "$" << left << setw(10) << "Yen" << left << setw(12) << "B.Pound" << left << setw(8) << "Euro" << endl;
	cout << setfill('-');
	cout << "\t" << right << setw(36) << '-' << endl;
	cout << setfill(' ');

	//for loop to output conversions
	for (int i = 1; i <= Size; i++)
	{
		cout << right << setw(10) << i << right << setw(10) << (DOLLAR_YEN*i) << right << setw(12) << (DOLLAR_POUND*i) << right << setw(10) << (DOLLAR_EURO*i) << endl;
	}


	//terminate program
	system ("pause");
	return 0;
}
/*--------------------------Output---------------------------------
Enter the table size: 10
        $       Yen       B.Pound     Euro
        ------------------------------------
         1    113.83        0.63      0.80
         2    227.66        1.26      1.60
         3    341.49        1.89      2.40
         4    455.32        2.52      3.20
         5    569.15        3.15      4.00
         6    682.98        3.78      4.80
         7    796.81        4.41      5.60
         8    910.64        5.04      6.40
         9   1024.47        5.67      7.20
        10   1138.30        6.30      8.00
Press any key to continue . . .
------------------------------------------------------------------*/
