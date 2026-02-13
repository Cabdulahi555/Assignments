/***************************************************************************
Cabdulahi Hussein
Prof. Slott
Homework 7 - pennies.cpp
This program will help a user know how much they make in a month if their pay of .01 on the first day doubles. From .01 on day one, to .02, on day two and so on.
***************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{  // declare inputs
  double pay = 0.01;
  double total_pay = 0;
  int days;

  cout <<"How many days do you plan to work? ";
  cin >> days;


  // if to block out invalid monthly days
  if (days > 31 || days < 1)
{
  cout << "Invalid number of days. Please enter how may days you wish to work.\n"<< endl; 
}

  else
{
   // header and border
  cout<< setw(10)<< left <<"DAY" << setw(10) << right << "PAY"<< endl;
  cout << setw(10) << "===================="<< endl;
  
      // calculation and output of days and added pay 
    for ( int i = 1; i <= days; i++)
{	cout << setw(10) << left << i << setw(10) << right << fixed << setprecision(2) << pay<< endl;

  // change amounts after each day is counted
  total_pay += pay;
  pay *= 2;
}
     //outputs
    cout << setw(20) << "===================="<< endl; // bottom border
    cout <<"You would have earned $" << total_pay << " after " << days <<" days." << endl;

 } 

  return 0;
}
