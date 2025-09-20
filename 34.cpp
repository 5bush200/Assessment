// a program to check whether a given number is there in the Fibonacci series or not. 
#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    if (N < 0) {
        cout << N << " is not a Fibonacci number." << endl;
        return 0;
    }

    int a = 0, b = 1;
    if (N == a || N == b) {
        cout << N << " is a Fibonacci number." << endl;
        return 0;
    }

    int nextTerm = a + b;
    while (nextTerm <= N) {
        if (nextTerm == N) {
            cout << N << " is a Fibonacci number." << endl;
            return 0;
        }
        a = b;
        b = nextTerm;
        nextTerm = a + b;
    }

    cout << N << " is not a Fibonacci number." << endl;
    return 0;
}
