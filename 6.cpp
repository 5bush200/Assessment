//a program to input a character from the user and print its ASCII code.
#include <iostream>
using namespace std;
int main() {
   char character;
   cout << "Enter a character: ";
   cin >> character;
   int ascii_code = static_cast<int>(character);
   cout << "The ASCII code of '" << character << "' is: " << ascii_code << endl;
   return 0;
}