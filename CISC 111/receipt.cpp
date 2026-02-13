/************************************************************************************************************************************
Cabdulahi Hussein
CS111 kslott
Lab week 4 IOMANIP

This program will ask for sales persons name, date, item name, item price and tax and output a receipt.

***************************************************************************************************************************************/
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


  
    // input from user
  
  cout << "Enter sales person's name: ";
  cin >> FN;
  cout <<"Enter today's date (mm/dd/yy): ";
  cin >> date;
  cout << "Enter the item name: ";
  cin >> item;
  cout << "Enter the price of the item: ";
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
