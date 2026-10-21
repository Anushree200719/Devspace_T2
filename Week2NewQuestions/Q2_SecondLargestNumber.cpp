/*
Problem: Given three distinct integers, find the second-largest without sorting.

Input:
10 25 18

Expected Output:
18

Logic:
Track the largest and second-largest values through comparisons.

Algorithm / Steps:
1. Read three distinct integers: a, b, and c.
2. Compare a and b:
   - If a > b, initialize largest = a and second = b.
   - Else, initialize largest = b and second = a.
3. Compare c with largest and second:
   - If c > largest, update second = largest and largest = c.
   - Else if c > second, update second = c.
4. Print the second-largest number.
*/

#include <iostream>
using namespace std;

int main()
{
    long long a, b, c;
    cin >> a >> b >> c;

    long long largest, second;

    if (a > b)
    {
        largest = a;
        second = b;
    }
    else
    {
        largest = b;
        second = a;
    }

    if (c > largest)
        second = largest;
    else if (c > second)
        second = c;

    cout << second << endl;

    return 0;
}
