# moaz-mohamed-project
Multiple implementations of power function in C++
# Power of Numbers

A C++ program that calculates the power of a number.

## Features
- Handles positive and negative exponents
- Handles fractional exponents using pow()
- Error handling for special cases (0^0, division by zero, complex numbers)
  
Loop Implementation Logic:

Variable n: Introduced to handle negative exponents by converting them to positive for the while loop iteration, then calculating the reciprocal (1/result).

Special Case Handling:

0^0: Returns "Undefined".

0^-ve: Prevents "Division by Zero".

Negative Base + Fractional Exponent: Returns "Math Error" to avoid complex number issues in basic real-number calculations.

## Error Cases
- 0^0 → Math Error
- 0^negative → Math Error
- negative^fraction → Math Error

## How to Run
```bash
g++ main.cpp -o main
./main
```
