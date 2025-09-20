//to take time as an input in below given format and convert the time format and display the result as given below. User Input date format – “HH:MM”
//Output format – “HH hour and MM Minute” (11 hour and 25 Minute)
#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;
int main() {
    string timeInput;
    cout << "Enter time in HH:MM format: ";
    cin >> timeInput;

    // Using stringstream to parse the input time
    stringstream ss(timeInput);
    string hours, minutes;

    getline(ss, hours, ':');
    getline(ss, minutes);

    // Displaying the result in the desired format
    cout << hours << " hour and " << minutes << " Minute" << endl;

    return 0;
}