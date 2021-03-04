# C++ Structures

## How to declare a structure in C++ programming?

```c
struct Person
{
    char name[50];
    int age;
    float salary;
};
```

### How to define a structure variable?

```c
Person bill;
```

### How to access members of a structure?

```c
bill.age = 50;
```

## C++ Structure and Function

### Passing structure to function in C++

### C++ Pointers to Structure

```c
#include <iostream>
using namespace std;

struct temp {
    int i;
    float f;
};

int main() {
    temp *ptr;
    return 0;
}
```

```c
ptr->i is same as (*ptr).i
ptr->f is same as (*ptr).f
```

### C++ Enumeration

```c
enum season { spring, summer, autumn, winter };
```