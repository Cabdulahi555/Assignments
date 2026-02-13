// CS211 Sorting Lab 1 - Yoshii

// Your name: Cabdulahi Hussein
//-------------------------------------------------

#include<iostream>
using namespace std;

void swap(int L[], int loc1, int loc2)
{
   // ** swap the two locations in L
 int temp = L[loc1];  
    L[loc1] = L[loc2];   
    L[loc2] = temp;  

}//end of swap

void selectsort(int L[], int N)
{
  // ** complete based on purple lines from the notes (Notes14)
  // ** You must display the pass# and the last slot of the section
  // at the start of each pass as I did in my solution.

  for (int pass = 1; pass <= N; pass++)
{
    int currentLargest = 0; 
    int Xm = N-pass;  // Xm is the last slot of the remaining elements

    for (int i = 1; i <= Xm; i++) // go through remaining elements
        if (L[currentLargest] < L[i]) currentLargest = i;	
     // Display pass number and last slot
        cout << "pass= " << pass << " last Slot= " << Xm << endl;
    swap(L, currentLargest, Xm);  // swap the largest with the end element 
 }// end of a pass


}// end of selectsort


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


  selectsort(myElements, size);
  cout << "Sorted List" << endl;
  for (int i = 0; i < size; i++)
    {
      cout << myElements[i] << " ";
    }
  cout << endl;

}//end of main

  
