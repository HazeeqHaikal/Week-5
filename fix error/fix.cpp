#include <cstring>
#include <iostream>

using namespace std;

int main() {
    char result[40];

    float price;
    cout << "Enter your price: ";
    cin >> price;

    if (price >= 100 && price <= 500) {
        strcpy(result, "AFFORDABLE");
    } else
        strcpy(result, "VERY EXPENSIVE");

    cout << "The result is " << result << endl;

    return 0;
}