// CS211 HW6P2 Linked List Queue Implementation File (Hidden from the client)

// INSTRUCTION: Complete all functions based on Week10-11 notes

/* -------------------------------------------------
 Your name: Cabdulahi Hussein
 Implementation file for the lqueue class
 Compiler: g++
 ---------------------------------------------------- */

// ** include all appropriate files
#include "lqueue.h"

// ** Make sure all required comments are provided (every if-then-else
// and local variable purposes, too) in each function

// Constructor
lqueue::lqueue()
{ 
  // initialize Front and Rear (for an empty case)
  Front = NULL;
  Rear = NULL;
}

// Destructor
lqueue::~lqueue()
{
  // ** Don't forget that the destructor must destroy the object by calling deleteFront until the list is empty.
  // ** Put a cout at the start of the destructor so that you can be sure that it got called!
  cout << "calling destructor..." << endl;

  el_t X;
  while (!isEmpty())
  {
    deleteFront(X);
  }
}

// PURPOSE: checks if queue is empty
bool lqueue::isEmpty()
{
  if (Front == NULL && Rear == NULL)
    return true;
  else
    return false;
}
// PURPOSE: adds a new element to the rear
// PARAMETERS: Elem to add
void lqueue::addRear(el_t Elem)
{
  if (isEmpty()) // special case for the first node
  {  
    // create the first node
    Front = new Node;
    Front->Elem = Elem;
    Front->Next = NULL;
    Rear = Front; 
  }  
  else // regular case for other nodes
  {  
    // as in Notes-10B
    Node *P = new Node;
    P->Elem = Elem;
    P->Next = NULL;
    Rear->Next = P;
    Rear = P;
  }  
  // make sure the rear->next is NULL
  Rear->Next = NULL;
}//end of addRear  

// PURPOSE: deletes the front node and returns the element
// PARAMETERS: Elem reference to receive deleted element
void lqueue::deleteFront(el_t& Elem)
{
  if (isEmpty()) // empty case
  {    
    throw Underflow();    
  }
  else if (Front == Rear) // only one node
  {    
    Elem = Front->Elem;
    delete Front; 
    Front = NULL; 
    Rear = NULL; 
  }
  else // regular case
  {  
    // as in Notes-11
    Elem = Front->Elem;
    Node *Second = Front->Next; 
    delete Front; 
    Front = Second; 
  }
}// end of deleteFront

// PURPOSE: displays all elements horizontally
// PARAMETERS: none
void lqueue::displayAll()
{ 
  if (isEmpty()) // empty [ empty ]
  {
    cout << "[ empty ]" << endl;
  }
  else
  {
    // use a while loop to go through the entire list and display horizontally in [ ]
    // e.g. [2][3][4]
    Node *P = Front;
    while (P != NULL)
    {
      cout << "[" << P->Elem << "]";
      P = P->Next;
    }
    cout << endl;
  }
}//end of displayAll
