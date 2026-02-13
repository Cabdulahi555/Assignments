// CS211 Yoshii Debugging Lab - with a string array

// The Lab Instructor will first demonstrate how he debugs this program
// by addressing one error at a time.

//INSTRUCTION:
// Read carefully and fix and then compile to remove ALL SYNTAX ERRORS!
// and you MUST add a comment next to each line you changed!!!
// Always add things where you see **.  You can search for ** using contrl-S

// Your Name: **
//---------------------------------------------------

#include<iostream>
#include<string>
using namespace std;

// gets data from the user to fill S with student names
void getData(string S[], int size)
{  for (int i = 0; i < size ; i++)
    {
      cout << "Enter student name: ";
      cin >> S[i];
    }
}//end of function

// displays S in reverse order
void showData(string S[], int size)
{ 
  for (int i = size-1 ; i => 0 ; i--)
    {
      cout << S[i] << end;;
    }
}//end of function

// searches through S looking for name and return its location or -1
// if not found
int search(string S[], int size, string name)
{
  for (int i = size-1 ; i >= 0 ; i--)
    {
      if (S[i] == name) return i;
    }
  return -1;
}//end of function

int main()
{
  string StuList[5]; // up tp 5 students can be stored
  int i;  // the search result - a location

  getData(StuList, 5);
  cout << "Here it is in reverse order" << endl;
  showData(StuList, 5);

  i = search(StuList, 5, "Mary"); // look for Mary

  if (i > -1) 
    cout << "Mary found in slot " << i << endl;
  else cout << "Mary was not found." << end;

}//end of main
