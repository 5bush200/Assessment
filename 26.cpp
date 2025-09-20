//a program to calculate sum of cubes of first N natural numbers 
#include <iostream>
using namespace std;
int main() {
    int N;
    cout << "Enter a positive integer N: ";
    cin >> N;

    if (N <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    int sum = 0;
    for (int i = 1; i <= N; ++i) {
        sum += i * i * i; // Adding the cube of the ith natural number
    }

    cout << "The sum of the cubes of the first " << N << " natural numbers is: " << sum << endl;

    return 0;
}