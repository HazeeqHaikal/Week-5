#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int maskType, maskQuantity;
    float price;
    cout << "1 - Face mask 2 ply --> RM0.20 each mask\n2 - Face mask 3 ply --> RM0.50 each mask" << endl;

    cout << "\nEnter the type of mask you want to buy: ";
    cin >> maskType;

    cout << "Enter the quantity of mask you want to buy: ";
    cin >> maskQuantity;

    switch (maskType) {
        case 1:
            price = maskQuantity * 0.20;
            break;
        case 2:
            price = maskQuantity * 0.50;
            break;
        default:
            cout << "Invalid mask type" << endl;
            break;
    }

    cout << fixed << setprecision(2) << "\nTotal price: RM" << price << endl;
    cout << "Thank you!" << endl;

    return 0;
}