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
    int ans;
    int start;
    double dividend;
    cout << "Enter a positive integer number that you want to find the square root for: ";
    num = getInt(1, 9000000, "Enter a positive integer number between 1 and 9000000: ");
    
    // loop finding bottomw and top values
    for (int i = 0; i * i < num; i++)
      {
        bottom = i;
      }
    
    top = bottom + 1;

    // find which is closest and the start with if statement
    if (num - (bottom * bottom) <= (top * top) - num)
      {
	start = bottom;
      }
    
    else
      {
	start = top;    
      }
    if (num == start * start)
      {
	cout << start << " is the square root of " << num << endl;
	cout << endl;
      }
    
    // when using provided method from professor, i looped 10 times to get closest number
    else
      {
	cout <<"Start at " << start << endl;
	dividend = start;
    for (int i = 0; i < 9; i++)
      {
	dividend = (dividend + num / dividend) / 2.0;
      }
    cout <<"The square root of " << num << " is " << dividend<< endl;
    ans = int(dividend * dividend + 0.50);
    cout <<"The square of the square root is " <<ans << endl<< endl;
      }
    return 0;
}














  
