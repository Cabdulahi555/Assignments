// CS211 Yoshii - Vector demonstration
// Pay attention to what is included

#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
  vector<string> A(20);  // 20 slots to begin with
  cout << A.size() << endl;   // the length
  A.push_back("hi");    // adding an element to the back
  cout << A[0] << endl; // what's in the first slot
  cout << A.size() << endl;   // the new length

  vector<string> B;  // 0 slots to begin with
  cout << B.size() << endl;   // the length
  B.push_back("hi");  // adding an element to the back
  cout << B[0] << endl; // what's in the first slot
  cout << B.size() << endl;   // the new length

  if (A == B) cout << "they are the same";  else cout << "they are different" << endl;
}
