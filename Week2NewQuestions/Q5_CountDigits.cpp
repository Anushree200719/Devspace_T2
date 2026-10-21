/*
Problem: Count the total number of digits in an integer.

Input:
58392

Expected Output:
5

Logic:
Repeatedly divide the absolute value by 10 and count the iterations. Treat zero as a one-digit number.

Algorithm / Steps:
1. Read an integer n.
2. Convert n to its absolute unsigned magnitude (handling negative numbers properly).
3. Initialize count = 0.
4. Using a do-while loop:
   a. Increment count by 1.
   b. Divide the value by 10.
   c. Continue while value != 0.
5. Print count.
*/

#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    unsigned long long value = static_cast<unsigned long long>(n);
    if (n < 0)
        value = 0ULL - value;

    int count = 0;

    do
    {
        count++;
        value /= 10;
    } while (value != 0);

    cout << count << endl;

    return 0;
}
