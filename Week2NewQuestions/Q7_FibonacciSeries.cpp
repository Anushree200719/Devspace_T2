/*
Problem: Generate and print the first n Fibonacci numbers.

Input:
6

Expected Output:
0 1 1 2 3 5

Logic:
Start with 0 and 1. Each next number is the sum of the previous two numbers. Print numbers in the standard forward order.

Algorithm / Steps:
1. Read an integer n representing the count of Fibonacci terms to display.
2. Initialize the first two terms: a = 0 and b = 1.
3. Loop i from 0 up to n - 1:
   a. If i > 0, print a space separator.
   b. Print current term a.
   c. Calculate next term = a + b.
   d. Update a = b and b = next.
4. Print a newline.
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long a = 0;
    long long b = 1;

    for (int i = 0; i < n; i++)
    {
        if (i > 0)
            cout << " ";

        cout << a;

        long long next = a + b;
        a = b;
        b = next;
    }

    cout << endl;

    return 0;
}
