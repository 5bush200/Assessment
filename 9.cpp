//to take date as an input in below given format and convert the date format and display the result as given below. User Input date format – “DD/MM/YYYY” (27/11/2022) Output format – “Day – DD , Month – MM , Year – YYYY” (Day – 27, Month – 07, Year – 2022)
#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;
int main() {
    string dateInput;
    cout << "Enter a date in DD/MM/YYYY format: ";
    cin >> dateInput;

    // Using stringstream to parse the input date
    stringstream ss(dateInput);
    string day, month, year;

    getline(ss, day, '/');
    getline(ss, month, '/');
    getline(ss, year);

    // Displaying the result in the desired format
    cout << "Day - " << day << ", Month - " << month << ", Year - " << year << endl;

    return 0;
}