// a program to count digits in a given number
#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter a non-negative integer: ";
    cin >> number;

    if (number < 0) {
        cout << "Please enter a non-negative integer." << endl;
        return 1;
    }

    int count = 0;
    if (number == 0) {
        count = 1; 
    } else {
        while (number != 0) {
            number /= 10; 
            ++count;      
        }
    }

    cout << "The number of digits is: " << count << endl;

    return 0;
}