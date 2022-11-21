#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int studyType, semester;
    float cgpa, parentsYearlyIncome, totalScholarship;

    cout << "1 - Diploma at Public University --> RM2500 per semester\n2 - Bachelor at Public University --> RM 3500 per semester\n3 - Diploma at Private University --> RM3000 per semester\n4 - Bachelor at Private University --> RM4500 per semester" << endl;

    cout << "\nEnter your type of study: ";
    cin >> studyType;

    cout << "Enter your CGPA: ";
    cin >> cgpa;

    // if (studyType == 1 || studyType == 3) {
    //     if (cgpa <= 3.3) {
    //         cout << "You are not eligible for any scholarship" << endl;
    //         return 1;
    //     }
    // }else if()

    cout << "Enter the number of semester you want to study: ";
    cin >> semester;

    cout << "Enter your parents yearly income: ";
    cin >> parentsYearlyIncome;

    semester -= 1;

    if (cgpa > 4.0) {
        cout << "\nInvalid CGPA" << endl;
    } else if (parentsYearlyIncome < 50000) {
        switch (studyType) {
            case 1:
                if (cgpa >= 3.3) {
                    totalScholarship = 2500 * semester;
                } else {
                    cout << "\nYou are not eligible for scholarship" << endl;
                    return 1;
                }
                break;
            case 2:
                if (cgpa >= 3.0) {
                    totalScholarship = 3500 * semester;
                } else {
                    cout << "\nYou are not eligible for scholarship" << endl;
                    return 1;
                }
                break;
            case 3:
                if (cgpa >= 3.3) {
                    totalScholarship = 3000 * semester;
                } else {
                    cout << "\nYou are not eligible for scholarship" << endl;
                    return 1;
                }
                break;
            case 4:
                if (cgpa >= 3.0) {
                    totalScholarship = 4500 * semester;
                } else {
                    cout << "\nYou are not eligible for scholarship" << endl;
                    return 1;
                }
                break;
            default:
                cout << "Invalid study type" << endl;
                break;
        }
        cout << fixed << setprecision(2) << "\nTotal scholarship from Yayasan Setia Bakti: RM" << totalScholarship << endl;
    } else {
        cout << "\nYou're not qualified for this scholarship" << endl;
    }

    return 0;
}