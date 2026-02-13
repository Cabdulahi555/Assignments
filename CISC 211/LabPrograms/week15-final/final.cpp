// Write a client to test your lab final functions as follows
// Must test thoroughly and record into final.txt

// g++ list all .cpp files making up this project
// if all and only relevant files are in this folder, you can do g++ *.cpp


// Your name: Cabdulahi Hussein
//--------------------------------------------------

#include "grocery.h"
#include "lqueue.h"
int main()
{

  /* cout the purpose of the program so that the user knows it is about
     grocery lines.*/
  cout << endl;
  cout << "==============================================================" << endl;
  cout << "           Grocery Store Line Management System  " << endl;
  cout << "This program manages 4 grocery checkout lines to sort and\n serve customers." << endl;
  cout << "==========================================================" << endl;

  /*create the object;*/
  grocery store;
  int MenuChoice;
  /*loop until the user wants to stop:*/
  do
    {
      /* show a menu*/
       cout <<"\n------- MENU -------" << endl;
       cout << "1- display a specific line" << endl;
       cout << "2- display all lines" << endl;
       cout << "3- add to a specific line" << endl;
       cout << "4- serve a specific line" << endl;
       cout << "5- Quit" << endl;
       cout <<endl;
       cout << "Enter your choice: ";
       cin >> MenuChoice;

       try
	 {
	   int lineNum;
	   string Name;
	   
	   switch (MenuChoice)
	     {case 1: //Displays Line
		 
	      	 cout << endl;
		 cout <<"\nChoose a line 1-4: \n\n";
		 cin >> lineNum;
		 cout << endl;
		 store.displayLine(lineNum);
		 break;

	     case 2: //DIsplays all lines
	       cout << endl;
	       store.displayAll();
     	       break;

	     case 3: //  Add to line
	       cout << endl;
	       store.displayAll();
	       cout << endl;
	       cout <<"Which line would you like to add to? Choose 1-4. \n";
	       cout <<"=>";
	       cin >> lineNum;
	       cout << endl;
	       cout <<"What is the name of the customer? \n\n";
	       cout <<"=>";
	       cin >> Name;
	       store.addRear(Name, lineNum);
	       cout << endl;
	       store.displayAll();
	       break;

	     case 4: // Serve customer
	       cout << endl;
	       store.displayAll();
	       cout << endl;
	       cout <<"\nWhich line would you like to serve? \n";
	       cout <<"=>";
	       cin >> lineNum;
	       cout << endl;
	       store.deleteFront(lineNum);
	       break;

	     case 5: //Ends program
	       cout<<"\nExiting this program. \n" << endl;
	       break;

	     default: // In case of incorrect choice
		 cout << "\nInvalid choice. Please enter 1-5. " << endl;
	       break;
		
		 
	     }	 

	 }
       catch (grocery::Underflow)
	 {
	   cout << "Error. Cannot serve an empty line. Please try again.\n" << endl;
	 }
       catch (grocery::InvalidLine)
	 {
	   cout <<"\nError. Invalid line number. Must be 1-4.\n" << endl;
	 }
       /*	get the choice
	do the choice

       catch Underflow - error message
       }*/

    } while (MenuChoice != 5);
 

    cout << "Good Bye" << endl;

  return 0;
}
    
