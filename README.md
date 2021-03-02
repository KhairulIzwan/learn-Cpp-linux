# learn-Cpp-linux

# C++ Introduction

## C++ Variables, Literals and Constants

### C++ Variables

```c
int age = 14;
```

### C++ Literals

#### Integers

```c
Decimal: 0, -9, 22 etc
Octal: 021, 077, 033 etc
Hexadecimal: 0x7f, 0x2a, 0x521 etc
```

#### Floating-point Literals

```c
-2.0
0.0000234
-0.22E-5
```

#### Characters

```c
'a', 'm', 'F', '2', '}'
```

single character inside single quotation marks

#### Escape Sequences

Escape Sequences | Characters
------- | -------
**\b** | Backspace
**\f** | Form feed
**\n** | Newline
**\r** | Return
**\t** | Horizontal tab
**\v** | Vertical tab
**\\** | Backslash
**\'** | Single quotation mark
**\"** | Double quotation mark
**\?** | Question mark
**\0** | Null Character

#### String Literals

"good" string constant
"" null string constant
" " string constant of six white space
"x" string constant having a single character
"Earth is round\n" prints string with a newline

### C++ Constants

variables whose value cannot be changed

```c
const int LIGHT_SPEED = 299792458;
LIGHT_SPEED = 2500 // Error! LIGHT_SPEED is a constant.
```

## C++ Data Types

### C++ Fundamental Data Types

Data Type Meaning Size (in Bytes)
int Integer 2 or 4
float Floating-point 4
double Double Floating-point 8
char Character 1
wchar_t Wide Character 2
bool Boolean 1
void Empty 0

## C++ Basic Input/Output

### C++ Output

```c
#include <iostream>
using namespace std;

int main() {
 // prints the string enclosed in double quotes
 cout << "This is C++ Programming" << endl;
 
 // or
 std::cout << "This is C++ Programming" << endl;
 
 return 0;
}
```

### C++ Input

```c
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;   // Taking input
    cout << "The number is: " << num;
    return 0;
}
```

## C++ Type Conversion

### Implicit Type Conversion

```c
// Working of implicit type-conversion

#include <iostream>
using namespace std;

int main() {
   // assigning an int value to num_int
   int num_int = 9;

   // declaring a double type variable
   double num_double;
 
   // implicit conversion
   // assigning int value to a double variable
   num_double = num_int;

   cout << "num_int = " << num_int << endl;
   cout << "num_double = " << num_double << endl;

   return 0;
}
```

```c
//Working of Implicit type-conversion

#include <iostream>
using namespace std;

int main() {

   int num_int;
   double num_double = 9.99;

   // implicit conversion
   // assigning a double value to an int variable
   num_int = num_double;

   cout << "num_int = " << num_int << endl;
   cout << "num_double = " << num_double << endl;

   return 0;
}
```

### C++ Explicit Conversion

#### C-style Type Casting

```c
(data_type)expression;

// initializing int variable
int num_int = 26;

// declaring double variable
double num_double;

// converting from int to double
num_double = (double)num_int;
```

#### Function-style Casting

```c
data_type(expression);

// initializing int variable
int num_int = 26;

// declaring double variable
double num_double;

// converting from int to double
num_double = double(num_int);
```

## C++ Operators

### C++ Arithmetic Operators

Operator | Operation
-------- | --------
\+ | Addition
\- | Subtraction
\* | Multiplication
\/ | Division
\% | Modulo Operation (Remainder after division)

### Increment and Decrement Operators

```c
int num = 5;

// pre-increasing num by 1
++num;

// pre-decreasing num by 1
--num;

// post-increasing num by 1
num++;

// post-decreasing num by 1
num--;

```

### C++ Assignment Operators

Operator | Example | Equivalent to
-------- | -------- | --------
= | a = b; | a = b;
+= | a += b; | a = a + b;
-= | a -= b; | a = a - b;
*= | a *= b; | a = a * b;
/= | a /= b; | a = a / b;
%= | a %= b; | a = a % b;

### C++ Relational Operators

Operator | Meaning | Example
-------- | -------- | --------
== | Is Equal To | 3 == 5 gives us false
!= | Not Equal To | 3 != 5 gives us true
\> | Greater Than | 3 > 5 gives us false
< | Less Than | 3 < 5 gives us true
\>= | Greater Than or Equal To | 3 >= 5 give us false
<= | Less Than or Equal To | 3 <= 5 gives us true

### C++ Logical Operators

Operator | Example | Meaning
-- | -- | --
\&& | expression1 && expression2 | Logical AND. True only if all the operands are true.
\|\| | expression1 || expression2 | Logical OR. True if at least one of the operands is true.
! | !expression | Logical NOT. True only if the operand is false.

### C++ Bitwise Operators

can only be used alongside char and int data types

Operator | Description
-- | --
\& | Binary AND
\| | Binary OR
\^ | Binary XOR
\~ | Binary One's Complement
\<< | Binary Shift Left
\>> | Binary Shift Right

## C++ Comments

### Single Line Comments

```c
// declaring a variable
// initializing the variable 'a' with the value 2
```

### Multi-line comments

```c
/* declaring a variable
to store salary to employees
*/
```

** will be easier for us to understand the code in the future and will be easier for fellow developers to understand the code.


## References

1. [C++](https://www.programiz.com/cpp-programming/)
2. [How to compile and run the C++ program?](https://www.tutorialspoint.com/How-to-compile-and-run-the-Cplusplus-program)
