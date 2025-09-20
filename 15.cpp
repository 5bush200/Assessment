// a program that takes the lengths of three sides of a triangle as input and determines whether the triangle is equilateral, isosceles, or scalene.
#include <iostream>
using namespace std;
int main() {
    double side1, side2, side3;
    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;

    if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
        cout << "Invalid side lengths. Please enter positive values." << endl;
    } else if (side1 == side2 && side2 == side3) {
        cout << "The triangle is Equilateral." << endl;
    } else if (side1 == side2 || side2 == side3 || side1 == side3) {
        cout << "The triangle is Isosceles." << endl;
    } else {
        cout << "The triangle is Scalene." << endl;
    }

    return 0;
}