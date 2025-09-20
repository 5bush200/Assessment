// program to input three characters from the user and display characters with their corresponding ASCII codes. 
#include <iostream>
using namespace std;    
int main() {
   char char1, char2, char3;
   cout << "Enter three characters: ";
   cin >> char1 >> char2 >> char3;

   int ascii_code1 = static_cast<int>(char1);
   int ascii_code2 = static_cast<int>(char2);
   int ascii_code3 = static_cast<int>(char3);

   cout << "Character: '" << char1 << "' ASCII Code: " << ascii_code1 << endl;
   cout << "Character: '" << char2 << "' ASCII Code: " << ascii_code2 << endl;
   cout << "Character: '" << char3 << "' ASCII Code: " << ascii_code3 << endl;

   return 0;
}
