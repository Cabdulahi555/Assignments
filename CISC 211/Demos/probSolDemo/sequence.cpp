#include <iostream>
using namespace std;

// This program displays the length of the longest sequence in A 

int main()
{
  int A[6];

  for (int i = 0; i < 6; i++)
    { cout << "Enter a digit: "; cin >> A[i];
    }

  int longest = 1; int seq = 1;
  for(int j = 1; j <= 5; j++)
    { 
      if (A[j]==A[j-1]+1)
	seq++;
      else if (A[j]==A[j-1]) cout << "skip" << endl;
      else
	if (seq > longest) {longest = seq; seq = 1;}
    }// end of for

  if (seq > longest) {longest = seq; seq = 1;}
  cout << longest << " in a sequence" << endl;
}
