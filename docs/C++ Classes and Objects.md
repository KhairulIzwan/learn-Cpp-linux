# C++ Classes and Objects

## C++ Class

### Create a Class

```c
class className 
{
   // some data
   // some functions
};
```

example

```c
class Room 
{
    public:
        double length;
        double breadth;
        double height;   

        double calculateArea()
        {   
            return length * breadth;
        }

        double calculateVolume()
        {   
            return length * breadth * height;
        }

};
```

```c
class Test
{
    private:
        int a;

    void function1()
    { 

    }

    public:
        int b;

    void function2()
    {

    }
}
```

## C++ Objects

### Syntax to Define Object in C++

```c
className objectVariableName;
```

example

```c
// sample function
void sampleFunction()
{
    // create objects
    Room room1, room2;
}

int main()
{
    // create objects 
    Room room3, room4;
}
```

### C++ Access Data Members and Member Functions

```c
room2.calculateArea();
room1.length = 5.5;
```

## C++ Constructors

```c
class  Wall
{
    public:

    // create a constructor
    Wall()
    {
        // code
    }
};
```

### C++ Parameterized Constructor
### C++ Copy Constructor

## How to pass and return object from C++ Functions?

## C++ Operator Overloading