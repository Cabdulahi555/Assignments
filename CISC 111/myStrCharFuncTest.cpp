#include <iostream>
using namespace std;
#include "myStrCharFunc.h"

int main()
{
  char wd[10] = "Hello";
  cout << wd << endl; // Hello
  myStrcpy(wd, "Hi");
  cout << wd << endl;  // Hi 

  cout << myToUpper('a') << endl; //A
  cout << myToUpper('m') << endl;//M
  //lowercase x
  cout << myToUpper('x') << endl; //X
  cout << myToUpper('A') << endl;//A
  cout << myToUpper('M') << endl;//M
  //passing the uppercase X
  cout << myToUpper('X') << endl; //X
  cout << myToUpper('}') << endl; // }
  cout << myToUpper(']') << endl; // ]
  cout << myToUpper('?') << endl;// ?

  cout << myStrlen(wd); // 2

  return 0;
}
