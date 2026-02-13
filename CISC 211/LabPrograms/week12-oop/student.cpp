// CS211 Lab: Implementation file student.cpp (Hidden from the client)

//INSTRUCTION:
// First, include the header file and other correct files
// Then complete the function definitions using ** comments.
// DO NOT DELETE MY COMMENTS!

// Your Name: Cabdulahi Hussein
//--------------------------------------

#include "student.h"
using namespace std;
//** All member functions are listed in student.h
//** Complete all member function definitions based on Notes-4

// ** Make sure each function is preceded by comments PURPOSE: and/or PARAMETERS: 

// constructor
student::student()
{
  // no initialization to do
}

// destructor
student::~student()
{ // nothing to do since we are using static memory
}

// PURPOSE: Returns the name of the student 
string student::getname()
{
  return student_name;
}

// PURPOSE: Returns the major of the student 
string student::getmajor()
{
  return student_major;
}

// PURPOSE: Sets name as the stored string 'name'
// PARAMETER: name
void student::setname(string name)
{
  student_name = name;
}

// PURPOSE: sets major as the stored string 'major'
// PARAMETER: major 
void student::setmajor(string major)
{
     student_major = major;

}

bool student::operator==(student S2)
  {
    // how to compare first object and the second object and return true or false 
    if((this->student_name == S2.student_name) && (this->student_major == S2.student_major))
      return true;
 else return false;

}

