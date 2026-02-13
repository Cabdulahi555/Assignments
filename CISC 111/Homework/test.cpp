/***************************************************************************
Cabdulahi Hussein
Prof. Slott
Homework 7 - sqrt-step1-2.cpp
User will enter a positive number, and program will find which numbers of the square root are closer to the integer.
***************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;
  int main()
{
    int num;
    int bottom = 0;
    int top = 0;
    int closer;
    double div;
    cout << "Enter a positive number: ";
    cin >> num;

    // loop finding bottomw and top calues
    for (int i = 0; i * i < num; i++)
      {
        bottom = i;
      }
    
    top = bottom + 1;

    // This will look fro which is higher or lower
    if (num - (bottom * bottom) <= (top * top) - num)
      {
        cout << "Top is " << top << endl;
        cout << "Bottom is " << bottom << endl;
        cout << "Between " << top << " and " << bottom << ", " << bottom << " is closer." << endl;

	closer = bottom;
      }
    
    else
      {
        cout << "Top is " << top << endl;
        cout << "Bottom is " << bottom << endl;
        cout << "Between " << top << " and " << bottom << ", " << top << " is closer." << endl;

	closer = top;
      }
    
    for(int i = 0; i  < 10; i++)
      {
	div = (double)num / closer;
	div = (double)(div+closer)/ 2;
      }
    cout <<fixed<< setprecision(5) << div << endl;
    return 0;
    
}














  
