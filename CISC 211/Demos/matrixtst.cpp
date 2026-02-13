// CS211 Yoshii - Matrix demonstration

#include<iostream>
using namespace std;

int main()
{
  char TTT[3][3]; // tic tac toe matrix

  // user fills it with Os and Xs
  for (int row = 0; row < 3; row++)
    for (int col = 0; col < 3; col++)
      {
	cout << row << ":" << col << " Enter O or X" << endl;
        cin >> TTT[row][col];
      } // end of for
 
  // display the matrix
 for (int row = 0; row < 3; row++)
   {
    for (int col = 0; col < 3; col++)
      {
        cout << TTT[row][col] << " ";
      } 
    cout << endl; // next row
   }// end of for

}// end of main
