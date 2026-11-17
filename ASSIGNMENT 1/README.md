# Assignment 1 - Reliable Billing Program for a Rural Electricity Co-operative

- **Name**: Dariga P M
- **Register Number**: 19652601760
- **Compiler and Version**: gcc version 13.x (or whichever gcc version you are using in the lab)

## Exact gcc Commands to Compile:
- Task 2: `gcc -o task2 task02.c`
- Task 3: `gcc -o task3 task03.c`
- Task 4: `gcc -o task4 task04.c`

## Steps to Run:
1. Open terminal in the respective task folder.
2. Compile using the command above: `./task2` (or `.\\task2.exe` on Windows).

## Results Summary:
- Successfully handled 16-bit unsigned meter rollovers without conditional branches.
- Implemented slab-based billing using paise (integers) to completely eliminate floating-point rounding errors across 4,000+ households.
- Utilized fully parenthesized safe macros to prevent preprocessor evaluation pitfalls.
