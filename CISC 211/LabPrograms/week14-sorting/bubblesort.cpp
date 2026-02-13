// CS211 Sorting Lab 2 - Yoshii

// Your name: **
//----------------------------------

#include<iostream>
using namespace std;

void swap(int L[], int loc1, int loc2)
{
  // ** swap the two locations in L
}//end of swap

void bubblesort(int L[], int N)
{
  // ** complete based on purple lines from Notes-14
  // ** You must display the pass number and the last slot # for the section
  //    at the start of each pass as I did in my solution
}// end of bubble sort


int main()
{
  int myElements[10];
  int size;
  
  cout << "How many elements? (<=10): ";
  cin >> size;

  for (int i = 0; i < size; i++)
    {
      cout << "Element:";
      cin >> myElements[i];
    }

  // ** call bubblesort here with myElements and size

  cout << "Sorted List" << endl;
  for (int i = 0; i < size; i++)
    {
      cout << myElements[i] << " ";
    }
  cout << endl;

} // end of main
