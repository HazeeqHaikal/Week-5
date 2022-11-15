#include <cmath>
#include <iostream>

using namespace std;
#define PI 3.14159

int main() {
    float triangle, radius, circle, areaShaded;

    cout << "Enter the area of the triangle: ";
    cin >> triangle;

    radius = sqrt(2 * triangle);
    circle = PI * pow(radius, 2);

    areaShaded = circle - (triangle * 2);

    cout << "\nThe total area of triangle is: " << triangle * 2 << endl;
    cout << "The area of circle is: " << circle << endl;
    cout << "The area of the shaded region is: " << areaShaded << endl;

    return 0;
}