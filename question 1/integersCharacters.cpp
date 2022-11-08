#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int num1, num2;
    float total;
    char operations;

    cout << "Enter first integer: ";
    cin >> num1;

    cout << "Enter second integer: ";
    cin >> num2;

    cout << "Enter an operation: ";
    cin >> operations;

    switch (operations) {
        case '+':
            total = num1 + num2;
            break;
        case '-':
            total = num1 - num2;
            break;
        case '*':
            total = num1 * num2;
            break;
        case '/':
            total = (float)num1 / (float)num2;
            break;
        default:
            cout << "Invalid operation" << endl;
            break;
    }

    if (operations == '+' || operations == '-' || operations == '*' || operations == '/') {
        cout << num1 << " " << operations << " " << num2 << " = " << total << endl;
    }

    return 0;
}