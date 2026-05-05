#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double base, exponent, result;

    cout << "Enter the base number please: ";
    cin >> base;
    cout << "Enter the exponent number please: ";
    cin >> exponent;

    if (base == 0 && exponent == 0) {
        cout << "Math Error!" << endl;
        return 1;
    }
    if (base == 0 && exponent < 0) {
        cout << "Math Error!" << endl;
        return 1;
    }
    if (base == 0 && (int)exponent != exponent) {
        cout << "The result is: 0" << endl;
        return 0;
    }
    if (base < 0 && (int)exponent != exponent) {
        cout << "Math Error!" << endl;
        return 1;
    }

    result = pow(base, exponent);

    cout << "The result is: " << result << endl;
    return 0;
}