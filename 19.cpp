//a program that takes a month (as an integer from 1 to 12) and a year as input, then prints the number of days in that month, considering leap years.
#include <iostream>
using namespace std;
int main() {
    int month, year;
    cout << "Enter month (1-12): ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;

    int days;

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 2:
            // Check for leap year
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                days = 29;
            } else {
                days = 28;
            }
            break;
        default:
            cout << "Invalid month. Please enter a value between 1 and 12." << endl;
            return 1;
    }

    cout << "Number of days in month " << month << " of year " << year << " is: " << days << endl;

    return 0;
}