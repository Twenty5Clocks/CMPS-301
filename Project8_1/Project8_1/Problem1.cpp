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
