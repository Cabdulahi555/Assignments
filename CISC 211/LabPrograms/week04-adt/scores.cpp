// CS211 Lab : Implementation file scores.cpp (Hidden from the client)

//INSTRUCTION:
// First, include the header file and other correct files
// Then complete the function definitions using ** comments.
// DO NOT DELETE MY COMMENTS!

// Your Name: **
//--------------------------------------
#include <iostream>
#include "scores.h"
// ** all member functions are listed in scores.h
// ** complete all member function definitions based on Notes-4

// ** make sure each is preceded by comments PURPOSE: and/or PARAMETERS:

// constructor

scores::scores()
{
  // ** initialize some data members here
  howMany = 0;
}

// destructor
scores::~scores()
{
  // nothing to do because of static memory allocation
}

//PURPOSE: to add a score 
//PARAMETER: s is the new score
void scores::addScore(int s)
{
  S[howMany] = s;
  howMany++;
}


// ** complete the rest of the functions in the same way 

//Purpose adds all the recieved scores
//Parameter
int scores::sumScores()
{
  int total = 0;

  for (int i =0; i< howMany; i++)

     {
       total = total + S[i];
     }

   return total;
}
//Purpose averages scores recieved
int scores::avgScore()
{

  return sumScores()/howMany;
}

//Purpose displays all scores
void scores::displayScores()
{
  cout <<"Scores are: " << endl;

  for( int i = 0; i < howMany; i++)
    {
      cout << S[i];
      cout << endl;

    }
  
}
