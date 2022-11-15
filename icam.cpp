#include <iostream>

using namespace std;

int main() {

    int x, y, z, result;

    x = 0;
    y = 0;
    z = 0;
    
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;

    result = x * y * z;

    cout << "The product is " << result << endl;

    return 0;

}