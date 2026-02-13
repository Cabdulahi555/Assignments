#include <iostream>
using namespace std;

// This program displays all pairs made up of digits in an array

int main()
{
  int A[6];
  
  for (int i = 0; i < 6; i++)
    { cout << "Enter a digit: "; cin >> A[i];
    }
  
  cout << "All Pairs:" << endl;
  for (int i = 0; i <= 4; i++)
    { cout << endl;
      for(int j = i; j <= 5; j++)
        if (A[i] != A[j]) 
	  cout << A[i] << " and " << A[j] << endl;

    }

}
