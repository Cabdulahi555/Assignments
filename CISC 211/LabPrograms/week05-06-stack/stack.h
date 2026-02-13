/* Cabdulahi Hussein

public: // Public Prototypes follow

const int MAX = 10;
typedef char el_t;

Prof. Yoshii
Lab week 5- Stacks
09/23/2025
Purpose: Create a stack library 
*/



#include <iostream>
using namespace std;



const int MAX = 10;
typedef char el_t;

class stack
{
public:
  class Overflow{};
  
  class Underflow{};

  //Constructor
  stack();

  // Destructor
  ~stack();

  bool isEmpty ();

  bool isFull ();

  void push(e_t);

  void pop (el_t&);

  void displayAll ();

private: //Private data members
  el_t el[MAX];
  int top;

}
