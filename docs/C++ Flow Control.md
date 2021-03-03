# C++ Flow Control

## C++ if, if...else and Nested if...else

### C++ if Statement

```c
if (condition) {
   // body of if statement
}
```

### C++ if...else

```c
if (condition) {
    // block of code if condition is true
}
else {
    // block of code if condition is false
}
```

### C++ if...else...else if statement

```c
if (condition1) {
    // code block 1
}
else if (condition2){
    // code block 2
}
else {
    // code block 3
}
```

### C++ Nested if...else

```c
// outer if statement
if (condition1) {
    // statements

    // inner if statement
    if (condition2) {
        // statements
    }
}
```

## C++ for Loop

```c
for (initialization; condition; update) {
    // body of-loop 
}
```

### Ranged Based for Loop for C++11

```c
for (variable : collection) {
    // body of loop
}
```

### C++ Infinite for loop

```c
// infinite for loop
for(int i = 1; i > 0; i++) {
    // block of code
}
```

## C++ while and do...while Loop

### C++ while Loop

```c
while (condition) {
    // body of the loop
}
```

### C++ do...while Loop

```c
do {
   // body of loop;
}
while (condition);
```

### Infinite while loop

```c
// infinite while loop
while(true) {
    // body of the loop
}
```

## C++ break Statement

terminates the loop when it is encountered

```c
break;
```

## C++ continue Statement

used to skip the current iteration of the loop and the control of the program goes to the next iteration

```c
continue;
```

## C++ switch..case Statement

allows us to execute a block of code among many alternatives

```c
switch (expression)  {
    case constant1:
        // code to be executed if 
        // expression is equal to constant1;
        break;

    case constant2:
        // code to be executed if
        // expression is equal to constant2;
        break;
        .
        .
        .
    default:
        // code to be executed if
        // expression doesn't match any constant
}
```

## C++ goto Statement

used for altering the normal sequence of program execution by transferring control to some other part of the program

```c
goto label;
... .. ...
... .. ...
... .. ...
label: 
statement;
... .. ...
```
