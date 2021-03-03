// program to find the sum of positive numbers
// if the user enters a negative numbers, break ends the loop
// the negative number entered is not added to sum

#include <iostream>
//using namespace std;

int main() {
	int number;
	int sum = 0;
	
	while (true)
	{
		// take input from the user
		std::cout << "Enter a number: ";
		std::cin >> number;
		
		// break condition
		if (number < 0)
		{
			break;
		}
		
		// add all positive numbers
		sum += number;
	}
	
	// display the sum
	std::cout << "The sum is " << sum << std::endl;
	
	return 0;
}
