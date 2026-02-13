// CS211 Pointer Lab 1 - Yoshii

// INSTRUCTION:
// Write the program as specified and debug as specified
// Which lines caused seg faults? Why did this error occur? 

// Your name: Cabdulahi Hussein
// Your answer: P was made null before adding the 5 to cell
//---------------------------------------

#include<iostream>
using namespace std;

int main()
{

#include <iostream>
#include <string>
using namespace std;

  int *P;
  // cout <<"after first:" << endl;
  // success up to this point
  P = new int;
  // cout<<"after second:"<<endl;
  // success up to this point
  *P = 3;
  // cout <<"after third:" << endl;
  //success up to this point
  P = NULL;  // the cell is gone
  // cout <<"after fourth:"<<endl;
  //success up to this point
  cout << *P << endl;
  cout <<"after fifth: "<<endl; //---> Error here
  *P = 5;




}//end of main

