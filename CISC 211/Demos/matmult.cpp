// CS211 Yoshii - Matrix demonstration

#include<iostream>
using namespace std;

int main()
{
  int A[3][3];
  int B[3][3];
  int C[3][3];

  // fill A and B with ints 1 through 9
  int i = 0;
  for (int row = 0; row < 3; row++)
    for (int col = 0; col < 3; col++)
      { i++;
        A[row][col] = i;
        B[row][col] = i;
      } // end of for

  cout << "Multiplying two of these... " << endl;
    for (int row = 0; row < 3; row++)
      {
	for (int col = 0; col < 3; col++)
	  { 
	    cout << A[row][col] << " ";
	  } // end of for
	cout << endl;
      }

  

  // multiply A and B to get C
  for (int rowS = 0; rowS < 3; rowS++)
    for (int colS = 0; colS < 3; colS++)
      { // for result slot  
	int colV = 0; int rowV = 0; int sum = 0;
	// go down the col of rowS and row of colS 
	while (colV < 3 && rowV < 3)
	  {
	    sum = sum + A[rowS][colV]*B[rowV][colS];
            cout <<  A[rowS][colV] << "*" << B[rowV][colS] << endl;    
	    rowV++; colV++;
	  }
        cout << "assigned the sum" << endl;
	C[rowS][colS] = sum;
      }
  
 
  cout << "The result is ..." << endl;
 for (int row = 0; row < 3; row++)
   {
    for (int col = 0; col < 3; col++)
      {
        cout << C[row][col] << " ";
      } 
    cout << endl; // next row
   }// end of for

}// end of main
