#include <iostream>
using namespace std;

int main() {
    double base, result = 1;
    int exp, n;

    cout << "Enter base: "; cin >> base;
    cout << "Enter exponent: "; cin >> exp;

    if (exp < 0) n = -exp;
    else n = exp;

    int i = 1;
    while (i <= n) {
        result *= base;
        i++;
    }

    if (exp < 0) result = 1 / result;

    cout << result << endl;

    return 0;
}