//a program to ask user about the cost price and selling price banana per dozen. Calculate the profit or loss earned upon selling 25 bananas.
#include <iostream>
using namespace std;
int main() {
   float cost_price_per_dozen, selling_price_per_dozen, cost_price_per_banana, selling_price_per_banana;
   float total_cost_price, total_selling_price, profit_or_loss;

   cout << "Enter cost price per dozen bananas: ";
   cin >> cost_price_per_dozen;
   cout << "Enter selling price per dozen bananas: ";
   cin >> selling_price_per_dozen;

   cost_price_per_banana = cost_price_per_dozen / 12;
   selling_price_per_banana = selling_price_per_dozen / 12;

   total_cost_price = cost_price_per_banana * 25;
   total_selling_price = selling_price_per_banana * 25;

   profit_or_loss = total_selling_price - total_cost_price;

   if (profit_or_loss > 0) {
       cout << "Profit earned: " << profit_or_loss << endl;
   } else if (profit_or_loss < 0) {
       cout << "Loss incurred: " << -profit_or_loss << endl;
   } else {
       cout << "No profit, no loss." << endl;
   }

   return 0;
}