//a program to find the Nth term of the Fibonacci series.
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

    int a = 0, b = 1, nthTerm;
    if (N == 1) {
        nthTerm = a;
    } else if (N == 2) {
        nthTerm = b;
    } else {
        for (int i = 3; i <= N; ++i) {
            nthTerm = a + b; 
            a = b;           
            b = nthTerm;    
        }
    }

    cout << "The " << N << "th term of the Fibonacci series is: " << nthTerm << endl;

    return 0;
}