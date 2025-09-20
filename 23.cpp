//a program to calculate sum of first N even natural numbers 
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
        sum += 2 * i; // Adding the ith even natural number
    }

    cout << "The sum of the first " << N << " even natural numbers is: " << sum << endl;

    return 0;
}