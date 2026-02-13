/*****************************************************************
CS111
Cabdulahi Hussein
Template prepared by Kazumi Slott
04/07/2025
Lab on 2D arrays
*****************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

//declare 2 constants for the sizes of the 2 dimensional array
const int NUM_STU = 5;
const int NUM_TEST = 3;


// functions parameters

void showTable(const int scores[][NUM_TEST]); // get input from users
void fillArray( int scores[NUM_STU][NUM_TEST]); // output correctly
int main()
{
  // declare the array
  int scores[NUM_STU][NUM_TEST];
  
  fillArray(scores); // fill array with input
  
  showTable(scores); // display the table correctly
  
  //declare the 2 dimensional array and initialize the array using the initialization list

  return 0;
}

// function to get input fro musers 

void fillArray( int scores [NUM_STU][NUM_TEST])
{

  for (int test = 0; test < NUM_TEST; test++)
    {

      cout <<"Enter scores for Test #" <<test + 1 << endl;
      
      for (int student = 0; student < NUM_STU ; student++)
	{

	  cout<<"\tStudent #" << student + 1 << ": ";
	  
	  cin >>scores[student][test];
	}
      
      cout <<endl;
    }

}

// function to display the score in format


void showTable(const int scores[NUM_STU][NUM_TEST])
{
  int total;

  //Show the lables for the table
  cout << setw(10) << "Test#" << setw(10) << "Stu 1" << setw(10) << "Stu 2" << setw(10) << "Stu 3"
       << setw(10) << "Stu 4" << setw(10) << "Stu 5" << setw(10) << "Average" << endl;

  //Show the table using a nested for loop here

    for (int test = 0; test < NUM_TEST; test++)
    {
        cout <<setw(10)<<test + 1;
        total = 0;

        for (int student = 0; student < NUM_STU; student ++)
	  {
	    cout <<setw(10)<< scores[student][test];
	    total += scores[student][test];
	  }
	
	cout <<setw(10) <<fixed << setprecision(1)<< (total * 1.0 / NUM_STU);
	cout << endl;
    }

    // output averages
    
    cout <<setw(10) <<"Average";
    for (int student = 0; student < NUM_STU; student++)
    {
        total = 0;
	
        for (int test = 0; test < NUM_TEST; test++)
        {
            total += scores[student][test];
        }
       
        cout << setw(10) << fixed << setprecision(1) << (total *1.0  / NUM_TEST);
    }
    cout << endl;
    cout << endl;
}
