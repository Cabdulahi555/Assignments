#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  string FN; // first name
  string item; // item name which is one word
  double price; // price of item
  string date; // to grab day month year
  const double TAX = 7.75; // sales tax rate
  char ch;

  // new added code updated on 02/25/2025
  // input from user
  
  cout << "This program will ask for today's date, the sales person's name, item name and price. It will then show the store receipt including the sales tax and total purchase price. When you are ready, please enter to continue the program.";
  cin.get(ch);
  cout << "Enter today's date: ";
  cin >> date;
  cin.ignore(100, '\n');
  cout << "Enter sales person's name: ";
  getline(cin, FN);
  cout << "Enter the item name: ";
  getline(cin, item);
  cout <<"Enter the price of the item: ";
  cin >> price;


  // calculate tax and price to new price

  double SalesTax = (price * TAX/100); // to get sales tax of price
  double total = SalesTax + price; // add sales tax to original price

  // time to output
  cout << fixed << setprecision(2); // for correct output of money
  cout << endl << left << setw(30) << "------------------------------"<< endl; // header
  cout << endl << left << setw(30)<< "\"Your Friendly Neighbor Store\"" << endl << endl;
  cout << right << setw(30) << date << endl;
  cout << setw(30) << FN << endl << endl << endl;
  cout << left << setw(20)<< item << right << setw(10) << price << endl;
  cout << left << setw(20) << "SalesTax" << right << setw(10)<< SalesTax << endl;
  cout << left << setw(20) << "Total" << right << setw(10) << total <<  endl;
  cout << "------------------------------" << endl;
  cout << "Thank you for shopping with us !"<< endl << endl;


  return 0;

}
