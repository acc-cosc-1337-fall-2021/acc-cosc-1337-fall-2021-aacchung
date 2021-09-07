#include <iostream>
#include "expressions.h"
#include <iomanip>
using std::cout; using std::cin; using std::endl; using std::fixed; using std::showpoint; using std::setprecision;
//using namespace std;

int main()
{
    int num1, num2, num3;
    int result;
    cout << "Enter 3 integer numbers and I'll show some calculations: ";
    cin >> num1 >> num2 >> num3;
    
    result = operator_precedence_1(num1, num2, num3);
    cout << num1 << " + " << num2 << " / " << num3 << " = " << fixed << showpoint << setprecision(2) << result << endl;

    result = operator_precedence_2(num1, num2, num3);
    cout << "(" << num1 << " + " << num2 <<") / " << num3 << " = " << fixed << showpoint << setprecision(2) << result << endl;

    result = operator_precedence_3(num1, num2, num3);
    cout << num1<< " / " << num2 << " * " << num3 << " = " << fixed << showpoint << setprecision(2) << result << endl;

    result = operator_precedence_4(num1, num2, num3);
    cout << "(" << num1 << " / " << num2 << ") * " << num3 << " = " << fixed << showpoint << setprecision(2) << result << endl;

    return 0;
}