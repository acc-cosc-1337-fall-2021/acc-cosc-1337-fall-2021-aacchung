//write include statements
#include <iostream>
#include "data_types.h"

//write namespace using statement for cout
using std::cout; using std::cin;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	int num;
	cout << "Enter an integer: ";
	cin >> num;
	int result;
	result = multiply_numbers(num);
	cout << num << " x 5 = " << result << "\n";

	int num1 = 4;
	result = multiply_numbers (num1);
	cout << num1 << " x 5 = " << result << "\n";

	return 0;
}
