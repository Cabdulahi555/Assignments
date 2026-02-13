// CS211 Yoshii File+Strings+Matrix Lab

// INSTRUCTION:
// Always read the entire file first.
// Complete based on ** comments -- do not delete the comments
// Test thoroughly using a different input file.

// Your name: Cabdulahi Hussein
//------------------------------------------

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

// readNames reads in names.txt into the matrix
void readNames(string  M[3][4])
{
  string fname;
  cout << "Enter a file name: ";
  cin >> fname;

  ifstream fin;
  fin.open (fname.c_str());           // associated file is opened
  // ** create a stream fin here
  // ** open the file names.txt here
  // read 12 strings into a 3x4 matrix as follows:
  for (int row = 0; row <= 2; row ++) // for each row
    {
    for (int col = 0; col <= 3; col++)
      { string name;// ** read a string using fin
	fin >> name;
	M[row][col] = name;// ** put the string into M[row][col]
      }
   
    }

  fin.close();
}// end of function

 
// displayNames displays what is in the matrix
// making sure it is easy to read and understand

void displayNames(string M[3][4])
{
  for (int row = 0; row <= 2; row ++) // for each row
      {
	for (int col = 0; col <= 3; col++)
	  { cout << M[row][col]<<"\t";  // ** cout from M[row][col]}

        // ** do endl after each row
	    if(col == 3)
	      {
		cout << endl;

	      }
	  }
       
      }// end of function
}
// The driver to read and display the matrix
int main()
{ 
  string myNames[3][4];  
  readNames(myNames);
  displayNames(myNames);


  return 0;
}  //end of main

