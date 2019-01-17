// Constructor and Destructor example
#include <iostream>
using namespace std;

class Demo
{
public:
	Demo();		// Constructor prototype
	~Demo();	// Destructor prototype
};

Demo::Demo()
{
	cout << "Constructing the object" << endl;
}

Demo::~Demo()
{
	cout << "Destroying the object" << endl;
}
/*
int main()
{
	Demo demoObj;

	cout << "The object now exists, but will be destroyed soon! AHHHHH \n";
	return 0;
}
*/