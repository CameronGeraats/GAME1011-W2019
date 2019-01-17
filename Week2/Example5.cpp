#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 8;
	int set[] = { 5, 10, 15, 20, 25, 30, 35, 40 };
	int* numPtr;

	numPtr = set;

	cout << "Address of numPtr is: " << numPtr << " ";

	for (int index = 0; index < SIZE; index++)
	{
		cout << *numPtr << endl;
		numPtr++;
		cout << "Address of numPtr is: " << numPtr << " ";
	}

	cout << "\n\n";

	for (int index = 0; index < SIZE; index++)
	{
		cout << *numPtr << endl;
		numPtr--;
		cout << "Address of numPtr is: " << numPtr << " ";
	}


	return 0;
}