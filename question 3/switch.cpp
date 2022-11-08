#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main() {
    int option;
    float area;

    cout << "1 - Triangle\n2 - Rectangle\n3 - Eclipse\n4 - Square\n5 - Trapezoid\nChoose your shape: ";
    cin >> option;

    switch (option) {
        case 1:
            float base, height;
            cout << "Enter the base of the triangle: ";
            cin >> base;
            cout << "Enter the height of the triangle: ";
            cin >> height;
            area = 0.5 * base * height;
            cout << fixed << setprecision(2) << "The area of the triangle is " << area << endl;
            break;
        case 2:
            float length, width;
            cout << "Enter the length of the rectangle: ";
            cin >> length;
            cout << "Enter the width of the rectangle: ";
            cin >> width;
            area = length * width;
            cout << fixed << setprecision(2) << "The area of the rectangle is: " << area << endl;
            break;
        case 3:
            float radius1, radius2;
            cout << "Enter the radius of the eclipse: ";
            cin >> radius1;
            cout << "Enter the radius of the eclipse: ";
            cin >> radius2;
            area = 3.14 * radius1 * radius2;
            cout << fixed << setprecision(2) << "The area of the eclipse is: " << area << endl;
            break;
        case 4:
            float side;
            cout << "Enter the side of the square: ";
            cin >> side;
            area = side * side;
            cout << fixed << setprecision(2) << "The area of the square is: " << area << endl;
            break;
        case 5:
            float base1, base2, height1;
            cout << "Enter the base of the trapezoid: ";
            cin >> base1;
            cout << "Enter the base of the trapezoid: ";
            cin >> base2;
            cout << "Enter the height of the trapezoid: ";
            cin >> height1;
            area = 0.5 * (base1 + base2) * height1;
            cout << fixed << setprecision(2) << "The area of the trapezoid is: " << area << endl;
            break;
        default:
            cout << "Invalid selection." << endl;
    }

    return 0;
}