// CS211 HW2 Implementation File (Hidden from the client)

// INSTRUCTION: Always look for ** and complete them. Do not delete them!

// THE PURPOSE: Learn to write member functions
// Define all functions (constructor, destructor, 
// readNames, displayNames)
// and provide required comments PURPOSE: PARAMETERS:

// Note that you can use all the data members
// without declaring them again in this file.
// Do not forget to say names:: in front of function names 


/* -------------------------------------------------
 Your name: Cabdulahi Hussein
 Implementation File for HW2 names class
 Compiler: g++
 --------------------------------------------------- */

// ** first, include correct files, including "names.h"
#include <iostream>
#include "names.h"
using namespace std;

// Constructor
names::names()
{ // ** do all data member initializations here
  // fill the matrix with dashes first
  for(int r = 0; r < 3; r++)
    {

      for(int c = 0; c < 4; c++)
	{

	  N[r][c] = "-----";

	}

    }

   
}//end of names::names()

names::~names()
{ // nothing to do since we use static memory
}



//PURPOSE: Reads from the file and converts lettering system
//PARAMETERS: ifstream
void names::readNames(ifstream& fin)
{
  char rowChar, colChar;
  string name;

  while (fin >> rowChar >> colChar >> name)
    {
      int row = rowChar - 'a';
      int col = colChar - 'a';
      N[row][col] = name;
    }
}//end of readnames

// ** complete displayNames too!
// Purpose: Displays the names in proper order
//Parameters: None
void names::displayNames()
{

  for (int row = 0; row < 3; row++)

    {
      for (int col = 0; col < 4; col++)

	{
	  cout <<"| " << N[row][col] << " ";
	  
	}
      cout <<endl;
     
    }

}// end of displaynames
