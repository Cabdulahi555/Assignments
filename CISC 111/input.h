/*****************************************************************************
Cabdulahi Hussein 
CS - 111
Professor Slott
file input.h
this file will contain my functions
getInt asks for an integer and rejects bad inputs outside the range.
getDouble asks for a decimal number and rejects bad inputs outside the range.
getYN asks for Y or N and reject bad inputs other than Y, y, N or 
**************************************************************************/
#include <iostream>
using namespace std;

// this function will help me set ranges for my integers
int getInt(int min, int max, string msg)
{
  int n; //user's input
  cin >> n;

  while(n < min || n > max) // the user's input was outside the range
    {
      cout << msg;  //show the message to the user
      cin >> n;     //read a new input
    }
  return n; //return a good value that is within the range (between min and max enclusive)
}


// this function will allow me set a range for doubles

double  getDouble( int min, int max, string msg)
{        

  double n;
 cin >> n;
while(n < min || n > max) // the user's input was outside the range

  {
      cout << msg;  //show the message to the user
      cin >> n;     //read a new input
  }

  return n; //return a good value that is within the range (between min and max enclusive)
}


// this function will allow me recieve yes or no answers from users

char getYN( string msg)
{
  char input;

  cin >> input;
  while ( input != 'Y' && input != 'y' && input != 'N'  && input != 'n') // neither Y or N
    {
      cout << msg; // outputs error message
      cin >> input; // reads new input
    }

  if ( input == 'y' || input == 'Y') // giving lowercase y and n a capital Y or N
    input = 'Y';
  else
    input = 'N';
 
  return input;
}
  









                                                                                                                                               

















