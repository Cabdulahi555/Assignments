/**************************************************************************************************
Cabdulahi Hussein
Prof Slott
testmailOrder.cpp
This program will test my mailOrder.h functions 
**************************************************************************************************/
#include <iostream>
#include "mailOrderA.h"
using namespace std;
int main()
{
  
  int acc;
  char co;
  int m;
  int d;
  int y;

  cin >> acc;
  cin >> co;
  cin >> m;
  cin >> d;
  cin >> y;

  outputInvoice1(acc, co, m, d, y);
  return 0;
  

  /*
   double total_price; // input
  int month; // month
  double dis_Price; // discounted price

  cout<<"Please enter the price "<<endl;
  cin>> total_price;
  cout<<"Please enter the month."<<endl;
  cin>>month;
  
  double dis_price = calcDiscount(total_price, month);
    cout << dis_price << endl;
    
    return 0;
*/  
}
