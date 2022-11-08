#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "1 - APPLE iPhone 5S\n2 - Samsung Galaxy Note 3\n3 - Samsung Galaxy Note 2\n4 - LG Nexus 5 LTE\n5 - Sony Xperia Z Ultra" << endl;

    int selection;
    string phoneModel;
    float price, priceAfterDiscount;

    cout << "Enter the number of the phone you want to buy: ";
    cin >> selection;

    switch (selection) {
        case 1:
            phoneModel = "APPLE iPhone 5S";
            price = 2260;
            break;
        case 2:
            phoneModel = "Samsung Galaxy Note 3";
            price = 2098;
            break;
        case 3:
            phoneModel = "Samsung Galaxy Note 2";
            price = 1499;
            break;
        case 4:
            phoneModel = "LG Nexus 5 LTE";
            price = 1579;
            break;
        case 5:
            phoneModel = "Sony Xperia Z Ultra";
            price = 1419;
            break;
        default:
            cout << "Invalid selection." << endl;
    }

    priceAfterDiscount = price * 0.75;

    cout << "\nSelected mobile phone is: " << phoneModel << endl;
    cout << fixed << setprecision(2) << "The price of the phone before discount is: RM" << price << endl;
    cout << fixed << setprecision(2) << "The price of the phone after discount is: RM" << priceAfterDiscount << endl;

    return 0;
}