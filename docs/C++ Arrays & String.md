# C++ Arrays & String

## C++ Arrays

### C++ Array Declaration

```c
dataType arrayName[arraySize];
```

### Access Elements in C++ Array

```c
// syntax to access array elements
array[index];
```

### C++ Array Initialization


```c
// declare and initialize and array
int x[6] = {19, 10, 8, 17, 9, 15};

// or

// declare and initialize an array
int x[] = {19, 10, 8, 17, 9, 15};
```

### How to insert and print array elements?

```c
int mark[5] = {19, 10, 8, 17, 9}

// change 4th element to 9
mark[3] = 9;

// take input from the user
// store the value at third position
cin >> mark[2];


// take input from the user
// insert at ith position
cin >> mark[i-1];

// print first element of the array
cout << mark[0];

// print ith element of the array
cout >> mark[i-1];
```

## C++ Multidimensional Arrays

### Initialization of two-dimensional array

```c
int  test[2][3] = { {2, 4, 5}, {9, 0, 19}};
```

###  Initialization of three-dimensional array

```c
int test[2][3][4] = { 
                     { {3, 4, 2, 3}, {0, -3, 9, 11}, {23, 12, 23, 2} },
                     { {13, 4, 56, 3}, {5, 9, 3, 5}, {5, 1, 4, 9} }
                 };
```

## Passing Array to a Function in C++ Programming

### Syntax for Passing Arrays as Function Parameters

```c
returnType functionName(dataType arrayName[arraySize]) {
    // code
}
```

## C++ Strings

### How to define a C-string?

```c
char str[] = "C++";
```
