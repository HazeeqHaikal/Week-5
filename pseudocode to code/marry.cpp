#include <iostream>
#include <string>

using namespace std;

int main() {
    string status;
    float salary, tax;
    int numChild;

    cout << "Enter your salary: ";
    cin >> salary;

    cout << "Enter your status (single or married): ";
    cin >> status;

    for (auto& c : status) c = tolower(c);

    if (status == "married") {
        cout << "Enter the number of child: ";
        cin >> numChild;
        if (numChild > 5) {
            tax = 3.0 / 100.0 * salary;

        } else {
            tax = 2.5 / 100.0 * salary;
        }
    } else if (status == "single") {
        tax = 3.0 / 100.0 * salary;
    }

    cout << "The tax is: RM" << tax << endl;

    return 0;
}