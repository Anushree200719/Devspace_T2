/*
Problem: Determine whether a character is an alphabet, a digit, or a special character.

Input:
@

Expected Output:
Special Character

Logic:
Check the input character using alphabetic and numeric character classification.

Algorithm / Steps:
1. Read a single character ch.
2. Cast ch to unsigned char.
3. If isalpha(c) is true, print "Alphabet".
4. Else if isdigit(c) is true, print "Digit".
5. Otherwise, print "Special Character".
*/

#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char ch;
    cin >> ch;

    unsigned char c = static_cast<unsigned char>(ch);

    if (isalpha(c))
        cout << "Alphabet" << endl;
    else if (isdigit(c))
        cout << "Digit" << endl;
    else
        cout << "Special Character" << endl;

    return 0;
}
