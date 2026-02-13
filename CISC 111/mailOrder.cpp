/***********************************************************************************************************
Cabdulahi Hussein
Prof. Slott
Homework mailorder
This program will grab files and also calculate discount prices based on location and package weight, and print out an invioce.
**************************************************************************************************************/

#include <iostream>
#include "input.h"
 
#include "/cs/slott/hw/39mailOrderA.h" /* double calcDiscount(double pr, int mo),  
void outputInvoice1(int acc, char co, int m, int d, int y) */ 
 
#include "/cs/slott/hw/28mailOrderB.h" /* double calcShipping(int tw), void outputInvoice2(double total, double 
disc, double tax, double ship) */                  
 
#include "/cs/slott/hw/mailOrderC.h"  /* double calculateSalesTax(double total, double disc, char co)*/ 

using namespace std;
// parameters
void getCustomerInfo(int &acc, int &m, int &d, int &y, char &co);
void getItemsInfo (double &totalSale, int &totalWeight, char &ans);

int main()
{
  double totalSale, discount, STax, shipping;
  int acc, month, day, year, totalWeight;
  char county, response;
  
  getCustomerInfo(acc, month, day, year, county);
  
  getItemsInfo(totalSale, totalWeight, response);

  discount = calcDiscount(totalSale, month);

  shipping = calcShipping(totalWeight);

  outputInvoice1(acc, county, month, day, year);

  STax = calculateSalesTax(totalSale, discount, county);

  cout << endl;
  
  outputInvoice2(totalSale, discount, STax, shipping);
  
    return 0;
}

void getCustomerInfo(int &acc, int &m, int &d, int &y, char &co) 
{

  cout << "Enter an account number: ";
  // range for account number 1000-999
  acc = getInt( 1000, 9999, "An account number must be 1000 - 9999. Enter again:  ");

  cout << endl;
  cout << "Enter a month: ";
  // months range from 1 - 12
   m = getInt( 1, 12, "A month must be 1 - 12. Enter again: ");

   cout << endl;
  cout <<"Enter a day: ";
  // days range 1-31
  d = getInt(1, 31, "A day must be 1 - 31. Enter again: ");

  cout << endl;
  cout <<"Enter a year: ";
  // years must be 2000-2100
  y = getInt( 2000, 2100,"A year must be 2000 - 2100. Enter again: ");

  cout << endl;
  //grab county code while rejecting anything that isnt S L or O
  cout << "Enter a county code. Enter S, O or L: ";
  cin >> co;
  while (co != 'S' && co != 'O' && co != 'L')
    {
        cout << "Invalid county code. Enter uppercase  S, O or L: ";
        cin >> co;
    }
}

void getItemsInfo (double &totalSale, int &totalWeight, char &ans)
{
  // totalSale is total sale amount
  // totalWeight is total Weight amount
  // ans is Answer (Y or N)
  
  totalSale = 0.00;
  totalWeight = 0;
  
   // for price entered upon request
  double price;

  //for weight entered upon request
  int weight;
  
  cout << endl;
  cout <<"Do you want to order an item? Enter Y or N: ";
  ans = getYN("Invalid response. Enter Y or N: ");
  
  while(ans == 'Y')
    { cout << endl;
      cout <<"Enter a price: ";
      // price range is between 0.00 and 999.99
      price = getDouble(0.00, 999.99, "A price must be between 0.00 and 999.99. Enter again: ");

  cout << endl;
  cout <<"Enter a weight: ";
  // weight range is between 0 and 99
  weight = getDouble(0, 99, "A weight must be between 0 and 99. Enter again: ");

  totalSale += price;
  totalWeight += weight;

  cout << endl;
   cout << "Do you want to order another item? Enter Y or N: ";
   ans = getYN("Invalid response. Enter Y or N: ");

    }
  cout << endl;
}

