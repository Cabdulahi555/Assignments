/**************************************************************************
Cabdulahi Hussein
Prof. Slott
Homework 7 - asciiTable.cpp
This program will use a for loop to display the characters for the ASCII values 35 through 126, displaying 14 characters on each line
***************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int c; // counter for line characters

  for (int ascii = 35; ascii <= 126; ascii++) // range for the ascii values
{
  cout << (char)ascii << " " ; // coutput the ascii characters
  c ++;
  // makes sure we reset the line once we print 14
  if (c == 14)
        {
            cout << endl; // move to the next line
            c = 0;  //reset the counter
        }
 }
  cout << endl;
      
    
  
 
  return 0;
}
