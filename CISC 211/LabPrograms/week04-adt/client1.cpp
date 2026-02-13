// CS211 Client file for testing the student class - by R. Yoshii
// Use this to test the student.cpp program
// Read carefully.
// DO NOT CHANGE
//-------------------------------------

#include "student.h"
#include <iostream>
using namespace std;

int main()
{
  int answer;   // user menu choice
  student Stu;  // object
  string n, m;  // user input for some of the menu choices


  do {
    cout << " ---------- MENU --------- " << endl;
    cout << "1. Set last name" << endl;
    cout << "2. Get name" << endl;
    cout << "3. Set major" << endl;
    cout << "4. Get major" << endl;
    cout << "0 to quit" << endl;
    cout << "::";
    
    cin >> answer;

    switch (answer)
	{
	case 1: cout << "name is:"; cin >> n; Stu.setname(n);
	  break;
	case 2: cout << Stu.getname() << endl;
	  break;
	case 3: cout << "major is:"; cin >> m; Stu.setmajor(m);
	  break;
	case 4: cout << Stu.getmajor() << endl;
	  break;
        case 0:
	  break;  
        default: cout << "bad choice" << endl;
	}
  } while ( answer != 0);

}// end of main
 
