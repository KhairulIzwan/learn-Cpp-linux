// program to add two numbers using a function

#include <iostream>

using namespace std;

// declaring a function
int add(int a, int b)
{
	return (a + b);
}

int main()
{
	int sum;
	
	// calling the function and storing
	// the returned value in sum
	sum = add(100, 78);
	
	cout << "100 + 78 = " << sum << endl;
	
	return 0;
}
