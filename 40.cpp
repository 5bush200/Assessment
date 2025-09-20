//a program to check whether a given number is an Armstrong number or not. 
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int N;
    cout << "Enter a positive integer N: ";
    cin >> N;

    if (N < 0) {
        cout << "Please enter a non-negative integer." << endl;
        return 1;
    }

    int originalNumber = N;
    int sum = 0;
    int numDigits = 0;

    // Calculate the number of digits
    int temp = N;
    while (temp != 0) {
        temp /= 10;
        ++numDigits;
    }
    if (numDigits == 0) numDigits = 1; // For the case when N is 0

    // Calculate the sum of the cubes of each digit
    temp = N;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, numDigits); // Raise digit to the power of numDigits
        temp /= 10;
    }
    if (originalNumber == 0) sum = 0; // Special case for 0

    if (sum == originalNumber) {
        cout << originalNumber << " is an Armstrong number." << endl;
    } else {
        cout << originalNumber << " is not an Armstrong number." << endl;
    }

    return 0;
}