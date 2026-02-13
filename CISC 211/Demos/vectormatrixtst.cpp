// CS211 Matrix Containing Vectors

#include<vector>
#include<iostream>
using namespace std;

// display the vector
void f(vector<int> V)
{
  for (int i = 0; i < V.size(); i++)
    cout << V[i] << " ";
  cout << endl;
}// end of f

int main()
{
  vector<int> M[3][4];

  M[0][0].push_back(1);
  M[0][0].push_back(2);

  f(M[0][0]);  //send a vector to f display it
  cout << M[0][0].size() << endl;

  
}
