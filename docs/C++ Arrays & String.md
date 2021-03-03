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