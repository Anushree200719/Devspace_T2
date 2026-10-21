/*
Problem: Print the following pattern for n = 4.

Input:
4

Expected Output:
1
12
123
1234

Logic:
Use nested loops. Each row prints numbers from 1 up to its row number.

Algorithm / Steps:
1. Read an integer n representing the number of rows.
2. Loop variable i from 1 to n (representing each row):
   a. Loop variable j from 1 to i (representing numbers in the row):
      i. Print j.
   b. Print a newline.
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << j;

        cout << endl;
    }

    return 0;
}
