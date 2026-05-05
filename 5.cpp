#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double base, exp;

    cout << "Enter base: "; cin >> base;
    cout << "Enter exponent: "; cin >> exp;

    if (base == 0 && exp == 0) {
        cout << "0^0 undefined" << endl;
        return 0;
    }
    if (base == 0 && exp < 0) {
        cout << "Division by zero!" << endl;
        return 0;
    }
    if (base < 0 && exp != (int)exp) {
        cout << "Complex number result" << endl;
        return 0;
    }

    switch ((int)exp) {
        case 0: cout << 1 << endl; break;
        case 1: cout << base << endl; break;
        case 2: cout << base * base << endl; break;
        case 3: cout << base * base * base << endl; break;
        default: cout << pow(base, exp) << endl; break;
    }

    return 0;
}