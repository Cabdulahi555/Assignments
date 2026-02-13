// CS211 HW2 Client

// THE PURPOSE: Learn to write a simple client

// INSTRUCTION: Always look for ** and complete them
// Pay attention to what are #included; Never delete the ** comments!

/* -----------------------------------------------
 Your name: **
 Client File for HW2 using the names class
 Compiler: g++

 Program Description: **

 ---------------------------------------------------- */

#include<iostream>
#include<fstream>
#include<string>
#include "names.h"
using namespace std;


// The driver to use names
int main()
{ 
  // ** declare an object
  names myNames;
 
  string fname;
  // ** declare any other necessary variables

  
  // ** get the input file and set the input stream
  //Recieve file name from user, and make error cout
  
  cout << "Enter the input file name: ";
  cin >> fname;

  ifstream fin;

  fin.open(fname);

  if (!fin)
    {
      cout <<"Could not open file. May not exist or may have typed incorrectly. \n" << fname<< endl;
      return 1;
    }

  // ** call readNames with the stream
  myNames.readNames(fin);


  // ** call displayNames
  myNames.displayNames();
 
}// end of main

