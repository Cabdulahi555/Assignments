// CS211 Constructor Lab - Yoshii

// INSTRUCTION:
// Use this client to test the updated student class from week4 labs
// DO NOT CHANGE
-----------------------------

#include<iostream>
#include<string>
#include "student.h"
using namespace std;

int main()
{
  student myStudent;
  student yourStudent("Smith", "Math");  // tests the new constructor

  // the regular = provided by C++ should work 
  myStudent = yourStudent;  

  cout << myStudent.getname() << endl;
  cout << myStudent.getmajor() << endl;

}
