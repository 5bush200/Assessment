//a program to print all Prime numbers under 100. 
#include <iostream>
using namespace std;

int main() {
    cout << "Prime numbers under 100 are:" << endl;
    for (int num = 2; num < 100; ++num) {
        int is_prime = 1; // 1 means prime, 0 means not prime
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime == 1) {
            cout << num << " ";
        }
    }
    cout << endl;
    return 0;
}
