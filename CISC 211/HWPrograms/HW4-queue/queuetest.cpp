// CS211 HW4 Tester client for the queue class

// INSTRUCTION: Must test each member function with do-while menu-switch and output
// easy to understand results

/* -----------------------------------------------------
 Your name: **
 Test client for the queue class
 Compiler: g++
 ------------------------------------------------------- */

// ** include appropriate files
#include <iostream>
#include "queue.h"
using namespace std;
// The driver to test every member function 
int main()
{
  // ** declare a queue object first
  queue Q;
  int  answer;   // user menu choice
  string input; //element

  do {

    try
      {// Display Menu Options
	cout << " \n---------- MENU --------- " << endl;
	cout << "1 call remove" << endl;
	cout << "2 call add" << endl; 
	cout << "3 call isEmpty" << endl;
	cout << "4 call isFull" << endl;
	cout << "5 call displayAll" << endl;
	cout << "0 to quit\n" << endl;
	cout << "Enter your choice: \n"; 
	cin >> answer;
	cout << endl;
	
	switch (answer)
	  {
	    // ** do case 1 and case 2 without checking isEmpty or isFull

	    //Remove front element from queue
	  case 1:
	    Q.remove(input);
	    cout << input<<" has been removed.\n"<<endl;
	    Q.displayAll();
	    break;

	    //Add element to rear of queue
	  case 2:
	    cout <<"=>Enter an element to be added.\n\n";
	    cin >> input;
	    Q.add(input);
	    Q.displayAll();
	    break;

	    //Check if queue is empty
	  case 3:
	    if(Q.isEmpty()){
	      cout <<"=>Queue is empty\n"<< endl;
	    }else {
	      cout <<"\n=>Queue has elements. \n" << endl;
	    }
	    Q.displayAll();
	    break;

	    //Check is queue is full
	  case 4:
	    if(Q.isFull()){
	      cout <<"=>Queue is full.\n" << endl;
	    } else{
	      cout <<"=>Queue has room for elements.\n" << endl;
	    }
	    Q.displayAll();
	    break;

	    //Displays all contents and position indicators
	  case 5:
	    Q.displayAll();
	    break;

	    //Ends program and outpouts message
	  case 0:
	       cout<<"\nYou have quit. Goodbye.\n" << endl;
	      break;
	      
	    
	  default: cout << "bad choice" << endl;
	  }// end of switch

      }//end of try
    // ** catches here to display error message but do not exit(1)

    //Catches when  queue is full
    catch(queue::Overflow)
      {cout <<"\n=>Queue  has overflowed." << endl;}

    //Catches when queue is underflowed
    catch (queue::Underflow)
      {cout <<"=>Queue has underflowed."<< endl;}
  } while ( answer != 0);

} //end of main

// Note that the end user will have to do 5 displayAll to see
// the result of adding and removing each time.



