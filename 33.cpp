// a program to print first N terms of Fibonacci series.
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

    int a = 0, b = 1;
    cout << "The first " << N << " terms of the Fibonacci series are: ";
    for (int i = 1; i <= N; ++i) {
        cout << a << " ";
        int nextTerm = a + b; 
        a = b;              
        b = nextTerm;       
    }
    cout << endl;

    return 0;
}