#include <iostream>
#include <string>

using namespace std;

int main() {
    int numerator, denominator;
    float result;

    cout << "Enter numerator: ";
    cin >> numerator;

    cout << "Enter denominator: ";
    cin >> denominator;

    if (denominator != 0) {
        result = (float)numerator / (float)denominator;
        cout << "Result: " << result << endl;
    } else {
        cout << "Division will not take place because division cannot be divide with 0" << endl;
    }

    return 0;
}