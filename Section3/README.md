# Section 3. Scope, Identifiers, Keywords, and Functions

## Scope 🔍
*Resources: [Scope](https://en.cppreference.com/w/cpp/language/scope)*
### Definition and examples 📖
Curly braces represent **scope**. Everything inside the **scope** is defined for that block. From the starting curly brace to the finishing cruly brace is a *block*. Inside the *block*, there is what is known as **local scope**. 
```C++
int main()
{   //Starting the block

  //Local scope
  return 0;
  
}   //Ending the block
```
This means that variables outside of the **main()** function won't be recognized.
```C++
int main()
{
  //This variable cannot be used outside of the main() function
  int a = 10;
  return 0;
}
```
In the following example, the variable a won't be recognized becuase it is not declared in the main function. It is outside of its scope and the compiler will throw an error.
```C++
int main()
{
  {
  int a = 10;
  }
  cout << a << endl;
  return 0;
}
```
### Global variables 🌎
If you declare a variable outside of the *main()* function, it becomes a **global variable**. This type of variables exist in the scope of all blocks.
```C++
int a = 15;
int main()
{
  cout << a << endl;
  return 0;
}
```
The value of a (15) will be printed. But... what happens if you try to change the value of a inside a nested block in the **main()** function?
```C++
int a = 15;
int main()
{
  {
    int a = 10;
  }
  cout << a << endl;
  return 0;
}
```
The machine will print 15 since it doesn't know that the variable a = 10 that is inside the nested block exists. Outer blocks don't have access to variables in the inner blocks, but inner blocks have access to variables in the outer blocks.
## Identifiers 🏷️
*Resources: [Identifiers](https://en.cppreference.com/w/cpp/language/identifiers)*

A name assigned to a program element (like variables, types, functions, namespaces, templates, classes, etc.).  You can name identifiers using letters, numbers, and underscores.

### Case sensitive ⚠️
myInt is different from MyInt, these are 2 separate variables. Capitalization matters.
### Illegal identifiers
There are some rules to how you can write identifiers. It cannot start with a number or a character outside of letters or undersocres. It cannot contain characters apart from letters, numbers, and underscores. Some non-valid identifiers can be: 
```C++
$MyInt  //Cannot use $ sign
+data+  //Cannot use operators (+)
32MyChar  //Cannot start with numbers
**special_variable**  //Cannot use operators (*)
my-Bool  //Cannot use operators(-)
```
### Conventions 🤝
Little details most programmers do to name their variables.
- **Camel-case**: The first letter of the variable is a lower case and if the variable consists of multiple words, the others start with a capital letter. Example: **myFirstInt**. Variables start with lower cases because class identifiers are usually written with capital letters.
- **Naming**: Be descriptive with the variable's name so the code can be mmore interactive and redable. Example: **xCoordinate**.
