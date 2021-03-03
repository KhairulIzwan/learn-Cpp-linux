# C++ Functions

## C++ User-defined Function

### C++ Function Declaration

```c
returnType functionName (parameter1, parameter2,...) {
    // function body   
}
```

## Types of User-defined Functions in C++

### Function with no argument and no return value

### Function with no argument but return value

### Function with argument but no return value

### Function with argument and return value

## C++ Function Overloading

functions having the same name but different arguments are known as overloaded functions

```c
// same name different arguments
int test() { }
int test(int a) { }
float test(double a) { }
int test(int a, double b) { }
```

## C++ Programming Default Arguments (Parameters)

## C++ Storage Class

### Local variable

- A variable defined inside a function (defined inside function body between braces) is called a local variable or automatic variable.
- Its scope is only limited to the function where it is defined. In simple terms, local variable exists and can be accessed only inside a function.
- The life of a local variable ends (It is destroyed) when the function exits.

### Global variable

- If a variable is defined outside all functions, then it is called a global variable.
- The scope of a global variable is the whole program. This means, It can be used and changed at any part of the program after its declaration.
- Likewise, its life ends only when the program ends.

### Static local variable

- Keyword static is used for specifying a static variable.
- A static local variable exists only inside a function where it is declared (similar to a local variable) but its lifetime starts when the function is called and ends only when the program ends.
- The main difference between local variable and static variable is that, the value of static variable persists the end of the program.

### Register Variable (Deprecated)

### Thread Local Storage

## C++ Recursion

- A function that calls itself is known as a recursive function.

```c
void recurse()
{
    ... .. ...
    recurse();
    ... .. ...
}

int main()
{
    ... .. ...
    recurse();
    ... .. ...
}
```

## C++ Return by Reference

```c
#include <iostream>
using namespace std;

// Global variable
int num;

// Function declaration
int& test();

int main()
{
    test() = 5;

    cout << num;

    return 0;
}

int& test()
{
    return num;
}
```