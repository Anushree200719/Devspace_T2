# Devspace Task 2 — Week 2 C++ Programming Solutions

This repository contains the complete C++17 implementations for Week 2 programming questions, organized in the `Week2NewQuestions` folder.

Each program contains its complete problem statement, input specification, expected output, underlying logic, and step-by-step algorithm in a clean documentation header, followed by comment-free source code.

---

## 📁 Repository Structure

```text
├── .gitignore
├── README.md
└── Week2NewQuestions/
    ├── Q1_CountVowelsAndConsonants.cpp
    ├── Q2_SecondLargestNumber.cpp
    ├── Q3_NumberPattern.cpp
    ├── Q4_ArmstrongNumber.cpp
    ├── Q5_CountDigits.cpp
    ├── Q6_CharacterType.cpp
    ├── Q7_FibonacciSeries.cpp
    ├── Q8_MissingNumber.cpp
    ├── Q9_StarTrianglePattern.cpp
    └── Q10_InvertedNumberPattern.cpp
```

---

## 📋 Problem Index & Summary

| # | Question File | Problem Description | Sample Input | Expected Output |
|---|---|---|---|---|
| 1 | [`Q1_CountVowelsAndConsonants.cpp`](Week2NewQuestions/Q1_CountVowelsAndConsonants.cpp) | Count the vowels and consonants in a string (case-insensitive, ignoring non-alphabetic characters). | `HelloWorld` | `Vowels: 3`<br>`Consonants: 7` |
| 2 | [`Q2_SecondLargestNumber.cpp`](Week2NewQuestions/Q2_SecondLargestNumber.cpp) | Find the second-largest number among three distinct integers without sorting. | `10 25 18` | `18` |
| 3 | [`Q3_NumberPattern.cpp`](Week2NewQuestions/Q3_NumberPattern.cpp) | Print a right-angled number pattern from 1 up to row `n`. | `4` | `1`<br>`12`<br>`123`<br>`1234` |
| 4 | [`Q4_ArmstrongNumber.cpp`](Week2NewQuestions/Q4_ArmstrongNumber.cpp) | Check if a non-negative integer is an Armstrong number. | `153` | `Armstrong Number` |
| 5 | [`Q5_CountDigits.cpp`](Week2NewQuestions/Q5_CountDigits.cpp) | Count total digits in an integer (including zero as 1 digit). | `58392` | `5` |
| 6 | [`Q6_CharacterType.cpp`](Week2NewQuestions/Q6_CharacterType.cpp) | Classify a character as an Alphabet, Digit, or Special Character. | `@` | `Special Character` |
| 7 | [`Q7_FibonacciSeries.cpp`](Week2NewQuestions/Q7_FibonacciSeries.cpp) | Generate and print the first `n` terms of the Fibonacci sequence. | `6` | `0 1 1 2 3 5` |
| 8 | [`Q8_MissingNumber.cpp`](Week2NewQuestions/Q8_MissingNumber.cpp) | Find the single missing number from an array containing numbers from `1` to `n`. | `4`<br>`1 2 4 5` | `3` |
| 9 | [`Q9_StarTrianglePattern.cpp`](Week2NewQuestions/Q9_StarTrianglePattern.cpp) | Print an increasing star triangle pattern of `n` rows. | `5` | `*`<br>`**`<br>`***`<br>`****`<br>`*****` |
| 10 | [`Q10_InvertedNumberPattern.cpp`](Week2NewQuestions/Q10_InvertedNumberPattern.cpp) | Print an inverted number pattern starting with `n` digits decreasing to 1. | `5` | `12345`<br>`1234`<br>`123`<br>`12`<br>`1` |

---

## 🛠️ Compilation & Execution

All programs are written in **C++17** and can be compiled using `g++` or any standard C++17 compliant compiler.

### Single Program Example (e.g. Q1)

```bash
# Compile
g++ -std=c++17 Week2NewQuestions/Q1_CountVowelsAndConsonants.cpp -o Q1

# Run
./Q1
```

### Batch Compilation (PowerShell / Windows)

```powershell
Get-ChildItem -Path ".\Week2NewQuestions\*.cpp" | ForEach-Object {
    g++ -std=c++17 $_.FullName -o "$($_.DirectoryName)\$($_.BaseName).exe"
}
```

---

## 🧪 Verification & Test Results

All 10 programs have been tested and verified against their specified sample inputs:

- **Q1**: `HelloWorld` ➔ `Vowels: 3`, `Consonants: 7` ✅
- **Q2**: `10 25 18` ➔ `18` ✅
- **Q3**: `4` ➔ rows `1`, `12`, `123`, `1234` ✅
- **Q4**: `153` ➔ `Armstrong Number` ✅
- **Q5**: `58392` ➔ `5` ✅
- **Q6**: `@` ➔ `Special Character` ✅
- **Q7**: `6` ➔ `0 1 1 2 3 5` ✅
- **Q8**: `4` with `1 2 4 5` ➔ `3` ✅
- **Q9**: `5` ➔ 5 rows of `*` ✅
- **Q10**: `5` ➔ rows `12345`, `1234`, `123`, `12`, `1` ✅
