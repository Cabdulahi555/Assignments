//Cabdulahi Hussein
//Prof.Danish Khan
//Assignment 2 - search_comparison.cpp
//Purpose: Build, implement and compare binary and linear search for large data sets.


#include <iostream>
using namespace std;

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
   
    const int N = 100000;
    int arr[N];
    for (int i = 0; i < N; i++)
        {
            arr[i] = i +1;
        }
    
        int steps = 0;
        // Test 1: search for the LAST element (worst-case for linear search)
    cout << "\n=== Searching for 100000 (worst-case / last element) ===" << endl;

    int index = lin_search(arr, 100000, 100000, steps);
    cout << "Linear Search  -> found at index " << index
         << " | steps: " << steps << endl;

    index = bin_search(arr, 100000, 100000, steps);
    cout << "Binary Search  -> found at index " << index
         << " | steps: " << steps << endl;

    // Test 2: search for the FIRST element (best-case for linear search)
    cout << "\n=== Searching for 1 (best-case / first element) ===" << endl;

    index = lin_search(arr, 100000, 1, steps);
    cout << "Linear Search  -> found at index " << index
         << " | steps: " << steps << endl;

    index = bin_search(arr, 100000, 1, steps);
    cout << "Binary Search  -> found at index " << index
         << " | steps: " << steps << endl;

    // Test 3: search for a MIDDLE element
    cout << "\n=== Searching for 50000 (middle element) ===" << endl;

    index = lin_search(arr, 100000, 50000, steps);
    cout << "Linear Search  -> found at index " << index
         << " | steps: " << steps << endl;

    index = bin_search(arr, 100000, 50000, steps);
    cout << "Binary Search  -> found at index " << index
         << " | steps: " << steps << endl;
        
        
        
        return 0;
}
/*
My ran program looks as such :-


PS C:\Users\abdul\Desktop\VS\Assignments\CISC187\week-1> g++ .\search_comparison.cpp
PS C:\Users\abdul\Desktop\VS\Assignments\CISC187\week-1> ./a.exe

=== Searching for 100000 (worst-case / last element) ===
Linear Search  -> found at index 99999 | steps: 100000
Binary Search  -> found at index 99999 | steps: 17

=== Searching for 1 (best-case / first element) ===
Linear Search  -> found at index 0 | steps: 1
Binary Search  -> found at index 0 | steps: 16

=== Searching for 50000 (middle element) ===
Linear Search  -> found at index 49999 | steps: 50000
Binary Search  -> found at index 49999 | steps: 1
PS C:\Users\abdul\Desktop\VS\Assignments\CISC187\week-1> 
*/