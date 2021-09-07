#include <iostream>
#include "decimals.h"
using std::cout; using std::cin;

int main()
{
    double num1, sum;
    cout << "Enter a number: " ;
    cin >> num1;
    sum = add_to_double_1 (num1);
    cout << "The sum of " << num1 << " and 0.9 is " << sum << "\n";

    sum = add_to_double_2(num1);
    cout << "The sum of " << num1 << " and 1.5 is " << sum << "\n";

    return 0;
}