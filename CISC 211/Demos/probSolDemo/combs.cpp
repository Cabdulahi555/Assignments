#include <iostream>
using namespace std;

// This program displays all triples made up of digits in the array

int main()
{
  int A[6];
  
  for (int i = 0; i < 6; i++)
    { cout << "Enter a digit: "; cin >> A[i];
    }
  
  cout << "All triples:" << endl;
  for (int i = 0; i <= 3; i++)
    { cout << endl;
      for(int j = i; j <= 4; j++)
	      for(int k = j; k <= 5; k++)
                 if (A[i] != A[j] && A[j] != A[k] && A[i] != A[k]) 
		   cout << A[i] << " " << A[j] << " " << A[k] << endl;

    }

}
