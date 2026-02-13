// CS211 HW4 Implementation file for the queue class (Hidden from the client)

// INSTRUCTION: Be sure to use the code from the Notes.

/* ----------------------------------------------
 Your name: Cabdulahi Hussein
 Implementation file for the queue class
 Compiler: g++
---------------------------------------------------- */

// ** include appropriate files including "queue.h"
#include <iostream>
#include "queue.h"
// ** define all memeber functions matching queue.h
// and add good comments PURPOSE & PARAMETER
// constructor
queue::queue()
{
  count = 0;
  front = 0;
  rear = -1;
    

}
//destructor
queue::~queue()
{
}
// ** For displayAll, cout Front, Rear and Count just for this HW
//    so that it is easy for you to see how the queue is wrapping around.


//Purpose: Checks if the queue is empty
//Parameter: None
//Return: returns true if count is 0, false otherwise

bool queue::isEmpty()
{
  if(count == 0)
    return true;
  else
    return false;

}

// PURPOSE: Checks if the queue is full
// PARAMETER: None
// RETURN: Returns true if count equals MAX, false otherwise

bool queue::isFull()
{
  if (count == MAX)
    return true;
  else
    return false;
}

// PURPOSE: Adds an element to the rear of the queue
// PARAMETER: elem - the element to be added
// ALGORITHM: Throws Overflow if full, otherwise increments rear circularly,  stores element, and increments count

void queue::add(el_t elem)
{
  if(isFull())
    throw Overflow();
  else
    {rear = (rear + 1) % MAX;
      el[rear] = elem;
      count++;
	}
}
// PURPOSE: Removes an element from the front of the queue
// PARAMETER: elem - reference variable to store the removed element
// ALGORITHM: Throws Underflow if empty, otherwise retrieves front element,  increments front circularly, and decrements count

void queue::remove(el_t&elem)
{if (isEmpty())
    throw Underflow();
  else
    {elem = el[front];
      front = (front + 1) % MAX;
      count--;
    }
}

// PURPOSE: Displays all elements in the queue from front to rear
// PARAMETER: None
// ALGORITHM: Shows front, count, and rear values, then displays all elements in order from front to rear enclosed in brackets, or [EMPTY] if empty

void queue::displayAll()
{
  cout <<"The contents are: \n"<<endl;
  cout <<"front = " << front << " " << "count = " << count << " " << "rear = " << rear<<" \n" << endl;
  int i = front;
  if (isEmpty()){
    cout <<"[EMPTY]\n" <<endl;
    return;
  }
  cout <<"[";
  
  for(i = front;; i = (i +1)% MAX)
    {
      cout <<el[i]<<" ";
      if (i==rear)
	break;
    }
  cout <<"]"<<endl;

}
    


