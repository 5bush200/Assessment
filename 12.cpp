//a program that takes a person's age as input and classifies them into different age groups (e.g., child, teenager, adult, senior).
#include <iostream>
using namespace std;
int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age < 0) {
        cout << "Invalid age. Please enter a non-negative value." << endl;
    } else if (age <= 12) {
        cout << "You are classified as a Child." << endl;
    } else if (age <= 19) {
        cout << "You are classified as a Teenager." << endl;
    } else if (age <= 64) {
        cout << "You are classified as an Adult." << endl;
    } else {
        cout << "You are classified as a Senior." << endl;
    }

    return 0;
}