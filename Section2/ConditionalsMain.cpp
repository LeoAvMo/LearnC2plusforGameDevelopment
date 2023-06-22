#include <iostream>
using namespace std;

int main()
{
	// Initializing variables;
	int a(1);
	int b = 13;
	cout << "a = " << a << ", b = " << b << endl;
	system("pause");
	// Conditional that will be executed if the condition is true
	if (b<a)
	{
		cout << "b is less than a." << endl;
	}
	else
	{
		cout << "b is not less than a." << endl;
	}
	system("pause");
	// Rewriting the value of a;
	a = 13;
	cout << "a = " << a << ", b = " << b << endl;
	if (b < a)
	{
		cout << "b is less than a." << endl;
	}
	else if (a < b)
	{
		cout << "a is less than b." << endl;
	}
	else
	{
		cout << "a is equal to b." << endl;
	}
	system("pause");
	return 0;
}