/* ----------------------------------------------
Cabdulahi Hussein
Prof. Danish Khan
Assignment 7
 Implementation of all Stack member functions
 ----------------------------------------------- */
#include <iostream>
#include "stack.h"
using namespace std;

// Part 3: Constructor
// PURPOSE: Initializes the stack as empty by setting top to nullptr
// PARAMETERS: None
Stack::Stack()
{
    top = nullptr;
}

// Part 4: push()
// PURPOSE: Creates a new node and inserts it at the top of the stack
// PARAMETERS: int value - the data to be pushed onto the stack
void Stack::push(int value)
{
    Node* newNode = new Node;   // create new node
    newNode->data = value;      // store value
    newNode->next = top;        // point new node to current top
    top = newNode;              // update top to new node
}

// Part 5: pop()
// PURPOSE: Removes the top node from the stack and frees its memory
// PARAMETERS: None
void Stack::pop()
{
    if (isEmpty())
    {
        cout << "Stack Underflow" << endl;
        return;
    }

    Node* temp = top;       // save pointer to current top
    top = top->next;        // move top down to next node
    delete temp;            // free memory of removed node
}

// Part 6: peek()
// PURPOSE: Returns the value at the top of the stack without removing it
// PARAMETERS: None - returns int
int Stack::peek()
{
    if (isEmpty())
    {
        cout << "Stack Underflow" << endl;
        return -1;
    }

    return top->data;
}

// Part 7: isEmpty()
// PURPOSE: Returns true if the stack is empty, false otherwise
// PARAMETERS: None - returns bool
bool Stack::isEmpty()
{
    return top == nullptr;
}

// Part 8: display()
// PURPOSE: Prints all stack elements from top to bottom
// PARAMETERS: None
void Stack::display()
{
    if (isEmpty())
    {
        cout << "Stack is empty." << endl;
        return;
    }

    cout << "Stack elements:" << endl;

    Node* current = top;            // start at top
    while (current != nullptr)      // traverse until end
    {
        cout << current->data << endl;
        current = current->next;    // move to next node
    }
}