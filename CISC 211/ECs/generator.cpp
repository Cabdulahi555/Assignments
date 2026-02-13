// First complete this program and then change it to use a set "0" .. "9"
// with queue size of 100

#include <iostream>
#include <string>
#include "queue.h"
using namespace std;

// Generates all strings made up of A, B, and C
int main()
{
  queue abcqueue;  // string queue

  abcqueue.add("A");
  abcqueue.add("B");
  abcqueue.add("C");

  while (true)
    {
    try
      { string item;
        ** // remove
	** // display it
	** // add item + "A"
	** // add item + "B"
        ** // add item + "C"
       }
    // Catch exceptions and report problems and quit the program now. 
    catch (queue::Overflow)
      {cerr << "Cannot add" << endl; exit(1);  }
    catch (queue::Underflow)
      { cerr << "Cannot delete" << endl; exit(1); }

    }// end of while
}
