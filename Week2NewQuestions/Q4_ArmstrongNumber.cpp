/*
Problem: Determine whether a non-negative integer is an Armstrong number. A number is Armstrong if the sum of each digit raised to the number of digits equals the original number.

Input:
153

Expected Output:
Armstrong Number

Logic:
Count the digits, extract each digit, raise it to the digit count, and calculate the sum.

Algorithm / Steps:
1. Read a non-negative integer n.
2. If n is negative, output "Not an Armstrong Number" and terminate.
3. Count the total number of digits in n by repeatedly dividing a temporary copy by 10.
4. Extract each digit from n using modulo 10 and division by 10.
5. Raise each extracted digit to the power of the total digit count.
6. Accumulate the powered digits into sum.
7. Compare sum with original value n:
   - If sum == n, print "Armstrong Number".
   - Else, print "Not an Armstrong Number".
*/

#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    if (n < 0)
    {
        cout << "Not an Armstrong Number" << endl;
        return 0;
    }

    long long temp = n;
    int digits = 0;

    do
    {
        digits++;
        temp /= 10;
    } while (temp != 0);

    temp = n;
    long long sum = 0;

    do
    {
        int digit = temp % 10;
        long long power = 1;

        for (int i = 0; i < digits; i++)
            power *= digit;

        sum += power;
        temp /= 10;
    } while (temp != 0);

    if (sum == n)
        cout << "Armstrong Number" << endl;
    else
        cout << "Not an Armstrong Number" << endl;

    return 0;
}
