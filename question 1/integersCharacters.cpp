#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int num1, num2, temp;
    float total;
    char operations;
    bool validity = false;

    cout << "Enter first integer: ";
    cin >> num1;

    cout << "Enter second integer: ";
    cin >> num2;

    cout << "Enter an operation: ";
    cin >> operations;

    switch (operations) {
        case '+':
            total = num1 + num2;
            validity = true;
            break;
        case '-':
            total = num1 - num2;
            validity = true;
            break;
        case '*':
            total = num1 * num2;
            validity = true;
            break;
        case '/':
            total = (float)num1 / (float)num2;
            validity = true;
            break;
        case '%':
            validity = true;
            total = num1 % num2;
            break;
        default:
            cout << "Invalid operation" << endl;
            break;
    }

    if(validity){
        cout << num1 << " " << operations << " " << num2 << " = " << total << endl;
    }

    return 0;
}