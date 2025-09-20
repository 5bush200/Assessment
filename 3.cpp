//calculate the circumference of a circle
#include <iostream>     
using namespace std;

int main() {  
    float radius, circumference;  
    const float PI = 3.14159;  
    cout << "Enter the radius of the circle: ";  
    cin >> radius;  
    circumference = 2 * PI * radius;  
    cout << "Circumference of the circle with radius " << radius << " is " << circumference << endl;  
    return 0;  
    }  
