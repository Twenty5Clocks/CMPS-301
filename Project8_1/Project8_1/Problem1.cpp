//---------------------------------------------------------------
//           Name         Jeremy Driesler
//           Course       CMPS-301
//           Due          November 3, 2014
//           Project No   No.8 Part 1
//           Professor    Ray Ahmadnia
//
//   This Program Displays
//i.   5  10  15  20  25  30  35  40  45  50
//ii.  3  6  9  12  15  18  21  24  27  30  33  36
//iii. P  Q  R  S  T  U  V
//iv.  v  u  t  s  r  q  p
//Press any key to continue . . .
//
// 
//----------------------------------------------------------------
#include <iostream>

using namespace std;

int main()
{

	//use for loops to output desired sequences
	cout << "i.   ";
	for (int i = 5; i <= 50; i += 5)
	{
		cout << i << "  ";
	}
	cout << endl;
	cout << "ii.  ";
	for (int i = 3; i <= 36; i += 3)
	{
		cout << i << "  ";
	}
	cout << endl;
	cout << "iii. ";
	for (char i = 'P'; i <= 'V'; i++)
	{
		cout << i << "  ";
	}
	cout << endl;
	cout << "iv.  ";
	for (char i = 'v'; i >= 'p'; i--)
	{
		cout << i << "  ";
	}
	cout << endl;

	system("pause");
	return 0;
}
/*--------------------------Output---------------------------------
i.   5  10  15  20  25  30  35  40  45  50
ii.  3  6  9  12  15  18  21  24  27  30  33  36
iii. P  Q  R  S  T  U  V
iv.  v  u  t  s  r  q  p
Press any key to continue . . .
------------------------------------------------------------------*/