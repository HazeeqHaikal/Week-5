#include <cmath>
#include <iostream>
#include <string>

using namespace std;

int main() {
    int x, y, b, c;
    float Z;

    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    Z = (3 / (5 * y)) + (x / sqrt(4 * b * c));
    cout << "Z = " << Z << endl;


    int V, t;
    float R;

    cout << "Enter V: ";
    cin >> V;
    cout << "Enter t: ";
    cin >> t;

    R = (V * t) + (0.2 * pow(t, 4));
    cout << "R = " << R << endl;
    
    return 0;
}