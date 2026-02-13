// CS211 HW1P1 CS111 Review

// THE PURPOSE of the HW is for you to combine your knowledge of
// strings, matrices, char conversion, and files.

// INSTRUCTION:
// Always look for ** and complete them. Use contr-S to look for them.
// Run sol1.out to see what the output should look like.
// Do not submit unless you are proud of the way the program and
// the outputs appear.

/* -------------------------------------------------------------
 Your Name: **
 Compiler: g++
----------------------------------------------------------- */

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

// ** complete readNames here to read in hw1input.txt into the matrix 3x4
// Purpose of the function: **
// Parameters are for: a 3x4 string matrix and the input stream to use
void readNames(string N[3][4], **)
{
// ** note that you need to use a while loop because you do not know
// how many lines are in the file, but you may assume that no bad row or column
// numbers will be given

  // ** you need to read the row and col names and convert them into ints
  // using the formulas given in class 
}// end of readNames

// ** complete displayNames here to display what is in the matrix 3x4
// make sure it looks nice like a table
// Purpose of the function: **
// Parameter are for: a 3x4 string matrix
void displayNames(string N[3][4])
{

}//end of displayNames


// The driver 
int main()
{
  string Names[3][4];  // matrix of names
  //** here initialize all slots as blank strings so that it is easy
  // to line up the table slots

  string fname;  // the input file name
  cout << "Enter the input file name: ";
  cin >> fname;
  //** here create the stream fin to the file and open it

  
  readNames(Names, fin);     // reads using fin
  displayNames(Names);  // displays nicely
    
}// end of main

