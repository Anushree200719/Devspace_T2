/*
Problem: An array contains distinct integers from 1 to n, with one number missing. Find the missing number.

Input:
4
1 2 4 5

Expected Output:
3

Logic:
Calculate the expected sum of numbers from 1 to n using n * (n + 1) / 2 and subtract the sum of the supplied elements.

Algorithm / Steps:
1. Read size (the number of elements provided in the array).
2. Read the size elements and compute their sum.
3. Determine n = size + 1 (the full range 1 to n).
4. Compute expected sum = n * (n + 1) / 2.
5. The missing number is expected sum - sum.
6. Print the missing number.
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size;
    cin >> size;

    vector<long long> arr(size);
    long long sum = 0;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    long long n = size + 1;
    long long expected = n * (n + 1) / 2;

    cout << expected - sum << endl;

    return 0;
}
