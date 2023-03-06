#include <iostream>
#include <iomanip>

using namespace std;
int main() {

  //defined number of items
  int corndogs1;
  int chilidogs1;
  int chips1;
  int softdrinks1;
  int water1;

  //defined multiplying functions
  double Taxable;
  double Tax_amount;
  double Non_taxable;
  double Total;

  //defined constant values
  const double chilidogs2 = 8.5;
  const double corndogs2 = 7.0;
  const double chips2 = 2.5;
  const double softdrinks2 = 4.5;
  const double water2 = 4.0;
  const double Taxrate = 0.065;

  //created a 3rd value to put the number of items and constants
  double chilidogs3;
  double corndogs3;
  double chips3;
  double softdrinks3;
  double water3;

  //user inputs the number of items
  cout << "How many chili dogs were sold? ";
  cin >> chilidogs1;
cout << "How many corn dogs were sold? ";
  cin >> corndogs1;
cout << "How many bags of chips were sold? ";
  cin >> chips1;
cout << "How many soft drinks were sold? ";
  cin >> softdrinks1;
cout << "How many bottles of water were sold? " << endl;
  cin >> water1;

  //multiplies number of items by the constant values
  chilidogs3 = chilidogs1 * chilidogs2;
  corndogs3 = corndogs1 * corndogs2;
  chips3 = chips1 * chips2;
  softdrinks3 = softdrinks1 * softdrinks2;
  water3 = water1 * water2;

  //determine taxable items, tax amounts, non_taxables, and total values
  Taxable = chilidogs3 + corndogs3 + chips3 + softdrinks3;
  Tax_amount = Taxable * Taxrate;
  Non_taxable = water3;
  Total = Taxable + Tax_amount + Non_taxable;
 //provides a clean interface to display the taxable, tax amounts, non taxables, and total
  cout << setprecision(2) << fixed;
  cout << setw(15) << left << "Taxable: " <<setw(1) << "$" << right << setw(10) <<Taxable <<endl;
  cout << setw(15) << left << "Tax amount: " <<setw(1) << "$" << right << setw(10) <<Tax_amount <<endl;
  cout << setw(15) << left << "Non-taxable: " <<setw(1) << "$" << right << setw(10) <<Non_taxable <<endl;
  cout << setw(15) << left << "Total: " <<setw(1) << "$" << right << setw(10) <<Total <<endl;
  
return 0;
}