/***************************************************************************
Cabdulahi Hussein
Prof. Slott
Homework 7 - sqrt-step1-2.cpp
User will enter a positive number, and program will find which numbers of the square root are closer to the integer.
***************************************************************************/
#include <iostream>
#include "input.h"
using namespace std;
  int main()
{
    int num;
    int bottom = 0;
    int top = 0;
    cout << "Enter a positive number you want to find the square root for: ";
    num = getInt(1, 9000000, "Enter a positive integer number between 1 and 9000000: ");

    // loop finding bottomw and top values
    for (int i = 0; i * i < num; i++)
      {
        bottom = i;
      }
    
    top = bottom + 1;

    // find which is closest
    if (num - (bottom * bottom) <= (top * top) - num)
      {
        cout << "Top is " << top << endl;
        cout << "Bottom is " << bottom << endl;
        cout << "Between " << top << " and " << bottom << ", " << bottom << " is closer." << endl;
      }
    
    else
      {
        cout << "Top is " << top << endl;
        cout << "Bottom is " << bottom << endl;
        cout << "Between " << top << " and " << bottom << ", " << top << " is closer." << endl;
      }
    
    return 0;
}














  
