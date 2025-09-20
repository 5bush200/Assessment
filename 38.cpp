//a program to print all Prime numbers between two given numbers
#include <iostream>
using namespace std;

int main() {
    cout << "Prime numbers under 100 are:" << endl;
    for (int num = 2; num < 100; ++num) {
        int is_prime = 1;
        if (num <= 1) {
            is_prime = 0;
        } else {
            for (int i = 2; i * i <= num; ++i) {
                if (num % i == 0) {
                    is_prime = 0;
                    break;
                }
            }
        }
        if (is_prime) {
            cout << num << " ";
        }
    }
    cout << endl;
    return 0;
}
