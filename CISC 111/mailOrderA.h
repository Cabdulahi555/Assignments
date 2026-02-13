//Your programmer number: #19

#include <iostream> //outputInvoice1 uses cout                                                                                  
#include <iomanip>  //for setw                                                                                              
using namespace std;

/**********************************************************
pr is the total price of all the items the customer is buying.
mo is the month when the customer is placing an order.

This function calculates a discount amount as follows and returns it.
Month ordered: Discount on total sale amount (before tax)
Jan – May: 5%
Jun – Aug: 10%
Sep – Dec: 15%
**********************************************************/
double calcDiscount(double pr, int mo)//you may not change parameters  
{
  double discount; // discount rate
  double d_pr; // discounted price

  if (mo >= 1 && mo <= 12) {  // Only check valid months
        if (mo <= 5) discount = 0.05;
        else if (mo <= 8) discount = 0.10;
        else discount = 0.15;  // Covers months 9-12
    } else {
        cout << "Please enter month 1-12 "<< endl;
        return 0; // No discount applied
    }

  d_pr = pr * discount;

  return d_pr;

}

/********************************************************
acc is the account number
co is the county code (uppercase S, O or L) 
m is month
d is day
y is year

This function will output the top half of the invoice.
*******************************************************/

void outputInvoice1(int acc, char co, int m, int d, int y)//you may not change parameters  
{
  string county;
   if (co == 'O') {
     county = "Orange County";
    }
    else if (co == 'S') {
        county = "San Diego";
    }
    else if (co == 'L') {
        county = "Los Angeles";
    }

  
  cout << endl;
  cout << setw(25) << left << "ACCOUNT NUMBER"  <<right<< "COUNTY" <<endl; 
  cout << setw(25) << left << acc << right << county;
  cout << endl<< endl;
  cout << setw(25) << left << "DATE OF SALE " << m << "/" <<d << "/" << y << endl;


}



