#include <iostream>
#include <string>

using namespace std;

int main() {
    int code;

    cout << "Enter the code (1, 2, 3 or 4):";
    cin >> code;

    if (code == 1)
        cout << "Diploma in Computer Science." << endl;
    else if (code == 2)
        cout << "Diploma in Accountacy." << endl;
    else if (code == 3)
        cout << "Diploma in Business Study." << endl;
    else if (code == 4)
        cout << "Diploma in Banking." << endl;
    else
        cout << "Invalid code." << endl;

    return 0;
}