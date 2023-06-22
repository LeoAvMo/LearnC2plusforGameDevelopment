#include <iostream>
using namespace std;

int main() 
{
	// Simple Hello World!
	cout << "Hello World!" << endl; //Statement
	system("pause"); //Statement saying the last statement has ended
	

	//Declaring variables

	//Character
	char myCharacter;
	//Single quotes are for single characters, double quotes are for strings
	myCharacter = 'y';		// char data type can only hold one character

	//Integer
	int myInt;
	myInt = 13;

	cout << myCharacter << endl;
	cout << myInt << endl;

	//Overwriting data
	myCharacter = 'n';
	myInt = 10;

	cout << myCharacter << endl;
	cout << myInt << endl;
	system("pause");
	
	// Conditionals
	
	// The statements of an if conditional won't run if the expression(s) are not met
	// You can use an else to make other statements in case the condition isn't met
	/*if (Expression) 
	{
		...Statements
	}
	*/

	int a = 5;
	int b = 6;
	if (a == b) 
	{
		cout << "a and b are equal" << endl;

	}
	else
	{
		cout << "a and b are different" << endl;
	}
	system("pause");
	return 0;

}