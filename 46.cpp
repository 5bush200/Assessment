
#include <iostream>

using namespace std;

int main() {
    int n = 4; 

    
    for (int i = 1; i <= n; i++) {
        
        if (i == 1) {
            for (int j = 1; j < 6; j++) {
                cout << " ";
            }
            cout << "* * * *"; 
        } else if (i == 2) {
            for (int j = 1; j <= 5; j++) {
                cout << " ";
            }
            cout << "" << " " << "";
        } else if (i == 3) {
            for (int j = 1; j <= 5; j++) {
                cout << " ";
            }
            cout << "* " << " *";
        }
        cout << endl;
    }
    
    
    for (int j = 1; j <= 9; j++) {
        cout << "*";
    }
    cout << endl;

    
    for (int i = 1; i <= 3; i++) {
        
        if (i == 1) {
            for (int j = 1; j <= 5; j++) {
                cout << " ";
            }
            cout << "* " << " *";
        } else if (i == 2) {
            for (int j = 1; j <= 5; j++) {
                cout << " ";
            }
            cout << "* " << " *";
        } else {
            for (int j = 1; j <= 5; j++) {
                cout << " ";
            }
            cout << "* " << "* * *";
        }
        cout << endl;
    }
    
    return 0;
}