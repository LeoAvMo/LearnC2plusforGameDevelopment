#include <iostream>
using namespace std;

//Function that welcomes the user. It has a void return value and no parameters.
void welcomeUser() 
{
	cout << "Welcome!" << endl;
}

// Function that prints a number it receives as a parameter
void printIntParameter(int intToPrint) 
{
	cout << intToPrint << endl;
}

//Function that takes 2 int parameters and returns the sum of them.
int add(int a, int b)
{
	int result = a + b;
	return result;
}

int main() 
{
	//Calling the functions
	welcomeUser();
	printIntParameter(10);
	int c = add(5, 7);
	printIntParameter(c);

	system("pause");
	return 0;
}