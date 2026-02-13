/**************************************************************************
Cabdulahi Hussein
Prof. Slott
Homework 7 - stars.cpp
The user will enter a number (>= 1) into n then this program will show 1 star on the first line, 2 stars on 
the second line, ….. n stars on the nth line. If the user enters a negative number or zero, it will show an error message and the program ends
***********************************************************************/
#include <iostream>
using namespace std;
int main()
{
  int rows;
  cout << "Enter the number of rows: ";
  cin >> rows;
  
  // check if invalid
    if (rows < 1)
{
  cout << "This program works for n >= 1 only." <<endl;
}
    else
{

  
 for (int a = rows; a >= 1; a--)
{
 // Print spaces
 for (int b = 1; b < a; b++)
{

  cout << " ";
 }

 // Print stars
 for (int c = a; c <= rows; c++)
{

   cout << "*";
}

            // Move to the next line
            cout << endl;
        }
 } cout << endl;

    return 0;
}
