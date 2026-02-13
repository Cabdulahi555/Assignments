// CS211 Yoshii - File Input demonstration to Matrix - reads from tic.txt

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
  char TTT[3][3]; // tic tac toe matrix
  int row;
  int col;

  ifstream fin ("tic.txt"); // declare and open at the same time

  while (fin >> row)  // while I can read a row number
    {
      fin >> col;  // read column number
      fin >> TTT[row][col];  // read TTT content
    }// end of while

  // display TTT
  for (int r = 0; r < 3; r++)
    {
     for (int c = 0; c < 3; c++)
       cout << TTT[r][c] << " ";

     cout << endl; // next row
    }// end of outer for

  fin.close();

}// end of main
