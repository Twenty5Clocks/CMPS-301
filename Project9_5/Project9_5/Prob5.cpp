//---------------------------------------------------------------
//           Name         Jeremy Driesler
//           Course       CMPS-301
//           Due          November 10, 2014
//           Project No   No.9 Part 5
//           Professor    Ray Ahmadnia
//
//   This Program Displays
//Enter 10 Votes: yNNNYnyynN
//        YES VOTES=4 =* * * *
//        NO  VOTES=6 =* * * * * *
//Press any key to continue . . .
// 
//----------------------------------------------------------------
#include <iostream>
#include <string>

using namespace std;

int main()
{

	//declare variables
	string Votes;
	int NoY = 0, NoN = 0;

	//prompt user to input grades
	cout << "Enter 10 Votes: "; cin >> Votes;

	//for loop to count grades;
	for (int i = 0; i < Votes.length(); i++)
	{
		if (Votes[i] == 'Y' || Votes [i] == 'y' )
		{
			NoY++;
		}
		if (Votes[i] == 'N' || Votes [i] == 'n' )
		{
			NoN++;
		}
		
	}
	
	//output results to screen
	cout << "	YES VOTES=" << NoY << " =";
	for (int i = 0; i <NoY ; i++)
	{
		cout << "* ";
	}
	cout << endl;
	cout << "	NO  VOTES=" << NoN << " =";
	for (int i = 0; i <NoN ; i++)
	{
		cout << "* ";
	}
	cout << endl;

	//terminate program
	system("pause");
	return 0;
}
/*--------------------------Output---------------------------------
Enter 10 Votes: yNNNYnyynN
        YES VOTES=4 =* * * *
        NO  VOTES=6 =* * * * * *
Press any key to continue . . .
------------------------------------------------------------------*/