# Section 2

## Getting started with Hello World 💻!

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
## Variable declaration and overwriting 🔠🔢
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
## Fundamental Data Types 💡
*Resources: *[Basic of C++, Variables and types](https://cplusplus.com/doc/tutorial/variables/)*
### **Data type categories 📋**
- *Integral Data Types 1️⃣0️⃣*:

| Integral |   Storage required   |   Description |
| -------- | -------- | --------|
| *int* | 4 bytes | An integer value that can store up to 4 bytes. |
| short int (*short*) | Less than 4 bytes | An integer small enough that doesn't need 4 bytes to be stored. |
| long int (*long*) | Larger than 4 bytes | An integer larger than 4 bytes. |
| *char* | 1 byte | A single character. Use single quotations to declare it. |
| *bool* | 1 byte | Logical value, true or false (0 or 1). |

- *Floating Point Data Types ⭕*: These are composed by an integer component and a fractional component which is represented by numbers to the right of a decimal point. It is called *"floating point"* because the computer converts it to a scientific notation representation of that number. For example:

7289 = 7.289 x 10^3 = 7.289e3 

| Float |   Storage required   |   Description |
| -------- | -------- | --------|
| *float* | 4 bytes | Small floating point Data Type. Usually represents up to 2 decimals  |
| *double* | Larger than 4 bytes | Typically 8 bytes (double the size of a float). |

- *Void Data Types 🔮*: Describe a set of empty values and no variable of type *void* can be specifiied. *void* data types are mainly used to describe the return type for functions that don't return anything.
