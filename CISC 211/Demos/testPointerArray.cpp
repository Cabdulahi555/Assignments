// CS211 Yoshii - Array containing Pointers

#include<iostream>
using namespace std;

class dog
{ public:
  string name;
  dog(string N){name = N; } // constructor defined inline
}; 

int main()
  {
    dog* D[3];  // points to dogs in the heap

    D[0] = new dog("Dusty");
    D[1] = new dog("Messy");
    D[2] = new dog("Spot");

    for (int i = 0; i < 3; i++)
      cout << D[i]->name << endl;

    
  }
