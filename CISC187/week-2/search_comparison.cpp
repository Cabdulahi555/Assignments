//Cabdulahi Hussein
//Prof.Danish Khan
//Assignment 2 - search_comparison.cpp
//Purpose: Build, implement and compare binary and linear search for large data sets.


#include <iostream>
using namespace std;

//Purpose; Performs linear search on an array to find the index of a given key
/*Parameters;
      'arr'  - array of integers to search through 
      'N'      - number of elements in the array
      'key'    - the value we're searching for
      '&steps' - reference variable to track number of comparisons made
*/
int lin_search( int arr[], int N, int key, int &steps)

{
    steps = 0;
    for (int i = 0; i < N; i++) {
        steps++;                  
        if (arr[i] == key)
            return i;             
    }
    return -1;     


}

//Purpose; Performs binary search on a sorted array to find the index of a given key
//Parameters; 'arr'  - sorted array of integers to search through
        //  'N' number of elements in the array
        //  'key'    - the value we're searching for
        //  '&steps' - reference variable to track number of comparisons made
int bin_search(int arr[], int N, int key, int &steps)
{
    int L = 0;
    int R = N - 1;
    steps = 0;

    while(L <= R)
    {
        steps++;

        int M = (L + R) / 2;

            if( arr[M] == key)
            {
                return M;           //Best case
            }
                else if( arr[M] < key)
                {
                    L = M + 1;      //Search the right 
                }
                     else
                    {
                        R = M - 1;  //Search the left
                    }
    }
    return -1;                      //Not found
}

int main()

{
    //limit as by Prof.
    const int N = 100000;
    int arr[N];
    for (int i = 0; i < N; i++)
        {
            arr[i] = i +1;
        }
    
        int steps = 0;
        // First test; search for the last
    cout << "\n- Searching for 100000 -" << endl;
    int index = lin_search(arr, 100000, 100000, steps); //Linear search
    cout << "Linear search found at index " << index << ". Steps: " << steps << endl;

    index = bin_search(arr, 100000, 100000, steps); //Binary search
    cout << "Binary Search found at index " << index<< ". Steps: " << steps << endl;

    // Second test; search for the first
    cout << "\n- Searching for 1 -" << endl;

    index = lin_search(arr, 100000, 1, steps); //Linear search
    cout << "Linear Search found at index " << index<< ". Steps: " << steps << endl;

    index = bin_search(arr, 100000, 1, steps); //Binary search
    cout << "Binary Search found at index " << index<< ". Steps: " << steps << endl;

    // Third test; search for a middle
    cout << "\n- Searching for 50000 (middle element) -" << endl;

    index = lin_search(arr, 100000, 50000, steps); //Linear seach
    cout << "Linear Search found at index " << index<< ". Steps: " << steps << endl;

    index = bin_search(arr, 100000, 50000, steps); //Binary search
    cout << "Binary Search found at index " << index<< ". Steps: " << steps << endl;
        
        
        
        return 0;
}
/*
My ran program looks as such :-


PS C:\Users\abdul\Desktop\VS\Assignments\CISC187\week-2> g++ .\search_comparison.cpp
PS C:\Users\abdul\Desktop\VS\Assignments\CISC187\week-2> ./a.exe

- Searching for 100000 -
Linear search found at index 99999. Steps: 100000
Binary Search found at index 99999. Steps: 17

- Searching for 1 -
Linear Search found at index 0. Steps: 1
Binary Search found at index 0. Steps: 16

- Searching for 50000 (middle element) -
Linear Search found at index 49999. Steps: 50000
Binary Search found at index 49999. Steps: 1
PS C:\Users\abdul\Desktop\VS\Assignments\CISC187\week-2> 


*/