// CS211 Operator Overloading Lab - Yoshii

// INSTRUCTION:
// Use this client to test the updated student class from week4 labs
// Read it carefully first.
// Test twice with different results of ==
// DO NOT CHANGE
//-------------------------------

#include<iostream>
#include<string>
#include "student.h"
using namespace std;

int main()
{
  student myStudent, yourStudent;
  string n, m;

  cout << "Name for my student:"; cin >> n;
  myStudent.setname(n);
  cout << "Major for my student:"; cin >> m;
  myStudent.setmajor(m);

  cout << "Name for your student:"; cin >> n;
  yourStudent.setname(n);
  cout << "Major for your student:"; cin >> m;
  yourStudent.setmajor(m);

  // testing ==
  if (myStudent == yourStudent) cout << "the are the same" << endl;
  else cout << "they are different" << endl;

}
