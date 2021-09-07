#include <iostream>
#include "char.h"
using std::cout; using std::cin;

int main()
{
    char letter;
    cout <<"Enter a letter and I'll return you a numeric value of the letter: ";
    cin >> letter;
    int num;
    num = get_char_ascii_value (letter);
    cout << "The numeric value of letter " << letter << " is " << num << ". \n";

    return 0;
}