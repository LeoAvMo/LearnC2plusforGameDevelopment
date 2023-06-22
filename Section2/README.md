# Section 2

This will be the folder for the code and notes taken during **Section 2: Input/Output Streams, Varibles, Truth Values, Relational Operators**.
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

## Statement and Expressions 📥📤

- **Expression**: Combines things, returns a value. *Examples:*
```C++
2+2
"hello"
```
- **Statement**: Executes a sequence of operations, carry out an action without returning a value. It doesn't return something, but changes things. *Example:* 
```C++
int x;
```
- **Expression Statement**: There can be an expression inside of a statement, this is called Expression Statement. *Example:*
```C++
int x = 4;
int y = x + 1;
```

## Truth values 🟢🔴
*Resources: [Relational Operators](https://cplusplus.com/reference/list/list/operators/)*
### Main concept ☁️
0 or 1, yes or no, truth or false. The compiler treats any value other than 0 as True. Characters also have truth values becuase of ASCII.
|Value|True or False|
|-----|-------------|
|0|False|
|1| True |
|-1|True|
|00|False|
|0.00|False|
|0.000001|True|
### Relational operators 🙂😕
Used to compare things.
|Operator| Definition|Example|
|-|-|-|
|>|Greater than...| 5>4 is True|
|<|Less than...| 4<5 is True|
|>=|Greater than or equal...| 4>=4 is True, 5>=4 is True|
|<=| Less than or equal...| 4<=4 is True, 4<=6 is True|
|==| Equal to...| 5==5 is True|
|!=| Not equal to...| 5!=4 is True|
|!|Negation (Inverts the Boolean Value)|!False is True|

*Was that clear? Let's check an example: Is the output True or False?✅❎*

!(5!=4) is False

## Conditionals ☝️
The statements of an if conditional won't run if the expression(s) are not met. You can use an else to make other statements in case the condition isn't met. The basic syntax of and if statement is:
```C++
if (Expression) 
{
  ...Statements
}
```
Example of conditionals. What will the **output** be?
```C++
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
```
The machine will print "*a and b are different*" since the condition in the first if statement wasn't met.
