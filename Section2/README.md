# Section 2

## Getting started with Hello World :)!

```C++
#include <iostream>
using namespace std;

int main() 
{
  // Simple Hello World!
  cout << "Hello World!" << endl; //Statement
  system("pause"); //Statement saying the last statement has ended
  return 0;
}
```
## Variable declaration and overwriting 
```C++
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
```
