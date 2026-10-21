/*
Problem: Print the supplied pattern of five rows.

Input:
5

Expected Output:
*
**
***
****
*****

Logic:
Use nested loops to print an increasing number of stars on each row.

Algorithm / Steps:
1. Read an integer n representing the number of rows.
2. Loop variable i from 1 to n (representing each row):
   a. Loop variable j from 1 to i:
      i. Print "*".
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
            cout << "*";

        cout << endl;
    }

    return 0;
}
