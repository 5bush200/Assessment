// a program to input an ASCII code from the user and print its corresponding character.
#include <iostream>
using namespace std;    
int main() {
   int ascii_code;
   cout << "Enter an ASCII code (0-127): ";
   cin >> ascii_code;

   if (ascii_code < 0 || ascii_code > 127) {
       cout << "Invalid ASCII code. Please enter a value between 0 and 127." << endl;
       return 1;
   }

   char character = static_cast<char>(ascii_code);
   cout << "The character corresponding to ASCII code " << ascii_code << " is: '" << character << "'" << endl;
   return 0;
}