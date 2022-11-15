#include <iostream>
#include <string>

using namespace std;

int main() {
    int no1 = 5050, no2 = 500, no3 = 4;
    double no4 = 200.0;

    cout << no1 / no2 * no3 / 2 + 1 << endl;
    int result = no1 % no2 - no3 + no2 / no4;
    cout << result;

    return 0;
}