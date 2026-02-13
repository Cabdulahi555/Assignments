// CS211 HW3 Header file for the stack class

// PURPOSE: Learn the concept of a stack and be able to implement it

// INSTRUCTION: Copy the purple lines from the notes to complete this file

/* ------------------------------------------------
 Your name: Cabdulahi Hussein
 Header file for the stack class
 Compiler: g++
 --------------------------------------------------- */
#include <iostream>
#include <vector>
using namespace std;
// ** first include appropriate files

//declare 1 alias
typedef int el_t;

// ** Must add appropriate comments, too
class stack
{
 private: // data members hidden from the client
  vector <el_t> el; //statr with no slots   
  
 public:  // for the client to use
  // do not forget the exception classes for underflow and overflow!
  //Thrown when attempting to push full stack
  class Overflow{};

  //Thrown when attempting to pop empty stack
  class Underflow{};

  //Constructor
  stack();

  //Destructor
  ~stack();
  
  
  // no need to do topElem and clearIt
  // just constructor, destructor, isEmpty, isFull, push, pop, displayAll

  //Purpuse: Check is stack is empty
  //Parameters: none
  bool isEmpty ();


  //Purpose: Checks if stack is full
  //Parameters: None
  bool isFull ();


  //Purpose: Pushes elements into stack
  //Parameters: el_t
  void push(el_t);


  //Purpose: Pops element from stack
  //Parameters: el_t
  void pop (el_t&);


  //Purpose: Displays contents of stack to user
  //Parameters: None
  void displayAll ();

  void Size();
};
