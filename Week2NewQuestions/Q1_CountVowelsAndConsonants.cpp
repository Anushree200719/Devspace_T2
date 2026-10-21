/*
Problem: Count vowels and consonants in a given string.

Input:
HelloWorld

Expected Output:
Vowels: 3
Consonants: 7

Logic:
Check each alphabetic character, ignoring spaces, digits, and punctuation. Count a, e, i, o, u as vowels.

Algorithm / Steps:
1. Read the input string including whitespace using getline.
2. Initialize counters: vowels = 0 and consonants = 0.
3. Iterate through each character of the string.
4. Check if the character is an alphabetic character using isalpha.
5. If alphabetic, convert it to lowercase.
6. If the lowercase character is 'a', 'e', 'i', 'o', or 'u', increment vowels.
7. Otherwise, increment consonants.
8. Print the count of vowels and consonants.
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    int vowels = 0;
    int consonants = 0;

    for (char ch : s)
    {
        unsigned char c = static_cast<unsigned char>(ch);

        if (isalpha(c))
        {
            char lower = static_cast<char>(tolower(c));

            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;

    return 0;
}
