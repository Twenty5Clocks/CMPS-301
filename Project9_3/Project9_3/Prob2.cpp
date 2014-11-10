//---------------------------------------------------------------
//           Name         Jeremy Driesler
//           Course       CMPS-301
//           Due          November 10, 2014
//           Project No   No.9 Part 3
//           Professor    Ray Ahmadnia
//
//   This Program Displays
//To see my currency exchange table, please
// enter the table size: 10
//
//              $         ¥         ε         £
//            ▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀
//              1      114.30      0.80      0.63
//              2      228.60      1.60      1.26
//              3      342.90      2.40      1.89
//              4      457.20      3.20      2.52
//              5      571.50      4.00      3.15
//              6      685.80      4.80      3.78
//              7      800.10      5.60      4.41
//              8      914.40      6.40      5.04
//              9     1028.70      7.20      5.67
//             10     1143.00      8.00      6.30
//Press any key to continue . . .
//
// 
//----------------------------------------------------------------
#include <iostream>
#include <iomanip>


using namespace std;

const float D_TO_YEN = 114.30;
const float D_TO_EURO = 0.80;
const float D_TO_POUND = 0.63;

int main()
{
	//declare variables
	int TableLength;
	char dollar = 36;
	char yen = 157;
	char euro = 238;
	char pound = 156;
	char line = 223;


	//ask user for number of lines
	cout << "To see my currency exchange table, please" << endl << " enter the table size: "; cin >> TableLength;
	cout << endl;

	cout << showpoint << fixed << setprecision(2);

	//print table header
	cout << right << setw(15) << dollar << right << setw(10) << yen << right << setw(10) << euro << right << setw(10) << pound << endl;
	cout << right << setw(13) << line;
	cout << setfill(line);
	cout << right << setw(35) << line << endl;
	cout << setfill(' ');

	//for loop to populate table
	for (int i = 1; i <= TableLength; i++)
	{
		cout << right << setw(15) << i << right << setw(12) << (i * D_TO_YEN) << right << setw(10) << 
			(i*D_TO_EURO) << right << setw(10) << (i*D_TO_POUND) << endl;
	}
	
	//terminate program
	system("pause");
	return 0;
}
/*--------------------------Output---------------------------------
To see my currency exchange table, please
 enter the table size: 10

              $         ¥         ε         £
            ▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀
              1      114.30      0.80      0.63
              2      228.60      1.60      1.26
              3      342.90      2.40      1.89
              4      457.20      3.20      2.52
              5      571.50      4.00      3.15
              6      685.80      4.80      3.78
              7      800.10      5.60      4.41
              8      914.40      6.40      5.04
              9     1028.70      7.20      5.67
             10     1143.00      8.00      6.30
Press any key to continue . . .
------------------------------------------------------------------*/