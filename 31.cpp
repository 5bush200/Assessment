// a program to reverse a given number
#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    int reversedNumber = 0;
    int originalNumber = number; // Store the original number for display

    while (number != 0) {
        int digit = number % 10; // Extract the last digit
        reversedNumber = reversedNumber * 10 + digit; // Append it to the reversed number
        number /= 10; // Remove the last digit from the original number
    }

    cout << "The reverse of " << originalNumber << " is: " << reversedNumber << endl;

    return 0;
}