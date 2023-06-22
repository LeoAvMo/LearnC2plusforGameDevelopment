# Section 3. Scope, Identifiers, Keywords, and Functions

## Scope 🔍
Resources: [Scope](https://en.cppreference.com/w/cpp/language/scope)
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
