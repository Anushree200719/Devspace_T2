/*
Problem: Print the following pattern for n = 5.

Input:
5

Expected Output:
12345
1234
123
12
1

Logic:
Use nested loops. The outer loop decreases the number of rows' digits from n to 1. Each row prints numbers from 1 to the current row length.

Algorithm / Steps:
1. Read an integer n representing the starting row count.
2. Loop variable i from n down to 1:
   a. Loop variable j from 1 to i:
      i. Print j.
   b. Print a newline.
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
            cout << j;

        cout << endl;
    }

    return 0;
}
