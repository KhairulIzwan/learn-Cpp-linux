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
"good"	string constant
""	null string constant
" "	string constant of six white space
"x"	string constant having a single character
"Earth is round\n"	prints string with a newline
### C++ Constants
variables whose value cannot be changed
```c
const int LIGHT_SPEED = 299792458;
LIGHT_SPEED = 2500 // Error! LIGHT_SPEED is a constant.
```

## C++ Data Types
### C++ Fundamental Data Types
Data Type	Meaning	Size (in Bytes)
int	Integer	2 or 4
float	Floating-point	4
double	Double Floating-point	8
char	Character	1
wchar_t	Wide Character	2
bool	Boolean	1
void	Empty	0

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

## References
1. [C++](https://www.programiz.com/cpp-programming/)
2. [How to compile and run the C++ program?](https://www.tutorialspoint.com/How-to-compile-and-run-the-Cplusplus-program)
