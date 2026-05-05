#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double base, exp;

    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exp;

    if (base == 0 && exp == 0) {
        cout << "undefined" << endl;
    } else if (base == 0 && exp < 0) {
        cout << "Division by zero!" << endl;
    } else if (base < 0 && exp != (int)exp) {
        cout << "Complex number result" << endl;
    } else {
        cout << pow(base, exp) << endl;
    }

    return 0;
}