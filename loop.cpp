#include <iostream>
using namespace std;

int main()
{
    double base;
    double exponent;
    double n;
    double result = 1.0;

    cout << "Enter the base number please: ";
    cin >> base;
    cout << "Enter the exponent number please: ";
    cin >> exponent;


    if (base == 0 && exponent == 0) {
        cout << "Error: 0^0 is undefined!" << endl;
        return 1;
    }

    if (base == 0 && exponent < 0) {
        cout << "Error: Division by zero! " << endl;
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
    if (exponent < 0) n = -exponent;
    else n = exponent;

    int i = 1;
    while (i <= n) {
        result = result * base;
        i++;
    }

    if (exponent < 0)
        result = 1 / result;

    cout << "The result is: " << result << endl;
    return 0;
}
